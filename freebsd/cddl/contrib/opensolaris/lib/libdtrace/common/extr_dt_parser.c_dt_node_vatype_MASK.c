
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int dn_attr; int dn_type; int dn_ctfp; int dn_op; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_10__ {TYPE_2__* pcb_hdl; } ;
struct TYPE_8__ {TYPE_1__* dt_cdefs; } ;
struct TYPE_7__ {int dm_ctfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_4__* VAR_4 ;

dt_node_t *
FUNC_1(void)
{
 dt_node_t *VAR_5 = FUNC_0(VAR_1);

 VAR_5->dn_op = VAR_2;
 VAR_5->dn_ctfp = VAR_4->pcb_hdl->dt_cdefs->dm_ctfp;
 VAR_5->dn_type = VAR_0;
 VAR_5->dn_attr = VAR_3;

 return (VAR_5);
}
