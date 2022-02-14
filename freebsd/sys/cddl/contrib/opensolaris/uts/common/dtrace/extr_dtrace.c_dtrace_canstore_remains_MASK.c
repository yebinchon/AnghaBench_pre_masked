
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef uintptr_t uint64_t ;
struct TYPE_14__ {uintptr_t dtds_size; int dtds_hashsize; uintptr_t dtds_chunksize; TYPE_4__* dtds_base; } ;
struct TYPE_11__ {int dtvs_nglobals; int dtvs_globals; int dtvs_nlocals; int dtvs_locals; TYPE_5__ dtvs_dynvars; } ;
typedef TYPE_2__ dtrace_vstate_t ;
struct TYPE_12__ {uintptr_t dtms_scratch_size; TYPE_4__* dtms_scratch_base; } ;
typedef TYPE_3__ dtrace_mstate_t ;
typedef int dtrace_key_t ;
struct TYPE_10__ {int dtt_nkeys; } ;
struct TYPE_13__ {scalar_t__ dtdv_hashval; TYPE_1__ dtdv_tuple; } ;
typedef TYPE_4__ dtrace_dynvar_t ;
typedef int dtrace_dynhash_t ;
typedef TYPE_5__ dtrace_dstate_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (uintptr_t,size_t,TYPE_4__*,uintptr_t) ;
 int FUNC_1 (size_t*,uintptr_t,TYPE_4__*,uintptr_t) ;
 scalar_t__ FUNC_2 (uintptr_t,size_t,size_t*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(uint64_t VAR_1, size_t VAR_2, size_t *VAR_3,
    dtrace_mstate_t *VAR_4, dtrace_vstate_t *VAR_5)
{



 if (FUNC_0(VAR_1, VAR_2, VAR_4->dtms_scratch_base,
     VAR_4->dtms_scratch_size)) {
  FUNC_1(VAR_3, VAR_1, VAR_4->dtms_scratch_base,
      VAR_4->dtms_scratch_size);
  return (1);
 }






 if (FUNC_0(VAR_1, VAR_2, VAR_5->dtvs_dynvars.dtds_base,
     VAR_5->dtvs_dynvars.dtds_size)) {
  dtrace_dstate_t *VAR_6 = &VAR_5->dtvs_dynvars;
  uintptr_t VAR_7 = (uintptr_t)VAR_6->dtds_base +
      (VAR_6->dtds_hashsize * sizeof (dtrace_dynhash_t));
  uintptr_t VAR_8;
  dtrace_dynvar_t *VAR_9;
  if (VAR_1 < VAR_7)
   return (0);

  VAR_8 = (VAR_1 - VAR_7) % VAR_6->dtds_chunksize;

  if (VAR_8 < sizeof (dtrace_dynvar_t))
   return (0);

  if (VAR_8 + VAR_2 > VAR_6->dtds_chunksize)
   return (0);

  VAR_9 = (dtrace_dynvar_t *)((uintptr_t)VAR_1 - VAR_8);

  if (VAR_9->dtdv_hashval == VAR_0)
   return (0);

  if (VAR_8 < sizeof (dtrace_dynvar_t) +
      ((VAR_9->dtdv_tuple.dtt_nkeys - 1) * sizeof (dtrace_key_t)))
   return (0);

  FUNC_1(VAR_3, VAR_1, VAR_9, VAR_6->dtds_chunksize);
  return (1);
 }





 if (FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_5->dtvs_locals, VAR_5->dtvs_nlocals))
  return (1);

 if (FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_5->dtvs_globals, VAR_5->dtvs_nglobals))
  return (1);

 return (0);
}
