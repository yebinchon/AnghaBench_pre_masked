
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct field {int type; } ;
struct TYPE_2__ {scalar_t__ la_language; } ;


 int VAR_0 ;
 struct field* FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct ui_file*,char*) ;
 int FUNC_4 (struct ui_file*,char*,scalar_t__,int ) ;
 int FUNC_5 (char*,struct ui_file*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,char*,struct ui_file*,int ) ;

__attribute__((used)) static void
FUNC_7 (struct type *VAR_3, char *VAR_4, char *VAR_5,
      int VAR_6, struct ui_file *VAR_7)
{
  struct field *VAR_8 = FUNC_0 (VAR_3);
  int VAR_9 = FUNC_1 (VAR_3);
  int VAR_10 = FUNC_2 (VAR_3);
  int VAR_11;

  FUNC_4 (VAR_7, VAR_4, VAR_2, VAR_0);
  FUNC_4 (VAR_7, VAR_5, VAR_2, VAR_0);
  FUNC_5 ("(", VAR_7);


  VAR_11 = VAR_6 ? 0 : 1;
  if (VAR_9 > VAR_11)
    {
      while (VAR_11 < VAR_9)
 {
   FUNC_6 (VAR_8[VAR_11++].type, "", VAR_7, 0);

   if (VAR_11 == VAR_9 && VAR_10)
     FUNC_3 (VAR_7, ", ...");
   else if (VAR_11 < VAR_9)
     FUNC_3 (VAR_7, ", ");
 }
    }
  else if (VAR_10)
    FUNC_3 (VAR_7, "...");
  else if (VAR_1->la_language == VAR_2)
    FUNC_3 (VAR_7, "void");

  FUNC_3 (VAR_7, ")");
}
