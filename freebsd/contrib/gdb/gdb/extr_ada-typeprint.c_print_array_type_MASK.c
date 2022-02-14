
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*,int) ;
 struct type* FUNC_8 (struct type*) ;
 struct type* FUNC_9 (struct type*,char*) ;
 scalar_t__ FUNC_10 (struct type*) ;
 scalar_t__ FUNC_11 (struct type*) ;
 int FUNC_12 (int ,char*,struct ui_file*,int,int) ;
 int FUNC_13 (struct ui_file*,char*,...) ;
 int FUNC_14 (int ,struct ui_file*) ;
 int FUNC_15 (int ,struct ui_file*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17 (struct type *VAR_1, struct ui_file *VAR_2, int VAR_3,
    int VAR_4)
{
  int VAR_5;
  int VAR_6;

  VAR_5 = 0;
  FUNC_13 (VAR_2, "array (");

  VAR_6 = -1;
  if (VAR_3 < 0)
    FUNC_13 (VAR_2, "...");
  else
    {
      if (FUNC_10 (VAR_1))
 VAR_1 = FUNC_8 (VAR_1);
      if (FUNC_11 (VAR_1))
 {
   struct type *VAR_7 =
     FUNC_9 (VAR_1, "___XA");
   struct type *VAR_8;

   VAR_5 = 0;
   if (VAR_7 == ((void*)0))
     {
       for (VAR_8 = VAR_1; FUNC_0 (VAR_8) == VAR_0;
     VAR_8 = FUNC_5 (VAR_8))
  {
    if (VAR_8 != VAR_1)
      FUNC_13 (VAR_2, ", ");
    FUNC_14 (FUNC_3 (VAR_8), VAR_2);
    if (FUNC_1 (VAR_8, 0) > 0)
      VAR_5 = FUNC_1 (VAR_8, 0);
  }
     }
   else
     {
       int VAR_9;
       VAR_6 = FUNC_4 (VAR_7);
       for (VAR_9 = 0, VAR_8 = VAR_1;
     VAR_9 < VAR_6;
     VAR_9 += 1, VAR_8 = FUNC_5 (VAR_8))
  {
    if (VAR_9 > 0)
      FUNC_13 (VAR_2, ", ");
    FUNC_15 (FUNC_2
       (VAR_7, VAR_9), VAR_2);
    if (FUNC_1 (VAR_8, 0) > 0)
      VAR_5 = FUNC_1 (VAR_8, 0);
  }
     }
 }
      else
 {
   int VAR_10, VAR_11;
   for (VAR_10 = VAR_11 = FUNC_6 (VAR_1); VAR_10 > 0; VAR_10 -= 1)
     FUNC_13 (VAR_2, "%s<>", VAR_10 == VAR_11 ? "" : ", ");
 }
    }

  FUNC_13 (VAR_2, ") of ");
  FUNC_16 ("");
  FUNC_12 (FUNC_7 (VAR_1, VAR_6), "", VAR_2,
    VAR_3 == 0 ? 0 : VAR_3 - 1, VAR_4 + 1);
  if (VAR_5 > 0)
    FUNC_13 (VAR_2, " <packed: %d-bit elements>", VAR_5);
}
