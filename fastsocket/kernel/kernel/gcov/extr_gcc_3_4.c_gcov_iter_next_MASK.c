
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gcov_iterator {int record; size_t type; size_t num_types; TYPE_1__* info; int function; int count; } ;
struct TYPE_6__ {int * n_ctrs; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {int n_functions; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct gcov_iterator*) ;
 TYPE_2__* FUNC_1 (struct gcov_iterator*) ;

int FUNC_2(struct gcov_iterator *VAR_1)
{
 switch (VAR_1->record) {
 case 134:
 case 129:
 case 131:
 case 130:
 case 132:
 case 135:

  VAR_1->record++;
  break;
 case 137:

  VAR_1->count++;

 case 136:
  if (VAR_1->count < FUNC_0(VAR_1)->n_ctrs[VAR_1->type]) {
   VAR_1->record = 9;
   break;
  }

  FUNC_1(VAR_1)->offset += VAR_1->count;
  VAR_1->count = 0;
  VAR_1->type++;

 case 133:
  if (VAR_1->type < VAR_1->num_types) {
   VAR_1->record = 7;
   break;
  }

  VAR_1->type = 0;
  VAR_1->function++;

 case 128:
  if (VAR_1->function < VAR_1->info->n_functions)
   VAR_1->record = 3;
  else
   VAR_1->record = -1;
  break;
 }

 if (VAR_1->record == -1)
  return -VAR_0;
 else
  return 0;
}
