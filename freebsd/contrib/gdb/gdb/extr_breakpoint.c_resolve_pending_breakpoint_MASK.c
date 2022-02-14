
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct symtabs_and_lines {int dummy; } ;
struct symtab_and_line {int dummy; } ;
struct lang_and_radix {int radix; int lang; } ;
struct cleanup {int dummy; } ;
struct breakpoint {char* addr_string; int from_tty; int flag; int input_radix; int language; } ;
struct TYPE_2__ {int la_language; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,struct breakpoint*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cleanup* FUNC_2 (int ,struct lang_and_radix*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (struct breakpoint *VAR_4)
{


  struct symtabs_and_lines VAR_5;
  struct symtab_and_line VAR_6;
  char **VAR_7 = (char **) ((void*)0);
  char *VAR_8 = VAR_4->addr_string;
  char **VAR_9;
  char *VAR_10;
  int VAR_11;
  int VAR_12 = 0;
  struct ui_file *VAR_13;
  struct lang_and_radix VAR_14;
  struct cleanup *VAR_15;



  VAR_14.lang = VAR_1->la_language;
  VAR_14.radix = VAR_3;
  VAR_15 = FUNC_2 (VAR_2, &VAR_14);

  FUNC_4 (VAR_4->language);
  VAR_3 = VAR_4->input_radix;
  VAR_11 = FUNC_0 (VAR_4->addr_string, VAR_4->flag, VAR_4->from_tty, VAR_4);

  if (VAR_11 == VAR_0)

    FUNC_3 ("Pending breakpoint \"%s\" resolved\n", VAR_4->addr_string);

  FUNC_1 (VAR_15);
  return VAR_11;
}
