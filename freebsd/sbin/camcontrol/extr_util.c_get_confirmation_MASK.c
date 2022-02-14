
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;


 int * FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

int
FUNC_3(void)
{
 char VAR_2[1024];
 int VAR_3 = -1;

 do {
  FUNC_1(VAR_1, "Are you SURE you want to do this? (yes/no) ");
  if (FUNC_0(VAR_2, sizeof(VAR_2), VAR_0) != ((void*)0)) {
   if (FUNC_2(VAR_2, "yes", 3) == 0)
    VAR_3 = 1;
   else if (FUNC_2(VAR_2, "no", 2) == 0)
    VAR_3 = 0;
   else
    FUNC_1(VAR_1,
        "Please answer \"yes\" or \"no\"\n");
  } else
   VAR_3 = 0;
 } while (VAR_3 == -1);
 return (VAR_3);
}
