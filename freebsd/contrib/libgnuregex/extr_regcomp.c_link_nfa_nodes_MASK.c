
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_16__ {int has_plural_match; int* nexts; int edests; } ;
typedef TYPE_7__ re_dfa_t ;
struct TYPE_14__ {int type; } ;
struct TYPE_17__ {int node_idx; TYPE_6__* next; TYPE_5__ token; TYPE_4__* right; TYPE_2__* left; } ;
typedef TYPE_8__ bin_tree_t ;
struct TYPE_15__ {int node_idx; } ;
struct TYPE_13__ {TYPE_3__* first; } ;
struct TYPE_12__ {int node_idx; } ;
struct TYPE_11__ {TYPE_1__* first; } ;
struct TYPE_10__ {int node_idx; } ;





 int FUNC_0 (int const) ;





 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static reg_errcode_t
FUNC_4 (void *VAR_1, bin_tree_t *VAR_2)
{
  re_dfa_t *VAR_3 = (re_dfa_t *) VAR_1;
  int VAR_4 = VAR_2->node_idx;
  reg_errcode_t VAR_5 = VAR_0;

  switch (VAR_2->token.type)
    {
    case 134:
      break;

    case 133:
      FUNC_1 (VAR_2->next == ((void*)0));
      break;

    case 129:
    case 132:
      {
 int VAR_6, VAR_7;
 VAR_3->has_plural_match = 1;
 if (VAR_2->left != ((void*)0))
   VAR_6 = VAR_2->left->first->node_idx;
 else
   VAR_6 = VAR_2->next->node_idx;
 if (VAR_2->right != ((void*)0))
   VAR_7 = VAR_2->right->first->node_idx;
 else
   VAR_7 = VAR_2->next->node_idx;
 FUNC_1 (VAR_6 > -1);
 FUNC_1 (VAR_7 > -1);
 VAR_5 = FUNC_3 (VAR_3->edests + VAR_4, VAR_6, VAR_7);
      }
      break;

    case 135:
    case 128:
    case 130:
      VAR_5 = FUNC_2 (VAR_3->edests + VAR_4, VAR_2->next->node_idx);
      break;

    case 131:
      VAR_3->nexts[VAR_4] = VAR_2->next->node_idx;
      if (VAR_2->token.type == 131)
 VAR_5 = FUNC_2 (VAR_3->edests + VAR_4, VAR_3->nexts[VAR_4]);
      break;

    default:
      FUNC_1 (!FUNC_0 (VAR_2->token.type));
      VAR_3->nexts[VAR_4] = VAR_2->next->node_idx;
      break;
    }

  return VAR_5;
}
