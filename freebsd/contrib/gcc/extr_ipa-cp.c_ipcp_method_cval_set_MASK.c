
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipcp_formal {int cval_type; } ;
struct cgraph_node {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ipcp_cval; } ;
struct TYPE_3__ {int cval_type; } ;


 TYPE_2__* FUNC_0 (struct cgraph_node*) ;
 int FUNC_1 (struct ipcp_formal*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct cgraph_node*,int) ;

__attribute__((used)) static inline void
FUNC_4 (struct cgraph_node *VAR_0, int VAR_1, struct ipcp_formal *VAR_2)
{
  FUNC_0 (VAR_0)->ipcp_cval[VAR_1].cval_type = VAR_2->cval_type;
  FUNC_2 (FUNC_3 (VAR_0, VAR_1),
   FUNC_1 (VAR_2), VAR_2->cval_type);
}
