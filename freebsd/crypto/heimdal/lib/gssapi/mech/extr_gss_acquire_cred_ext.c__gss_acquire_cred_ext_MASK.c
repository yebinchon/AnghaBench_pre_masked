
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _gss_name {int dummy; } ;
struct _gss_mechanism_name {scalar_t__ gmn_name; } ;
struct _gss_mechanism_cred {int dummy; } ;
struct _gss_cred {int gc_mc; } ;
typedef int gssapi_mech_interface ;
typedef scalar_t__ gss_name_t ;
typedef int gss_cred_usage_t ;
typedef scalar_t__ gss_cred_id_t ;
typedef scalar_t__ gss_const_OID ;
struct TYPE_4__ {int count; int * elements; } ;
typedef TYPE_1__ gss_OID_set_desc ;
typedef int * gss_OID ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct _gss_mechanism_cred*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,struct _gss_mechanism_name*,scalar_t__,void const*,scalar_t__,scalar_t__,int ,struct _gss_mechanism_cred**) ;
 scalar_t__ FUNC_6 (scalar_t__*,struct _gss_name*,int *,struct _gss_mechanism_name**) ;
 int FUNC_7 () ;
 TYPE_1__* VAR_8 ;
 struct _gss_cred* FUNC_8 (int,int) ;
 int FUNC_9 (struct _gss_cred*) ;
 int VAR_9 ;
 int FUNC_10 (scalar_t__*,int *,TYPE_1__*,int*) ;

OM_uint32
FUNC_11(OM_uint32 *VAR_10,
    const gss_name_t VAR_11,
    gss_const_OID VAR_12,
    const void *VAR_13,
    OM_uint32 VAR_14,
    gss_const_OID VAR_15,
    gss_cred_usage_t VAR_16,
    gss_cred_id_t *VAR_17)
{
    OM_uint32 VAR_18;
    struct _gss_name *VAR_19 = (struct _gss_name *) VAR_11;
    gssapi_mech_interface VAR_20;
    struct _gss_cred *VAR_21;
    gss_OID_set_desc VAR_22, *VAR_23;
    size_t VAR_24;

    *VAR_10 = 0;
    if (VAR_17 == ((void*)0))
 return VAR_4;

    FUNC_7();

    if (VAR_15 != VAR_2) {
 int VAR_25 = 0;

 FUNC_10(VAR_10, (gss_OID)VAR_15,
    VAR_8, &VAR_25);
 if (!VAR_25)
     return VAR_3;

 VAR_22.count = 1;
 VAR_22.elements = (gss_OID)VAR_15;
 VAR_23 = &VAR_22;
    } else
 VAR_23 = VAR_8;

    VAR_21 = FUNC_8(1, sizeof(*VAR_21));
    if (VAR_21 == ((void*)0)) {
 *VAR_10 = VAR_0;
 return VAR_6;
    }

    FUNC_2(&VAR_21->gc_mc);

    for (VAR_24 = 0; VAR_24 < VAR_23->count; VAR_24++) {
 struct _gss_mechanism_name *VAR_26 = ((void*)0);
 struct _gss_mechanism_cred *VAR_27 = ((void*)0);
 gss_name_t VAR_28 = VAR_1;

 VAR_20 = FUNC_4(&VAR_23->elements[VAR_24]);
 if (!VAR_20)
     continue;

 if (VAR_11 != VAR_1) {
     VAR_18 = FUNC_6(VAR_10, VAR_19,
     &VAR_23->elements[VAR_24], &VAR_26);
     if (VAR_18 != VAR_5)
  continue;

     VAR_28 = VAR_26->gmn_name;
 }

 VAR_18 = FUNC_5(VAR_10, VAR_20, VAR_26,
           VAR_12, VAR_13,
           VAR_14, VAR_15, VAR_16,
           &VAR_27);
 if (FUNC_0(VAR_18))
     continue;

 FUNC_3(&VAR_21->gc_mc, VAR_27, VAR_9);
    }





    if (!FUNC_1(&VAR_21->gc_mc)) {
 FUNC_9(VAR_21);
 *VAR_10 = 0;
 return VAR_7;
    }

    *VAR_17 = (gss_cred_id_t) VAR_21;
    *VAR_10 = 0;
    return VAR_5;
}
