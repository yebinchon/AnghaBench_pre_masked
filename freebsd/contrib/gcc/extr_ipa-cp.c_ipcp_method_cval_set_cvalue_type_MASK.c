
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cgraph_node {int dummy; } ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;
struct TYPE_4__ {TYPE_1__* ipcp_cval; } ;
struct TYPE_3__ {int cval_type; } ;


 TYPE_2__* FUNC_0 (struct cgraph_node*) ;

__attribute__((used)) static inline void
FUNC_1 (struct cgraph_node *VAR_0, int VAR_1,
      enum cvalue_type VAR_2)
{
  FUNC_0 (VAR_0)->ipcp_cval[VAR_1].cval_type = VAR_2;
}
