
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ dtt_ctfp; int dtt_flags; int dtt_type; } ;
typedef TYPE_3__ dtrace_typeinfo_t ;
struct TYPE_15__ {TYPE_2__* dt_ddefs; TYPE_1__* dt_cdefs; } ;
typedef TYPE_4__ dtrace_hdl_t ;
struct TYPE_16__ {char* dn_string; int dn_op; } ;
typedef TYPE_5__ dt_node_t ;
typedef int dt_decl_t ;
struct TYPE_17__ {int pcb_jmpbuf; TYPE_4__* pcb_hdl; } ;
struct TYPE_13__ {scalar_t__ dm_ctfp; } ;
struct TYPE_12__ {scalar_t__ dm_ctfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char**) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,scalar_t__,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 TYPE_6__* VAR_5 ;

dt_node_t *
FUNC_8(dt_decl_t *VAR_6)
{
 dtrace_hdl_t *VAR_7 = VAR_5->pcb_hdl;
 dtrace_typeinfo_t VAR_8;
 dt_node_t *VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11;





 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_1(&VAR_10);

 VAR_11 = FUNC_2(VAR_6, &VAR_8);
 FUNC_0(VAR_6);

 if (VAR_11 != 0) {
  FUNC_6(VAR_10);
  FUNC_7(VAR_5->pcb_jmpbuf, VAR_2);
 }

 VAR_9 = FUNC_3(VAR_0);
 VAR_9->dn_op = VAR_1;
 VAR_9->dn_string = VAR_10;

 FUNC_5(VAR_9, VAR_8.dtt_ctfp, VAR_8.dtt_type, VAR_8.dtt_flags);

 if (VAR_8.dtt_ctfp == VAR_7->dt_cdefs->dm_ctfp ||
     VAR_8.dtt_ctfp == VAR_7->dt_ddefs->dm_ctfp)
  FUNC_4(VAR_9, VAR_3);
 else
  FUNC_4(VAR_9, VAR_4);

 return (VAR_9);
}
