
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_iterator {size_t num_types; TYPE_1__* type_info; int info; scalar_t__ count; scalar_t__ type; scalar_t__ function; scalar_t__ record; } ;
struct TYPE_2__ {int ctr_type; scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

void FUNC_1(struct gcov_iterator *VAR_1)
{
 int VAR_2;

 VAR_1->record = 0;
 VAR_1->function = 0;
 VAR_1->type = 0;
 VAR_1->count = 0;
 VAR_1->num_types = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_0(VAR_1->info, VAR_2)) {
   VAR_1->type_info[VAR_1->num_types].ctr_type = VAR_2;
   VAR_1->type_info[VAR_1->num_types++].offset = 0;
  }
 }
}
