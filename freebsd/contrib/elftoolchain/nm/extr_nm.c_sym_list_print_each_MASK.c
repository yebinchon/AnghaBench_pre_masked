
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct var_info_head {int dummy; } ;
struct sym_print_data {char* filename; char* objname; int sh_num; char** s_table; int t_table; } ;
struct sym_entry {int * name; TYPE_1__* sym; } ;
struct line_info_head {int dummy; } ;
struct func_info_head {int dummy; } ;
struct TYPE_6__ {scalar_t__ print_name; int debug_line; int (* elem_print_fn ) (char,char const*,TYPE_1__*,int *) ;} ;
struct TYPE_5__ {int st_shndx; } ;


 scalar_t__ FUNC_0 (struct sym_print_data*) ;
 int FUNC_1 (char) ;
 scalar_t__ VAR_0 ;







 int FUNC_2 (int ) ;
 char FUNC_3 (TYPE_1__*,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_4 (struct sym_entry*,struct func_info_head*,struct var_info_head*,struct line_info_head*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char,char const*,TYPE_1__*,int *) ;
 int FUNC_7 (char,char const*,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_8(struct sym_entry *VAR_2, struct sym_print_data *VAR_3,
    struct func_info_head *VAR_4, struct var_info_head *VAR_5,
    struct line_info_head *VAR_6)
{
 const char *VAR_7;
 char VAR_8;

 if (VAR_2 == ((void*)0) || FUNC_0(VAR_3))
  return;

 FUNC_2(VAR_2->name != ((void*)0));
 FUNC_2(VAR_2->sym != ((void*)0));

 VAR_8 = FUNC_3(VAR_2->sym, VAR_3->t_table);

 if (VAR_1.print_name == VAR_0) {
  FUNC_5("%s", VAR_3->filename);
  if (VAR_1.elem_print_fn == &FUNC_7) {
   if (VAR_3->objname != ((void*)0))
    FUNC_5("[%s]", VAR_3->objname);
   FUNC_5(": ");
  } else {
   if (VAR_3->objname != ((void*)0))
    FUNC_5(":%s", VAR_3->objname);
   FUNC_5(":");
  }
 }

 switch (VAR_2->sym->st_shndx) {
 case 128:

  VAR_7 = "*LOPROC*";
  break;
 case 131:
  VAR_7 = "*HIPROC*";
  break;
 case 129:
  VAR_7 = "*LOOS*";
  break;
 case 132:
  VAR_7 = "*HIOS*";
  break;
 case 134:
  VAR_7 = "*ABS*";
  break;
 case 133:
  VAR_7 = "*COM*";
  break;
 case 130:

  VAR_7 = "*HIRESERVE*";
  break;
 default:
  if (VAR_2->sym->st_shndx > VAR_3->sh_num)
   return;
  VAR_7 = VAR_3->s_table[VAR_2->sym->st_shndx];
  break;
 }

 VAR_1.elem_print_fn(VAR_8, VAR_7, VAR_2->sym, VAR_2->name);

 if (VAR_1.debug_line == 1 && !FUNC_1(VAR_8))
  FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6);

 FUNC_5("\n");
}
