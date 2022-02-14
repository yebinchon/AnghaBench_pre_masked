
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dn_ctfp; scalar_t__ dn_type; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_5__ {int pcb_hdl; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

int
FUNC_2(const dt_node_t *VAR_1)
{
 return (VAR_1->dn_ctfp == FUNC_0(VAR_0->pcb_hdl) &&
     VAR_1->dn_type == FUNC_1(VAR_0->pcb_hdl));
}
