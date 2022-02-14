
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;





 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;




 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;




 int FUNC_6 (int ,int) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_4, rtx VAR_5, int VAR_6)
{
  char VAR_7[VAR_0], VAR_8[VAR_0], VAR_9[VAR_0];

  switch (FUNC_2 (VAR_5))
    {
    case 132:
      FUNC_12 (VAR_7, FUNC_3 (VAR_5), VAR_6);
      FUNC_12 (VAR_8, FUNC_4 (VAR_5), VAR_6);
      FUNC_13 (VAR_4, "%s=%s", VAR_7, VAR_8);
      break;
    case 134:
      FUNC_13 (VAR_4, "return");
      break;
    case 138:
      FUNC_11 (VAR_4, VAR_5, VAR_6);
      break;
    case 137:
      FUNC_12 (VAR_7, FUNC_6 (VAR_5, 0), VAR_6);
      FUNC_13 (VAR_4, "clobber %s", VAR_7);
      break;
    case 128:
      FUNC_12 (VAR_7, FUNC_6 (VAR_5, 0), VAR_6);
      FUNC_13 (VAR_4, "use %s", VAR_7);
      break;
    case 136:
      if (FUNC_2 (FUNC_1 (VAR_5)) == VAR_2
   && FUNC_6 (FUNC_1 (VAR_5), 1) == VAR_3)
 FUNC_12 (VAR_7, FUNC_6 (FUNC_1 (VAR_5), 0), VAR_6);
      else if (FUNC_2 (FUNC_1 (VAR_5)) == VAR_1
        && FUNC_6 (FUNC_1 (VAR_5), 1) == VAR_3)
 {
   VAR_7[0] = '!';
   FUNC_12 (VAR_7 + 1, FUNC_6 (FUNC_1 (VAR_5), 0), VAR_6);
 }
      else
 FUNC_12 (VAR_7, FUNC_1 (VAR_5), VAR_6);
      FUNC_15 (VAR_8, FUNC_0 (VAR_5), VAR_6);
      FUNC_13 (VAR_4, "(%s) %s", VAR_7, VAR_8);
      break;
    case 135:
      {
 int VAR_10;

 FUNC_13 (VAR_7, "{");
 for (VAR_10 = 0; VAR_10 < FUNC_9 (VAR_5, 0); VAR_10++)
   {
     FUNC_15 (VAR_8, FUNC_8 (VAR_5, 0, VAR_10), VAR_6);
     FUNC_13 (VAR_9, "%s%s;", VAR_7, VAR_8);
     FUNC_14 (VAR_7, VAR_9);
   }
 FUNC_13 (VAR_4, "%s}", VAR_7);
      }
      break;
    case 133:

      FUNC_10 ();
    case 139:
      FUNC_13 (VAR_4, "asm {%s}", FUNC_7 (VAR_5, 0));
      break;
    case 140:
      break;
    case 141:
      FUNC_12 (VAR_4, FUNC_6 (VAR_5, 0), VAR_6);
      break;
    case 131:
      FUNC_12 (VAR_7, FUNC_5 (VAR_5), VAR_6);
      FUNC_13 (VAR_4, "trap_if %s", VAR_7);
      break;
    case 130:
      {
 int VAR_11;

 FUNC_13 (VAR_7, "unspec{");
 for (VAR_11 = 0; VAR_11 < FUNC_9 (VAR_5, 0); VAR_11++)
   {
     FUNC_15 (VAR_8, FUNC_8 (VAR_5, 0, VAR_11), VAR_6);
     FUNC_13 (VAR_9, "%s%s;", VAR_7, VAR_8);
     FUNC_14 (VAR_7, VAR_9);
   }
 FUNC_13 (VAR_4, "%s}", VAR_7);
      }
      break;
    case 129:
      {
 int VAR_12;

 FUNC_13 (VAR_7, "unspec/v{");
 for (VAR_12 = 0; VAR_12 < FUNC_9 (VAR_5, 0); VAR_12++)
   {
     FUNC_15 (VAR_8, FUNC_8 (VAR_5, 0, VAR_12), VAR_6);
     FUNC_13 (VAR_9, "%s%s;", VAR_7, VAR_8);
     FUNC_14 (VAR_7, VAR_9);
   }
 FUNC_13 (VAR_4, "%s}", VAR_7);
      }
      break;
    default:
      FUNC_12 (VAR_4, VAR_5, VAR_6);
    }
}
