
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct var_info_head {int dummy; } ;
struct sym_print_data {size_t list_num; } ;
struct sym_entry {int dummy; } ;
struct line_info_head {int dummy; } ;
struct func_info_head {int dummy; } ;
struct TYPE_2__ {int sort_reverse; } ;


 scalar_t__ FUNC_0 (struct sym_print_data*) ;
 int FUNC_1 (struct sym_entry*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct sym_entry*,struct sym_print_data*,struct func_info_head*,struct var_info_head*,struct line_info_head*) ;
 struct sym_entry* FUNC_3 (struct sym_print_data*) ;

__attribute__((used)) static void
FUNC_4(struct sym_print_data *VAR_1, struct func_info_head *VAR_2,
    struct var_info_head *VAR_3, struct line_info_head *VAR_4)
{
 struct sym_entry *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return;
 if ((VAR_5 = FUNC_3(VAR_1)) == ((void*)0))
  return;
 if (VAR_0.sort_reverse == 0)
  for (VAR_6 = 0; VAR_6 != VAR_1->list_num; ++VAR_6)
   FUNC_2(&VAR_5[VAR_6], VAR_1, VAR_2, VAR_3,
       VAR_4);
 else
  for (VAR_7 = VAR_1->list_num - 1; VAR_7 != -1; --VAR_7)
   FUNC_2(&VAR_5[VAR_7], VAR_1, VAR_2, VAR_3,
       VAR_4);

 FUNC_1(VAR_5);
}
