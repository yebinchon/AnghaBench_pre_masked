
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (int *,size_t,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (char*,size_t) ;
 scalar_t__ FUNC_5 (int,char*,size_t) ;
 scalar_t__ FUNC_6 (int,char*,size_t) ;

int
FUNC_7(int VAR_3, int VAR_4)
{
 size_t VAR_5, VAR_6;
 int VAR_7;
 struct stat VAR_8;
 char *VAR_9, *VAR_10;
 ssize_t VAR_11, VAR_12;


 if (FUNC_1(VAR_3, &VAR_8) < 0)
  return (-1);


 if (VAR_8.st_size == 0)
  return (0);

 VAR_10 = ((void*)0);
 VAR_7 = 0;
 VAR_5 = (size_t) VAR_8.st_size;
 if (VAR_7 == 0) {
  if ((VAR_10 = FUNC_2(VAR_5)) == ((void*)0))
   return (-1);
  VAR_9 = VAR_10;
  for (VAR_6 = VAR_5; VAR_6 > 0; VAR_6 -= (size_t) VAR_11, VAR_9 += VAR_11) {
   if ((VAR_11 = FUNC_5(VAR_3, VAR_9, VAR_6)) < 0) {
    FUNC_0(VAR_10);
    return (-1);
   }
  }
 }




 for (VAR_6 = VAR_5, VAR_9 = VAR_10; VAR_6 > 0; VAR_6 -= (size_t) VAR_12, VAR_9 += VAR_12)
  if ((VAR_12 = FUNC_6(VAR_4, VAR_9, VAR_6)) <= 0)
   break;







 if (!VAR_7)
  FUNC_0(VAR_10);

 return (VAR_6 > 0 ? -1 : 0);
}
