
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char**,int*) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int*) ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (char*,size_t,char*,int,char) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static ssize_t FUNC_11(struct file *VAR_6, char *VAR_7, size_t VAR_8)
{



 char *VAR_9 = VAR_7;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int *VAR_14;

 FUNC_3(&VAR_5);
 VAR_13 = FUNC_6();
 if (VAR_13 == 0) {





  FUNC_4(&VAR_5);
  FUNC_9(VAR_7, "0\n");
  return FUNC_10(VAR_7);
 }

 VAR_14 = FUNC_1(VAR_13, sizeof(int), VAR_3);
 VAR_11 = -VAR_2;
 if (VAR_14 == ((void*)0))
  goto out_free;

 if (VAR_8 > 0) {
  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
   VAR_11 = FUNC_0(&VAR_9, &VAR_14[VAR_10]);
   if (VAR_11 == -VAR_1)
    break;
   if (VAR_11)
    goto out_free;
   VAR_11 = -VAR_0;
   if (VAR_14[VAR_10] < 0)
    goto out_free;
  }
  VAR_11 = FUNC_7(VAR_10, VAR_14);
  if (VAR_11)
   goto out_free;
 }

 VAR_11 = FUNC_5(VAR_13, VAR_14);
 if (VAR_11)
  goto out_free;

 VAR_9 = VAR_7;
 VAR_8 = VAR_4;
 for (VAR_10 = 0; VAR_10 < VAR_13 && VAR_8 > 0; VAR_10++) {
  FUNC_8(VAR_9, VAR_8, "%d%c", VAR_14[VAR_10], (VAR_10 == VAR_13-1 ? '\n' : ' '));
  VAR_12 = FUNC_10(VAR_9);
  VAR_8 -= VAR_12;
  VAR_9 += VAR_12;
 }
 VAR_11 = VAR_9 - VAR_7;
out_free:
 FUNC_2(VAR_14);
 FUNC_4(&VAR_5);
 return VAR_11;
}
