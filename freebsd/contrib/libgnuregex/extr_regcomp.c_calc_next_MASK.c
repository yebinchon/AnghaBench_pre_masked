
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_7__ {int type; } ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* right; TYPE_3__* left; TYPE_2__ token; } ;
typedef TYPE_4__ bin_tree_t ;
struct TYPE_8__ {TYPE_4__* next; } ;
struct TYPE_6__ {TYPE_4__* next; TYPE_4__* first; } ;




 int VAR_0 ;

__attribute__((used)) static reg_errcode_t
FUNC_0 (void *VAR_1, bin_tree_t *VAR_2)
{
  switch (VAR_2->token.type)
    {
    case 128:
      VAR_2->left->next = VAR_2;
      break;
    case 129:
      VAR_2->left->next = VAR_2->right->first;
      VAR_2->right->next = VAR_2->next;
      break;
    default:
      if (VAR_2->left)
 VAR_2->left->next = VAR_2->next;
      if (VAR_2->right)
 VAR_2->right->next = VAR_2->next;
      break;
    }
  return VAR_0;
}
