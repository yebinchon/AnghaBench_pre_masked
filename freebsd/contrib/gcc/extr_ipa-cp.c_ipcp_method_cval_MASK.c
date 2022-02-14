
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipcp_formal {int dummy; } ;
struct cgraph_node {int dummy; } ;
struct TYPE_2__ {struct ipcp_formal* ipcp_cval; } ;


 TYPE_1__* FUNC_0 (struct cgraph_node*) ;

__attribute__((used)) static inline struct ipcp_formal *
FUNC_1 (struct cgraph_node *VAR_0, int VAR_1)
{
  return &(FUNC_0 (VAR_0)->ipcp_cval[VAR_1]);
}
