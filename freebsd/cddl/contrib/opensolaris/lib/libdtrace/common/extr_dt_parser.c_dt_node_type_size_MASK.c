
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dtc_ctfmodel; } ;
struct TYPE_8__ {TYPE_1__ dt_conf; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_9__ {scalar_t__ dn_kind; int dn_flags; int dn_type; int dn_ctfp; int * dn_ident; int dn_string; } ;
typedef TYPE_3__ dt_node_t ;
typedef int ctf_id_t ;
struct TYPE_10__ {TYPE_2__* pcb_hdl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_3__ const*) ;
 size_t FUNC_6 (int ) ;
 TYPE_4__* VAR_6 ;

size_t
FUNC_7(const dt_node_t *VAR_7)
{
 ctf_id_t VAR_8;
 dtrace_hdl_t *VAR_9 = VAR_6->pcb_hdl;

 if (VAR_7->dn_kind == VAR_5)
  return (FUNC_6(VAR_7->dn_string) + 1);

 if (FUNC_5(VAR_7) && VAR_7->dn_ident != ((void*)0))
  return (FUNC_4(VAR_7->dn_ident));

 VAR_8 = FUNC_2(VAR_7->dn_ctfp, VAR_7->dn_type);

 if (FUNC_1(VAR_7->dn_ctfp, VAR_8) == VAR_0)
  return (0);
 if (FUNC_1(VAR_7->dn_ctfp, VAR_8) == VAR_1 &&
     FUNC_0(VAR_7->dn_ctfp) == VAR_2 &&
     !(VAR_7->dn_flags & VAR_4) &&
     VAR_9->dt_conf.dtc_ctfmodel == VAR_3)
   return (8);

 return (FUNC_3(VAR_7->dn_ctfp, VAR_7->dn_type));
}
