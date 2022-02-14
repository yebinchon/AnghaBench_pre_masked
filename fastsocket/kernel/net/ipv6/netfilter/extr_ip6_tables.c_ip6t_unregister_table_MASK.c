
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_table_info {scalar_t__ number; scalar_t__ initial_entries; int size; void** entries; } ;
struct xt_table {struct module* me; } ;
struct module {int dummy; } ;


 int FUNC_0 (void*,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct module*) ;
 size_t FUNC_2 () ;
 int FUNC_3 (struct xt_table_info*) ;
 struct xt_table_info* FUNC_4 (struct xt_table*) ;

void FUNC_5(struct xt_table *VAR_1)
{
 struct xt_table_info *VAR_2;
 void *VAR_3;
 struct module *VAR_4 = VAR_1->me;

 VAR_2 = FUNC_4(VAR_1);


 VAR_3 = VAR_2->entries[FUNC_2()];
 FUNC_0(VAR_3, VAR_2->size, VAR_0, ((void*)0));
 if (VAR_2->number > VAR_2->initial_entries)
  FUNC_1(VAR_4);
 FUNC_3(VAR_2);
}
