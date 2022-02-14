
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ no_sub; scalar_t__ buffer; } ;
typedef TYPE_3__ regex_t ;
typedef int reg_errcode_t ;
struct TYPE_16__ {int used_bkref_map; } ;
typedef TYPE_4__ re_dfa_t ;
typedef int bitset_word_t ;
struct TYPE_13__ {int idx; } ;
struct TYPE_14__ {int opt_subexp; TYPE_1__ opr; } ;
struct TYPE_17__ {TYPE_2__ token; struct TYPE_17__* left; } ;
typedef TYPE_5__ bin_tree_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_1 (TYPE_4__*,TYPE_5__*,TYPE_5__*,int ) ;

__attribute__((used)) static bin_tree_t *
FUNC_2 (reg_errcode_t *VAR_5, regex_t *VAR_6, bin_tree_t *VAR_7)
{
  re_dfa_t *VAR_8 = (re_dfa_t *) VAR_6->buffer;
  bin_tree_t *VAR_9 = VAR_7->left;
  bin_tree_t *VAR_10, *VAR_11, *VAR_12, *VAR_13;

  if (VAR_6->no_sub




      && VAR_7->left != ((void*)0)
      && (VAR_7->token.opr.idx >= VAR_0
   || !(VAR_8->used_bkref_map
        & ((bitset_word_t) 1 << VAR_7->token.opr.idx))))
    return VAR_7->left;



  VAR_10 = FUNC_1 (VAR_8, ((void*)0), ((void*)0), VAR_3);
  VAR_11 = FUNC_1 (VAR_8, ((void*)0), ((void*)0), VAR_2);
  VAR_12 = VAR_9 ? FUNC_1 (VAR_8, VAR_9, VAR_11, VAR_1) : VAR_11;
  VAR_13 = FUNC_1 (VAR_8, VAR_10, VAR_12, VAR_1);
  if (FUNC_0 (VAR_13 == ((void*)0) || VAR_12 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0), 0))
    {
      *VAR_5 = VAR_4;
      return ((void*)0);
    }

  VAR_10->token.opr.idx = VAR_11->token.opr.idx = VAR_7->token.opr.idx;
  VAR_10->token.opt_subexp = VAR_11->token.opt_subexp = VAR_7->token.opt_subexp;
  return VAR_13;
}
