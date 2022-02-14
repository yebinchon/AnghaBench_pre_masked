
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;







 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;




 int FUNC_5 (int ,int) ;
 char* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (char,int *) ;

__attribute__((used)) static void
FUNC_10 (FILE *VAR_1, rtx VAR_2)
{
  switch (FUNC_2 (VAR_2))
    {
    case 134:
      FUNC_8 (VAR_1, VAR_0, FUNC_4 (VAR_2));
      return;

    case 135:
      FUNC_8 (VAR_1, "<0x%lx,0x%lx>", (long)FUNC_7 (VAR_2, 2), (long)FUNC_7 (VAR_2, 3));
      return;

    case 132:
      {
 int VAR_3;

 FUNC_8 (VAR_1, "<");
 for (VAR_3 = 0; VAR_3 < FUNC_1 (VAR_2); VAR_3++)
   {
     FUNC_8 (VAR_1, VAR_0, FUNC_4 (FUNC_0 (VAR_2, VAR_3)));
     if (VAR_3 < (FUNC_1 (VAR_2) - 1))
       FUNC_9 (',', VAR_1);
   }
 FUNC_8 (VAR_1, ">");
      }
      return;

    case 133:
      FUNC_8 (VAR_1, "\"%s\"", FUNC_6 (VAR_2, 0));
      return;

    case 128:
      FUNC_8 (VAR_1, "`%s'", FUNC_6 (VAR_2, 0));
      return;

    case 131:
      FUNC_8 (VAR_1, "L%d", FUNC_3 (FUNC_5 (VAR_2, 0)));
      return;

    case 136:
      FUNC_10 (VAR_1, FUNC_5 (VAR_2, 0));
      return;

    case 129:
      FUNC_10 (VAR_1, FUNC_5 (VAR_2, 0));
      FUNC_8 (VAR_1, "+");
      FUNC_10 (VAR_1, FUNC_5 (VAR_2, 1));
      return;

    case 130:
      FUNC_8 (VAR_1, "pc");
      return;

    default:
      FUNC_8 (VAR_1, "????");
      return;
    }
}
