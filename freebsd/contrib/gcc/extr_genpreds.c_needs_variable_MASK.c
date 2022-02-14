
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (char const) ;




 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char const*) ;

__attribute__((used)) static bool
FUNC_9 (rtx VAR_1, const char *VAR_2)
{
  switch (FUNC_0 (VAR_1))
    {


    case 133:
      if (FUNC_9 (FUNC_3 (VAR_1, 2), VAR_2))
 return 1;

    case 134:
    case 132:
      if (FUNC_9 (FUNC_3 (VAR_1, 1), VAR_2))
 return 1;

    case 128:
      return FUNC_9 (FUNC_3 (VAR_1, 0), VAR_2);


    case 131:
      return !FUNC_6 (VAR_2, "op");


    case 130:
      if (!FUNC_6 (VAR_2, "op"))
 return 1;
      if (!FUNC_6 (VAR_2, "mode") && FUNC_1 (VAR_1) == VAR_0)
 return 1;
      return 0;


    case 129:
      {
 const char *VAR_3 = FUNC_4 (VAR_1, 0);
 const char *VAR_4 = FUNC_8 (VAR_3, VAR_2);
 if (!VAR_4)
   return 0;
 if (VAR_4 != VAR_3 && (FUNC_2 (VAR_4[-1]) || VAR_4[-1] == '_'))
   return 0;
 VAR_4 += FUNC_7 (VAR_2);
 if (FUNC_2 (VAR_4[0] || VAR_4[0] == '_'))
   return 0;
      }
      return 1;

    default:
      FUNC_5 ();
    }
}
