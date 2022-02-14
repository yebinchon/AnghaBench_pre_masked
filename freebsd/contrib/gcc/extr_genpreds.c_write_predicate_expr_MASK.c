
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;






 size_t VAR_0 ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 char** VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char) ;
 int VAR_2 ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_3)
{
  switch (FUNC_0 (VAR_3))
    {
    case 134:
      FUNC_8 ('(');
      FUNC_10 (FUNC_2 (VAR_3, 0));
      FUNC_4 (") && (", VAR_2);
      FUNC_10 (FUNC_2 (VAR_3, 1));
      FUNC_8 (')');
      break;

    case 132:
      FUNC_8 ('(');
      FUNC_10 (FUNC_2 (VAR_3, 0));
      FUNC_4 (") || (", VAR_2);
      FUNC_10 (FUNC_2 (VAR_3, 1));
      FUNC_8 (')');
      break;

    case 128:
      FUNC_4 ("!(", VAR_2);
      FUNC_10 (FUNC_2 (VAR_3, 0));
      FUNC_8 (')');
      break;

    case 133:
      FUNC_8 ('(');
      FUNC_10 (FUNC_2 (VAR_3, 0));
      FUNC_4 (") ? (", VAR_2);
      FUNC_10 (FUNC_2 (VAR_3, 1));
      FUNC_4 (") : (", VAR_2);
      FUNC_10 (FUNC_2 (VAR_3, 2));
      FUNC_8 (')');
      break;

    case 130:
      if (FUNC_1 (VAR_3) == VAR_0)
        FUNC_7 ("%s (op, mode)", FUNC_3 (VAR_3, 1));
      else
        FUNC_7 ("%s (op, %smode)", FUNC_3 (VAR_3, 1), VAR_1[FUNC_1 (VAR_3)]);
      break;

    case 131:
      FUNC_9 (FUNC_3 (VAR_3, 1), FUNC_3 (VAR_3, 0));
      break;

    case 129:
      FUNC_6 (FUNC_3 (VAR_3, 0));
      break;

    default:
      FUNC_5 ();
    }
}
