
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {int fp0; } ;


 double FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ui_file*,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct frame_info*,int,char*) ;
 int FUNC_7 (struct frame_info*,int,char*) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,char,char,struct ui_file*) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (double) ;
 double FUNC_12 (int ,char*,int*) ;

__attribute__((used)) static void
FUNC_13 (struct ui_file *VAR_3, struct frame_info *VAR_4,
   int VAR_5)
{
  char *VAR_6;
  double VAR_7, VAR_8;
  int VAR_9, VAR_10;

  VAR_6 =
    (char *) FUNC_1 (2 *
       FUNC_10 (VAR_2,
        FUNC_8 (VAR_2)->fp0));

  FUNC_2 (VAR_3, "%s:", FUNC_0 (VAR_5));
  FUNC_2 (VAR_3, "%*s", 4 - (int) FUNC_11 (FUNC_0 (VAR_5)),
      "");

  if (FUNC_10 (VAR_2, VAR_5) == 4 || FUNC_3 ())
    {


      FUNC_7 (VAR_4, VAR_5, VAR_6);
      VAR_8 = FUNC_12 (FUNC_5 (), VAR_6, &VAR_9);

      FUNC_9 (VAR_6, VAR_0, 'x', 'w',
         VAR_3);

      FUNC_2 (VAR_3, " flt: ");
      if (VAR_9)
 FUNC_2 (VAR_3, " <invalid float> ");
      else
 FUNC_2 (VAR_3, "%-17.9g", VAR_8);

      if (VAR_5 % 2 == 0)
 {
   FUNC_6 (VAR_4, VAR_5, VAR_6);
   VAR_7 = FUNC_12 (FUNC_4 (), VAR_6,
    &VAR_10);

   FUNC_2 (VAR_3, " dbl: ");
   if (VAR_10)
     FUNC_2 (VAR_3, "<invalid double>");
   else
     FUNC_2 (VAR_3, "%-24.17g", VAR_7);
 }
    }
  else
    {

      FUNC_7 (VAR_4, VAR_5, VAR_6);
      VAR_8 = FUNC_12 (FUNC_5 (), VAR_6, &VAR_9);

      FUNC_6 (VAR_4, VAR_5, VAR_6);
      VAR_7 = FUNC_12 (FUNC_4 (), VAR_6, &VAR_10);


      FUNC_9 (VAR_6, VAR_1, 'x', 'g',
         VAR_3);

      FUNC_2 (VAR_3, " flt: ");
      if (VAR_9)
 FUNC_2 (VAR_3, "<invalid float>");
      else
 FUNC_2 (VAR_3, "%-17.9g", VAR_8);

      FUNC_2 (VAR_3, " dbl: ");
      if (VAR_10)
 FUNC_2 (VAR_3, "<invalid double>");
      else
 FUNC_2 (VAR_3, "%-24.17g", VAR_7);
    }
}
