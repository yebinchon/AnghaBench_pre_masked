
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct field {int type; } ;
struct TYPE_2__ {scalar_t__ la_language; } ;


 struct field* FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (int ,char*,struct ui_file*,int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct ui_file*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_2, struct ui_file *VAR_3)
{
  int VAR_4;
  struct field *VAR_5;

  FUNC_4 (VAR_3, "(");
  VAR_5 = FUNC_0 (VAR_2);
  if (VAR_5 != ((void*)0))
    {
      int VAR_6;




      for (VAR_6 = 1; VAR_6 < FUNC_1 (VAR_2); VAR_6++)
 {
   FUNC_3 (VAR_5[VAR_6].type, "", VAR_3, -1, 0);
   if (VAR_6 != FUNC_1 (VAR_2))
     {
       FUNC_4 (VAR_3, ",");
       FUNC_5 ("    ");
     }
 }
      if (FUNC_2 (VAR_2))
 FUNC_4 (VAR_3, "...");
      else if (VAR_6 == 1
        && (VAR_0->la_language == VAR_1))
 FUNC_4 (VAR_3, "void");
    }
  else if (VAR_0->la_language == VAR_1)
    {
      FUNC_4 (VAR_3, "void");
    }

  FUNC_4 (VAR_3, ")");
}
