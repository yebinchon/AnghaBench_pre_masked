
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buffer; } ;
typedef TYPE_1__ regex_t ;
struct TYPE_7__ {TYPE_3__* org_indices; int * str_tree; int str_tree_storage_idx; TYPE_3__* str_tree_storage; } ;
typedef TYPE_2__ re_dfa_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_3__ bin_tree_storage_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1 (regex_t *VAR_1)
{
  re_dfa_t *VAR_2 = (re_dfa_t *) VAR_1->buffer;
  bin_tree_storage_t *VAR_3, *VAR_4;
  for (VAR_3 = VAR_2->str_tree_storage; VAR_3; VAR_3 = VAR_4)
    {
      VAR_4 = VAR_3->next;
      FUNC_0 (VAR_3);
    }
  VAR_2->str_tree_storage = ((void*)0);
  VAR_2->str_tree_storage_idx = VAR_0;
  VAR_2->str_tree = ((void*)0);
  FUNC_0 (VAR_2->org_indices);
  VAR_2->org_indices = ((void*)0);
}
