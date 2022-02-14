
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_name {int dummy; } ;
struct _gss_mech_switch {scalar_t__ (* gm_inquire_context ) (scalar_t__*,int ,scalar_t__*,scalar_t__*,scalar_t__*,int *,scalar_t__*,int*,int*) ;int (* gm_release_name ) (scalar_t__*,scalar_t__*) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_name_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct _gss_name* FUNC_0 (struct _gss_mech_switch*,scalar_t__) ;
 int FUNC_1 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,scalar_t__*,scalar_t__*,scalar_t__*,int *,scalar_t__*,int*,int*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_4,
    const gss_ctx_id_t VAR_5,
    gss_name_t *VAR_6,
    gss_name_t *VAR_7,
    OM_uint32 *VAR_8,
    gss_OID *VAR_9,
    OM_uint32 *VAR_10,
    int *VAR_11,
    int *VAR_12)
{
 OM_uint32 VAR_13;
 struct _gss_context *VAR_14 = (struct _gss_context *) VAR_5;
 struct _gss_mech_switch *VAR_15 = VAR_14->gc_mech;
 struct _gss_name *VAR_16;
 gss_name_t VAR_17, VAR_18;

 if (VAR_11)
  *VAR_11 = 0;
 if (VAR_12)
  *VAR_12 = 0;
 if (VAR_8)
  *VAR_8 = 0;

 if (VAR_6)
  *VAR_6 = VAR_0;
 if (VAR_7)
  *VAR_7 = VAR_0;
 if (VAR_9)
  *VAR_9 = VAR_1;
 VAR_17 = VAR_18 = VAR_0;

 VAR_13 = VAR_15->gm_inquire_context(VAR_4,
     VAR_14->gc_ctx,
     VAR_6 ? &VAR_17 : ((void*)0),
     VAR_7 ? &VAR_18 : ((void*)0),
     VAR_8,
     VAR_9,
     VAR_10,
     VAR_11,
     VAR_12);

 if (VAR_13 != VAR_2) {
  FUNC_1(VAR_15, VAR_13, *VAR_4);
  return (VAR_13);
 }

 if (VAR_6) {
  VAR_16 = FUNC_0(VAR_15, VAR_17);
  if (!VAR_16) {
   if (VAR_9)
    *VAR_9 = VAR_1;
   VAR_15->gm_release_name(VAR_4, &VAR_17);
   *VAR_4 = 0;
   return (VAR_3);
  }
  *VAR_6 = (gss_name_t) VAR_16;
 }

 if (VAR_7) {
  VAR_16 = FUNC_0(VAR_15, VAR_18);
  if (!VAR_16) {
   if (VAR_9)
    *VAR_9 = VAR_1;
   if (VAR_6)
    FUNC_2(VAR_4, VAR_6);
   VAR_15->gm_release_name(VAR_4, &VAR_17);
   VAR_4 = ((void*)0);
   return (VAR_3);
  }
  *VAR_7 = (gss_name_t) VAR_16;
 }

 return (VAR_2);
}
