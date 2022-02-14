
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_7__ {scalar_t__ dtt_type; int dtt_flags; int * dtt_ctfp; int dtt_object; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_8__ {void* dt_ctferr; TYPE_3__* dt_ddefs; TYPE_3__* dt_cdefs; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_9__ {int * dm_ctfp; int dm_name; } ;
typedef TYPE_3__ dt_module_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_10__ {scalar_t__ pcb_idepth; TYPE_2__* pcb_hdl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 void* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 TYPE_4__* VAR_3 ;

int
FUNC_8(dtrace_typeinfo_t *VAR_4)
{
 dtrace_hdl_t *VAR_5 = VAR_3->pcb_hdl;
 ctf_file_t *VAR_6 = VAR_4->dtt_ctfp;
 ctf_id_t VAR_7 = VAR_4->dtt_type;
 ctf_id_t VAR_8 = FUNC_5(VAR_6, VAR_7);
 uint_t VAR_9 = VAR_4->dtt_flags;

 dt_module_t *VAR_10;
 ctf_id_t VAR_11;

 if ((VAR_11 = FUNC_4(VAR_6, VAR_7)) != VAR_1 ||
     (VAR_11 = FUNC_4(VAR_6, VAR_8)) != VAR_1) {
  VAR_4->dtt_type = VAR_11;
  return (0);
 }

 if (VAR_3->pcb_idepth != 0)
  VAR_10 = VAR_5->dt_cdefs;
 else
  VAR_10 = VAR_5->dt_ddefs;

 if (VAR_6 != VAR_10->dm_ctfp && VAR_6 != FUNC_3(VAR_10->dm_ctfp) &&
     (VAR_7 = FUNC_1(VAR_10->dm_ctfp, VAR_6, VAR_7)) == VAR_1) {
  VAR_5->dt_ctferr = FUNC_2(VAR_10->dm_ctfp);
  return (FUNC_7(VAR_5, VAR_2));
 }

 VAR_11 = FUNC_0(VAR_10->dm_ctfp, VAR_0, VAR_7);

 if (VAR_11 == VAR_1 || FUNC_6(VAR_10->dm_ctfp) == VAR_1) {
  VAR_5->dt_ctferr = FUNC_2(VAR_10->dm_ctfp);
  return (FUNC_7(VAR_5, VAR_2));
 }

 VAR_4->dtt_object = VAR_10->dm_name;
 VAR_4->dtt_ctfp = VAR_10->dm_ctfp;
 VAR_4->dtt_type = VAR_11;
 VAR_4->dtt_flags = VAR_9;

 return (0);
}
