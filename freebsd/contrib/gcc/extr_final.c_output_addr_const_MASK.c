
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int close_paren; int open_paren; } ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;

 int FUNC_3 (int ) ;


 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int const FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_8 (int ) ;


 int FUNC_9 (int *,int ,int ) ;





 int FUNC_10 (int ) ;
 int VAR_3 ;
 int FUNC_11 (int ,int) ;
 char* FUNC_12 (int ,int ) ;

 int FUNC_13 (int *,char*) ;
 int VAR_4 ;
 int FUNC_14 (int *,char*,...) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char,int *) ;
 int FUNC_19 (int ) ;
 TYPE_2__ VAR_5 ;

void
FUNC_20 (FILE *VAR_6, rtx VAR_7)
{
  char VAR_8[256];

 restart:
  switch (FUNC_6 (VAR_7))
    {
    case 133:
      FUNC_18 ('.', VAR_6);
      break;

    case 129:
      if (FUNC_10 (VAR_7))
 FUNC_16 (FUNC_10 (VAR_7));



      FUNC_13 (VAR_6, FUNC_12 (VAR_7, 0));

      break;

    case 135:
      VAR_7 = FUNC_11 (VAR_7, 0);

    case 139:
      FUNC_0 (VAR_8, "L", FUNC_3 (VAR_7));



      FUNC_13 (VAR_6, VAR_8);

      break;

    case 136:
      FUNC_14 (VAR_6, VAR_0, FUNC_8 (VAR_7));
      break;

    case 138:


      FUNC_20 (VAR_6, FUNC_11 (VAR_7, 0));
      break;

    case 137:
      if (FUNC_7 (VAR_7) == VAR_3)
 {

   if (FUNC_4 (VAR_7))
     FUNC_14 (VAR_6, VAR_1,
       FUNC_4 (VAR_7), FUNC_5 (VAR_7));
   else if (FUNC_5 (VAR_7) < 0)
     FUNC_14 (VAR_6, VAR_2, FUNC_5 (VAR_7));
   else
     FUNC_14 (VAR_6, VAR_0, FUNC_5 (VAR_7));
 }
      else


 FUNC_17 ("floating constant misused");
      break;

    case 132:

      if (FUNC_6 (FUNC_11 (VAR_7, 0)) == 136)
 {
   FUNC_20 (VAR_6, FUNC_11 (VAR_7, 1));
   if (FUNC_8 (FUNC_11 (VAR_7, 0)) >= 0)
     FUNC_14 (VAR_6, "+");
   FUNC_20 (VAR_6, FUNC_11 (VAR_7, 0));
 }
      else
 {
   FUNC_20 (VAR_6, FUNC_11 (VAR_7, 0));
   if (FUNC_6 (FUNC_11 (VAR_7, 1)) != 136
       || FUNC_8 (FUNC_11 (VAR_7, 1)) >= 0)
     FUNC_14 (VAR_6, "+");
   FUNC_20 (VAR_6, FUNC_11 (VAR_7, 1));
 }
      break;

    case 134:


      VAR_7 = FUNC_19 (VAR_7);
      if (FUNC_6 (VAR_7) != 134)
 goto restart;

      FUNC_20 (VAR_6, FUNC_11 (VAR_7, 0));
      FUNC_14 (VAR_6, "-");
      if ((FUNC_6 (FUNC_11 (VAR_7, 1)) == 136 && FUNC_8 (FUNC_11 (VAR_7, 1)) >= 0)
   || FUNC_6 (FUNC_11 (VAR_7, 1)) == 133
   || FUNC_6 (FUNC_11 (VAR_7, 1)) == 129)
 FUNC_20 (VAR_6, FUNC_11 (VAR_7, 1));
      else
 {
   FUNC_15 (VAR_5.asm_out.open_paren, VAR_6);
   FUNC_20 (VAR_6, FUNC_11 (VAR_7, 1));
   FUNC_15 (VAR_5.asm_out.close_paren, VAR_6);
 }
      break;

    case 128:
    case 131:
    case 130:
      FUNC_20 (VAR_6, FUNC_11 (VAR_7, 0));
      break;

    default:






      FUNC_17 ("invalid expression as operand");
    }
}
