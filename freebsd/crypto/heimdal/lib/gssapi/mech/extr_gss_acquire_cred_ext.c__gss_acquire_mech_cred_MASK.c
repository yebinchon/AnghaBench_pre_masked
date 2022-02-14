
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _gss_mechanism_name {int gmn_name; } ;
struct _gss_mechanism_cred {int gmc_cred; int * gmc_mech_oid; TYPE_2__* gmc_mech; } ;
typedef TYPE_2__* gssapi_mech_interface ;
typedef int gss_cred_usage_t ;
typedef scalar_t__ gss_const_OID ;
typedef int gss_buffer_t ;
struct TYPE_9__ {int count; int * elements; } ;
typedef TYPE_3__ gss_OID_set_desc ;
struct TYPE_8__ {int (* gm_acquire_cred ) (int *,int ,int ,TYPE_3__*,int ,int *,int *,int *) ;TYPE_1__* gm_compat; int (* gm_acquire_cred_ext ) (int *,int ,scalar_t__,void const*,int ,int *,int ,int *) ;int gm_mech_oid; } ;
struct TYPE_7__ {int (* gmc_acquire_cred_with_password ) (int *,int ,int const,int ,TYPE_3__*,int ,int *,int *,int *) ;} ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct _gss_mechanism_cred* FUNC_0 (int,int) ;
 int FUNC_1 (struct _gss_mechanism_cred*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,void const*,int ,int *,int ,int *) ;
 int FUNC_4 (int *,int ,int const,int ,TYPE_3__*,int ,int *,int *,int *) ;
 int FUNC_5 (int *,int ,int ,TYPE_3__*,int ,int *,int *,int *) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_5,
         gssapi_mech_interface VAR_6,
         const struct _gss_mechanism_name *VAR_7,
         gss_const_OID VAR_8,
         const void *VAR_9,
         OM_uint32 VAR_10,
         gss_const_OID VAR_11,
         gss_cred_usage_t VAR_12,
         struct _gss_mechanism_cred **VAR_13)
{
    OM_uint32 VAR_14;
    struct _gss_mechanism_cred *VAR_15;
    gss_OID_set_desc VAR_16;

    *VAR_13 = ((void*)0);

    VAR_15 = FUNC_0(1, sizeof(struct _gss_mechanism_cred));
    if (VAR_15 == ((void*)0)) {
 *VAR_5 = VAR_0;
 return VAR_3;
    }

    VAR_15->gmc_mech = VAR_6;
    VAR_15->gmc_mech_oid = &VAR_6->gm_mech_oid;

    VAR_16 = 1;
    VAR_16 = VAR_15->gmc_mech_oid;

    if (VAR_6->gm_acquire_cred_ext) {
 VAR_14 = VAR_6->gm_acquire_cred_ext(VAR_5,
           VAR_7->gmn_name,
           VAR_8,
           VAR_9,
           VAR_10,
           VAR_15->gmc_mech_oid,
           VAR_12,
           &VAR_15->gmc_cred);
    } else if (FUNC_2(VAR_8, VAR_1) &&
  VAR_6->gm_compat &&
  VAR_6->gm_compat->gmc_acquire_cred_with_password) {





 VAR_14 = VAR_6->gm_compat->gmc_acquire_cred_with_password(VAR_5,
    VAR_7->gmn_name,
    (const gss_buffer_t)VAR_9,
    VAR_10,
    &VAR_16,
    VAR_12,
    &VAR_15->gmc_cred,
    ((void*)0),
    ((void*)0));
    } else if (VAR_8 == VAR_2) {
 VAR_14 = VAR_6->gm_acquire_cred(VAR_5,
       VAR_7->gmn_name,
       VAR_10,
       &VAR_16,
       VAR_12,
       &VAR_15->gmc_cred,
       ((void*)0),
       ((void*)0));
    } else {
 VAR_14 = VAR_4;
 FUNC_1(VAR_15);
 VAR_15= ((void*)0);
    }

    *VAR_13 = VAR_15;
    return VAR_14;
}
