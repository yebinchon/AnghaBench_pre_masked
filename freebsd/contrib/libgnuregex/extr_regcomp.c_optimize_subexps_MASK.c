
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_14__ {int* subexp_map; int used_bkref_map; } ;
typedef TYPE_6__ re_dfa_t ;
typedef int bitset_word_t ;
struct TYPE_12__ {int idx; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_4__ opr; } ;
struct TYPE_15__ {TYPE_5__ token; TYPE_3__* left; } ;
typedef TYPE_7__ bin_tree_t ;
struct TYPE_9__ {int idx; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ opr; } ;
struct TYPE_11__ {TYPE_7__* parent; struct TYPE_11__* left; TYPE_2__ token; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static reg_errcode_t
FUNC_0 (void *VAR_4, bin_tree_t *VAR_5)
{
  re_dfa_t *VAR_6 = (re_dfa_t *) VAR_4;

  if (VAR_5->token.type == VAR_1 && VAR_6->subexp_map)
    {
      int VAR_7 = VAR_5->token.opr.idx;
      VAR_5->token.opr.idx = VAR_6->subexp_map[VAR_7];
      VAR_6->used_bkref_map |= 1 << VAR_5->token.opr.idx;
    }

  else if (VAR_5->token.type == VAR_3
    && VAR_5->left && VAR_5->left->token.type == VAR_3)
    {
      int VAR_8 = VAR_5->left->token.opr.idx;

      VAR_5->left = VAR_5->left->left;
      if (VAR_5->left)
 VAR_5->left->parent = VAR_5;

      VAR_6->subexp_map[VAR_8] = VAR_6->subexp_map[VAR_5->token.opr.idx];
      if (VAR_8 < VAR_0)
   VAR_6->used_bkref_map &= ~((bitset_word_t) 1 << VAR_8);
    }

  return VAR_2;
}
