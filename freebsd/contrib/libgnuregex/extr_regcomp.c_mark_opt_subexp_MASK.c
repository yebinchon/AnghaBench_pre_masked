
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_5__ {int idx; } ;
struct TYPE_6__ {scalar_t__ type; int opt_subexp; TYPE_1__ opr; } ;
struct TYPE_7__ {TYPE_2__ token; } ;
typedef TYPE_3__ bin_tree_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static reg_errcode_t
FUNC_0 (void *VAR_2, bin_tree_t *VAR_3)
{
  int VAR_4 = (int) (long) VAR_2;
  if (VAR_3->token.type == VAR_1 && VAR_3->token.opr.idx == VAR_4)
    VAR_3->token.opt_subexp = 1;

  return VAR_0;
}
