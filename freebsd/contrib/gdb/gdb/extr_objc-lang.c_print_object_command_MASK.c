
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct value {int dummy; } ;
struct expression {TYPE_2__* language_defn; } ;
struct cleanup {int dummy; } ;
struct TYPE_4__ {TYPE_1__* la_exp_desc; } ;
struct TYPE_3__ {struct value* (* evaluate_exp ) (int ,struct expression*,int*,int ) ;} ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct value* FUNC_0 (struct value*,int,struct value**) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*) ;
 struct value* FUNC_3 (char*) ;
 int VAR_3 ;
 struct cleanup* FUNC_4 (int ,struct expression**) ;
 struct expression* FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 struct value* FUNC_8 (int ,struct expression*,int*,int ) ;
 scalar_t__ FUNC_9 (struct value*) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_4, int VAR_5)
{
  struct value *VAR_6, *VAR_7, *VAR_8;
  CORE_ADDR VAR_9, VAR_10;
  int VAR_11 = 0;
  char VAR_12 = -1;

  if (!VAR_4 || !*VAR_4)
    FUNC_2 (
"The 'print-object' command requires an argument (an Objective-C object)");

  {
    struct expression *VAR_13 = FUNC_5 (VAR_4);
    struct cleanup *VAR_14 =
      FUNC_4 (VAR_3, &VAR_13);
    int VAR_15 = 0;

    VAR_6 = VAR_13->language_defn->la_exp_desc->evaluate_exp
      (VAR_2, VAR_13, &VAR_15, VAR_0);
    FUNC_1 (VAR_14);
  }


  VAR_10 = FUNC_9 (VAR_6);
  FUNC_7 (VAR_10, &VAR_12, 1);

  VAR_7 = FUNC_3 ("_NSPrintForDebugger");
  if (VAR_7 == ((void*)0))
    FUNC_2 ("Unable to locate _NSPrintForDebugger in child process");

  VAR_8 = FUNC_0 (VAR_7, 1, &VAR_6);

  VAR_9 = FUNC_9 (VAR_8);
  if (VAR_9 == 0)
    FUNC_2 ("object returns null description");

  FUNC_7 (VAR_9 + VAR_11++, &VAR_12, 1);
  if (VAR_12 != '\0')
    do
      {
 VAR_1;
 FUNC_6 ("%c", VAR_12);
 FUNC_7 (VAR_9 + VAR_11++, &VAR_12, 1);
      } while (VAR_12 != 0);
  else
    FUNC_6("<object returns empty description>");
  FUNC_6 ("\n");
}
