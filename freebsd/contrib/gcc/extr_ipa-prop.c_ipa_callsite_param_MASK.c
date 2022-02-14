
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipa_jump_func {int dummy; } ;
struct cgraph_edge {int dummy; } ;
struct TYPE_2__ {struct ipa_jump_func* ipa_param_map; } ;


 TYPE_1__* FUNC_0 (struct cgraph_edge*) ;

struct ipa_jump_func *
FUNC_1 (struct cgraph_edge *VAR_0, int VAR_1)
{
  return &(FUNC_0 (VAR_0)->ipa_param_map[VAR_1]);
}
