
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct target_ops*,char**,char*,int *,int *) ;
 int FUNC_1 (struct target_ops*,char**) ;
 int FUNC_2 (char*) ;

int
FUNC_3 (struct target_ops *VAR_0, CORE_ADDR VAR_1, CORE_ADDR *VAR_2)
{
  CORE_ADDR VAR_3, VAR_4;
  char *VAR_5;
  int VAR_6 = FUNC_1 (VAR_0, &VAR_5);
  char *VAR_7 = VAR_5;
  int VAR_8 = 0;

  if (VAR_6 <= 0)
    return VAR_6;

  while (1)
    switch (FUNC_0 (VAR_0, &VAR_7, VAR_5 + VAR_6, &VAR_3, &VAR_4))
      {
      case 1:
 if (VAR_3 == VAR_1)
   {
     FUNC_2 (VAR_5);
     *VAR_2 = VAR_4;
     return 1;
   }
 break;
      case 0:
 FUNC_2 (VAR_5);
 return 0;
      default:
 FUNC_2 (VAR_5);
 return -1;
      }


}
