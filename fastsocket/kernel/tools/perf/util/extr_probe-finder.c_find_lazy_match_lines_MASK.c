
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (struct list_head*,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,char const*) ;

__attribute__((used)) static int FUNC_10(struct list_head *VAR_1,
     const char *VAR_2, const char *VAR_3)
{
 FILE *VAR_4;
 char *VAR_5 = ((void*)0);
 size_t VAR_6;
 ssize_t VAR_7;
 int VAR_8 = 0, VAR_9 = 1;

 VAR_4 = FUNC_2(VAR_2, "r");
 if (!VAR_4) {
  FUNC_7("Failed to open %s: %s\n", VAR_2, FUNC_8(VAR_0));
  return -VAR_0;
 }

 while ((VAR_7 = FUNC_4(&VAR_5, &VAR_6, VAR_4)) > 0) {

  if (VAR_5[VAR_7 - 1] == '\n')
   VAR_5[VAR_7 - 1] = '\0';

  if (FUNC_9(VAR_5, VAR_3)) {
   FUNC_5(VAR_1, VAR_9);
   VAR_8++;
  }
  VAR_9++;
 }

 if (FUNC_1(VAR_4))
  VAR_8 = -VAR_0;
 FUNC_3(VAR_5);
 FUNC_0(VAR_4);

 if (VAR_8 == 0)
  FUNC_6("No matched lines found in %s.\n", VAR_2);
 return VAR_8;
}
