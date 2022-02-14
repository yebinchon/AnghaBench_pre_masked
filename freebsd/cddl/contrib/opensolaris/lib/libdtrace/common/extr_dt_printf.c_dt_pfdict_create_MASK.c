
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_15__ {int dtt_type; int * dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_16__ {TYPE_3__* dt_pfdict; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_17__ {int pdi_nbuckets; TYPE_4__** pdi_buckets; } ;
typedef TYPE_3__ dt_pfdict_t ;
struct TYPE_18__ {int * pfc_name; int * pfc_tstr; int * pfc_ofmt; int * pfc_print; int * pfc_check; int pfc_dtype; int pfc_ctype; int * pfc_dctfp; int * pfc_cctfp; struct TYPE_18__* pfc_next; } ;
typedef TYPE_4__ dt_pfconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__ const*,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__**,int) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (int) ;
 int VAR_8 ;

int
FUNC_9(dtrace_hdl_t *VAR_9)
{
 uint_t VAR_10 = VAR_7;
 const dt_pfconv_t *VAR_11;
 dt_pfdict_t *VAR_12;

 if ((VAR_12 = FUNC_8(sizeof (dt_pfdict_t))) == ((void*)0) ||
     (VAR_12->pdi_buckets = FUNC_8(sizeof (dt_pfconv_t *) * VAR_10)) == ((void*)0)) {
  FUNC_7(VAR_12);
  return (FUNC_4(VAR_9, VAR_5));
 }

 VAR_9->dt_pfdict = VAR_12;
 FUNC_1(VAR_12->pdi_buckets, sizeof (dt_pfconv_t *) * VAR_10);
 VAR_12->pdi_nbuckets = VAR_10;

 for (VAR_11 = VAR_6; VAR_11->pfc_name != ((void*)0); VAR_11++) {
  dtrace_typeinfo_t VAR_13;
  dt_pfconv_t *VAR_14;
  uint_t VAR_15;

  if ((VAR_14 = FUNC_8(sizeof (dt_pfconv_t))) == ((void*)0)) {
   FUNC_3(VAR_9);
   return (FUNC_4(VAR_9, VAR_5));
  }

  FUNC_0(VAR_11, VAR_14, sizeof (dt_pfconv_t));
  VAR_15 = FUNC_5(VAR_14->pfc_name, ((void*)0)) % VAR_10;
  VAR_14->pfc_next = VAR_12->pdi_buckets[VAR_15];
  VAR_12->pdi_buckets[VAR_15] = VAR_14;

  VAR_13.dtt_ctfp = ((void*)0);
  VAR_13.dtt_type = VAR_0;






  if (VAR_14->pfc_check == &VAR_8 && FUNC_6(
      VAR_9, VAR_2, VAR_14->pfc_tstr, &VAR_13) != 0) {
   FUNC_3(VAR_9);
   return (FUNC_4(VAR_9, VAR_4));
  }

  VAR_14->pfc_dctfp = VAR_13.dtt_ctfp;
  VAR_14->pfc_dtype = VAR_13.dtt_type;






  if (VAR_14->pfc_check == &VAR_8 && FUNC_6(
      VAR_9, VAR_1, VAR_14->pfc_tstr, &VAR_13) == 0) {
   VAR_14->pfc_cctfp = VAR_13.dtt_ctfp;
   VAR_14->pfc_ctype = VAR_13.dtt_type;
  } else {
   VAR_14->pfc_cctfp = VAR_14->pfc_dctfp;
   VAR_14->pfc_ctype = VAR_14->pfc_dtype;
  }

  if (VAR_14->pfc_check == ((void*)0) || VAR_14->pfc_print == ((void*)0) ||
      VAR_14->pfc_ofmt == ((void*)0) || VAR_14->pfc_tstr == ((void*)0)) {
   FUNC_3(VAR_9);
   return (FUNC_4(VAR_9, VAR_3));
  }

  FUNC_2("loaded printf conversion %%%s\n", VAR_14->pfc_name);
 }

 return (0);
}
