
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cgraph_edge {int dummy; } ;
typedef enum jump_func_type { ____Placeholder_jump_func_type } jump_func_type ;
struct TYPE_4__ {TYPE_1__* ipa_param_map; } ;
struct TYPE_3__ {int type; } ;


 TYPE_2__* FUNC_0 (struct cgraph_edge*) ;

__attribute__((used)) static inline void
FUNC_1 (struct cgraph_edge *VAR_0, int VAR_1,
        enum jump_func_type VAR_2)
{
  FUNC_0 (VAR_0)->ipa_param_map[VAR_1].type = VAR_2;
}
