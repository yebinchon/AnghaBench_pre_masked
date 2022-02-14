
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ulong_t ;
typedef size_t uint_t ;
struct TYPE_12__ {int dt_xlatorid; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_13__ {size_t dtdo_len; size_t dtdo_xlmlen; TYPE_6__** dtdo_xlmtab; int * dtdo_buf; } ;
typedef TYPE_3__ dtrace_difo_t ;
struct TYPE_14__ {int dx_id; scalar_t__ dx_nmembers; } ;
typedef TYPE_4__ dt_xlator_t ;
struct TYPE_15__ {int pcb_asxreflen; int ** pcb_asxrefs; int pcb_jmpbuf; TYPE_2__* pcb_hdl; } ;
typedef TYPE_5__ dt_pcb_t ;
struct TYPE_16__ {scalar_t__ dn_kind; scalar_t__ dn_membid; TYPE_1__* dn_membexpr; } ;
typedef TYPE_6__ dt_node_t ;
struct TYPE_11__ {scalar_t__ dn_kind; TYPE_4__* dn_xlator; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(dt_pcb_t *VAR_3, dtrace_difo_t *VAR_4,
    uint_t VAR_5, uint_t VAR_6, dt_node_t *VAR_7)
{
 dtrace_hdl_t *VAR_8 = VAR_3->pcb_hdl;
 dt_xlator_t *VAR_9 = VAR_7->dn_membexpr->dn_xlator;

 FUNC_5(VAR_5 < VAR_4->dtdo_len);
 FUNC_5(VAR_6 < VAR_4->dtdo_xlmlen);

 FUNC_5(VAR_7->dn_kind == VAR_0);
 FUNC_5(VAR_7->dn_membexpr->dn_kind == VAR_1);

 FUNC_5(VAR_9->dx_id < VAR_8->dt_xlatorid);
 FUNC_5(VAR_7->dn_membid < VAR_9->dx_nmembers);

 if (VAR_3->pcb_asxrefs == ((void*)0)) {
  VAR_3->pcb_asxreflen = VAR_8->dt_xlatorid;
  VAR_3->pcb_asxrefs =
      FUNC_6(VAR_8, sizeof (ulong_t *) * VAR_3->pcb_asxreflen);
  if (VAR_3->pcb_asxrefs == ((void*)0))
   FUNC_7(VAR_3->pcb_jmpbuf, VAR_2);
 }

 if (VAR_3->pcb_asxrefs[VAR_9->dx_id] == ((void*)0)) {
  VAR_3->pcb_asxrefs[VAR_9->dx_id] =
      FUNC_6(VAR_8, FUNC_1(VAR_9->dx_nmembers));
  if (VAR_3->pcb_asxrefs[VAR_9->dx_id] == ((void*)0))
   FUNC_7(VAR_3->pcb_jmpbuf, VAR_2);
 }

 VAR_4->dtdo_buf[VAR_5] = FUNC_4(
     FUNC_2(VAR_4->dtdo_buf[VAR_5]), VAR_6, FUNC_3(VAR_4->dtdo_buf[VAR_5]));

 FUNC_0(VAR_3->pcb_asxrefs[VAR_9->dx_id], VAR_7->dn_membid);
 VAR_4->dtdo_xlmtab[VAR_6] = VAR_7;
}
