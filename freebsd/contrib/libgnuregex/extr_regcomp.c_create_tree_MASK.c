
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int re_token_type_t ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ re_token_t ;
typedef int re_dfa_t ;
typedef int bin_tree_t ;


 int * FUNC_0 (int *,int *,int *,TYPE_1__*) ;

__attribute__((used)) static bin_tree_t *
FUNC_1 (re_dfa_t *VAR_0, bin_tree_t *VAR_1, bin_tree_t *VAR_2,
      re_token_type_t VAR_3)
{
  re_token_t VAR_4;
  VAR_4.type = VAR_3;
  return FUNC_0 (VAR_0, VAR_1, VAR_2, &VAR_4);
}
