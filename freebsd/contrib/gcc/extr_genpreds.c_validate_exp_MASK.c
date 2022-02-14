
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;



 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;


 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;




 scalar_t__ FUNC_4 (scalar_t__,int) ;
 char* FUNC_5 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_6 (int,char*,char const*,...) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_1, const char *VAR_2, int VAR_3)
{
  if (VAR_1 == 0)
    {
      FUNC_6 (VAR_3, "%s: must give a predicate expression", VAR_2);
      return 1;
    }

  switch (FUNC_0 (VAR_1))
    {

    case 133:
      if (FUNC_7 (FUNC_4 (VAR_1, 2), VAR_2, VAR_3))
 return 1;

    case 134:
    case 132:
      if (FUNC_7 (FUNC_4 (VAR_1, 1), VAR_2, VAR_3))
 return 1;

    case 128:
      return FUNC_7 (FUNC_4 (VAR_1, 0), VAR_2, VAR_3);


    case 131:
      {
 const char *VAR_4;
 for (VAR_4 = FUNC_5 (VAR_1, 1); *VAR_4; VAR_4++)
   {
     if (!FUNC_2 (*VAR_4) && !FUNC_3 (*VAR_4))
       {
  FUNC_6 (VAR_3, "%s: invalid character in path "
       "string '%s'", VAR_2, FUNC_5 (VAR_1, 1));
  VAR_0 = 1;
  return 1;
       }
   }
      }



    case 130:
    case 129:
      return 0;

    default:
      FUNC_6 (VAR_3,
    "%s: cannot use '%s' in a predicate expression",
    VAR_2, FUNC_1 (FUNC_0 (VAR_1)));
      VAR_0 = 1;
      return 1;
    }
}
