
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gss_mech_compat_desc_struct {int (* gmc_inquire_saslname_for_mech ) (int *,int const,int ,int ,int ) ;} ;
typedef TYPE_1__* gssapi_mech_interface ;
typedef int gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_3__ {struct gss_mech_compat_desc_struct* gm_compat; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int const) ;
 int FUNC_1 (int *,int const,int ,int ,int ) ;

__attribute__((used)) static OM_uint32
FUNC_2(OM_uint32 *VAR_2,
                                 const gss_OID VAR_3,
                                 gss_buffer_t VAR_4,
                                 gss_buffer_t VAR_5,
                                 gss_buffer_t VAR_6)
{
    struct gss_mech_compat_desc_struct *VAR_7;
    gssapi_mech_interface VAR_8;
    OM_uint32 VAR_9;

    VAR_8 = FUNC_0(VAR_3);
    if (VAR_8 == ((void*)0))
        return VAR_0;

    VAR_7 = VAR_8->gm_compat;

    if (VAR_7 != ((void*)0) && VAR_7->gmc_inquire_saslname_for_mech != ((void*)0)) {
        VAR_9 = VAR_7->gmc_inquire_saslname_for_mech(VAR_2,
                                                   VAR_3,
                                                   VAR_4,
                                                   VAR_5,
                                                   VAR_6);
    } else {
        VAR_9 = VAR_1;
    }

    return VAR_9;
}
