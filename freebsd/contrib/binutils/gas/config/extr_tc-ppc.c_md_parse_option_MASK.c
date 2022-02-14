
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 void* VAR_7 ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (char*,char*) ;
 int VAR_16 ;

int
FUNC_6 (int VAR_17, char *VAR_18)
{
  switch (VAR_17)
    {
    case 'u':


      break;
    case 'a':
      if (FUNC_5 (VAR_18, "64") == 0)
 {



   FUNC_2 (FUNC_0("%s unsupported"), "-a64");

 }
      else if (FUNC_5 (VAR_18, "32") == 0)
 VAR_11 = 0;
      else
 return 0;
      break;

    case 'm':
      if (FUNC_3 (VAR_18))
 ;

      else if (FUNC_5 (VAR_18, "regnames") == 0)
 VAR_13 = VAR_6;

      else if (FUNC_5 (VAR_18, "no-regnames") == 0)
 VAR_13 = VAR_3;
      else
 {
   FUNC_1 (FUNC_0("invalid switch -m%s"), VAR_18);
   return 0;
 }
      break;
    default:
      return 0;
    }

  return 1;
}
