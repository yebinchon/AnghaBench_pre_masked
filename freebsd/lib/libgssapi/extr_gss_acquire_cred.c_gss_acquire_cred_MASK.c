
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct _gss_name {int dummy; } ;
struct _gss_mechanism_name {scalar_t__ const gmn_name; } ;
struct _gss_mechanism_cred {int gc_mc; int gmc_cred; int * gmc_mech_oid; struct _gss_mech_switch* gmc_mech; } ;
struct _gss_mech_switch {scalar_t__ (* gm_acquire_cred ) (scalar_t__*,scalar_t__ const,scalar_t__,TYPE_1__*,int ,int *,int *,scalar_t__*) ;int (* gm_release_cred ) (scalar_t__*,int *) ;int gm_mech_oid; } ;
struct _gss_cred {int gc_mc; int gmc_cred; int * gmc_mech_oid; struct _gss_mech_switch* gmc_mech; } ;
typedef scalar_t__ gss_name_t ;
typedef int gss_cred_usage_t ;
typedef scalar_t__ gss_cred_id_t ;
struct TYPE_12__ {int count; int * elements; } ;
typedef TYPE_1__ gss_OID_set_desc ;
typedef TYPE_2__* gss_OID_set ;
struct TYPE_13__ {size_t count; int * elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct _gss_mechanism_cred*,int ) ;
 struct _gss_mech_switch* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,struct _gss_name*,int *,struct _gss_mechanism_name**) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_9 ;
 int FUNC_6 (struct _gss_mechanism_cred*) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (scalar_t__*,int *,TYPE_2__**) ;
 scalar_t__ FUNC_8 (scalar_t__*,TYPE_2__**) ;
 int FUNC_9 (scalar_t__*,TYPE_2__**) ;
 int FUNC_10 (scalar_t__*,int *,TYPE_2__*,int*) ;
 struct _gss_mechanism_cred* FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__*,scalar_t__ const,scalar_t__,TYPE_1__*,int ,int *,int *,scalar_t__*) ;
 int FUNC_13 (scalar_t__*,int *) ;

OM_uint32
FUNC_14(OM_uint32 *VAR_11,
    const gss_name_t VAR_12,
    OM_uint32 VAR_13,
    const gss_OID_set VAR_14,
    gss_cred_usage_t VAR_15,
    gss_cred_id_t *VAR_16,
    gss_OID_set *VAR_17,
    OM_uint32 *VAR_18)
{
 OM_uint32 VAR_19;
 gss_OID_set VAR_20 = VAR_14;
 gss_OID_set_desc VAR_21;
 struct _gss_name *VAR_22 = (struct _gss_name *) VAR_12;
 struct _gss_mech_switch *VAR_23;
 struct _gss_cred *VAR_24;
 struct _gss_mechanism_cred *VAR_25;
 struct _gss_mechanism_name *VAR_26;
 OM_uint32 VAR_27, VAR_28;
 size_t VAR_29;

 *VAR_11 = 0;
 if (VAR_16)
  *VAR_16 = VAR_2;
 if (VAR_17)
  *VAR_17 = VAR_4;
 if (VAR_18)
  *VAR_18 = 0;

 FUNC_5();





 if (VAR_20) {
  for (VAR_29 = 0; VAR_29 < VAR_20->count; VAR_29++) {
   int VAR_30;
   FUNC_10(VAR_11,
       &VAR_20->elements[VAR_29], VAR_9, &VAR_30);
   if (VAR_30)
    break;
  }
  if (VAR_29 == VAR_20->count) {
   *VAR_11 = 0;
   return (VAR_5);
  }
 } else {
  VAR_20 = VAR_9;
 }

 if (VAR_17) {
  VAR_19 = FUNC_8(VAR_11,
      VAR_17);
  if (VAR_19)
   return (VAR_19);
 }

 VAR_24 = FUNC_11(sizeof(struct _gss_cred));
 if (!VAR_24) {
  if (VAR_17)
   FUNC_9(VAR_11, VAR_17);
  *VAR_11 = VAR_0;
  return (VAR_7);
 }
 FUNC_1(&VAR_24->gc_mc);

 VAR_21.count = 1;
 VAR_27 = VAR_1;
 for (VAR_29 = 0; VAR_29 < VAR_20->count; VAR_29++) {
  VAR_23 = FUNC_3(&VAR_20->elements[VAR_29]);
  if (!VAR_23)
   continue;

  if (VAR_12 != VAR_3) {
   VAR_19 = FUNC_4(VAR_11, VAR_22,
          &VAR_20->elements[VAR_29], &VAR_26);
   if (VAR_19 != VAR_6)
    continue;
  }

  VAR_25 = FUNC_11(sizeof(struct _gss_mechanism_cred));
  if (!VAR_25) {
   continue;
  }
  VAR_25->gmc_mech = VAR_23;
  VAR_25->gmc_mech_oid = &VAR_23->gm_mech_oid;




  VAR_21.elements = &VAR_20->elements[VAR_29];
  VAR_19 = VAR_23->gm_acquire_cred(VAR_11,
      (VAR_12 != VAR_3
   ? VAR_26->gmn_name : VAR_3),
      VAR_13, &VAR_21, VAR_15,
      &VAR_25->gmc_cred, ((void*)0), &VAR_28);
  if (VAR_19) {
   FUNC_6(VAR_25);
   continue;
  }
  if (VAR_28 < VAR_27)
   VAR_27 = VAR_28;

  if (VAR_17) {
   VAR_19 = FUNC_7(VAR_11,
       VAR_25->gmc_mech_oid, VAR_17);
   if (VAR_19) {
    VAR_23->gm_release_cred(VAR_11,
        &VAR_25->gmc_cred);
    FUNC_6(VAR_25);
    continue;
   }
  }

  FUNC_2(&VAR_24->gc_mc, VAR_25, VAR_10);
 }





 if (!FUNC_0(&VAR_24->gc_mc)) {
  FUNC_6(VAR_24);
  if (VAR_17)
   FUNC_9(VAR_11, VAR_17);
  *VAR_11 = 0;
  return (VAR_8);
 }

 if (VAR_18)
  *VAR_18 = VAR_27;
 *VAR_16 = (gss_cred_id_t) VAR_24;
 *VAR_11 = 0;
 return (VAR_6);
}
