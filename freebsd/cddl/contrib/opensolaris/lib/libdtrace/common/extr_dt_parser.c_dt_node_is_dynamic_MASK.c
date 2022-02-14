
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dn_kind; scalar_t__ dn_ctfp; scalar_t__ dn_type; TYPE_1__* dn_ident; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_8__ {TYPE_2__* din_root; } ;
typedef TYPE_3__ dt_idnode_t ;
struct TYPE_9__ {int pcb_hdl; } ;
struct TYPE_6__ {int di_flags; TYPE_3__* di_iarg; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;

int
FUNC_2(const dt_node_t *VAR_3)
{
 if (VAR_3->dn_kind == VAR_1 &&
     (VAR_3->dn_ident->di_flags & VAR_0)) {
  const dt_idnode_t *VAR_4 = VAR_3->dn_ident->di_iarg;
  return (VAR_4->din_root ? FUNC_2(VAR_4->din_root) : 0);
 }

 return (VAR_3->dn_ctfp == FUNC_0(VAR_2->pcb_hdl) &&
     VAR_3->dn_type == FUNC_1(VAR_2->pcb_hdl));
}
