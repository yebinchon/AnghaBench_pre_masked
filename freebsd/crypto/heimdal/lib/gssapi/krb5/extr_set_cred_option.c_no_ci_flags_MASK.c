
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int krb5_context ;
typedef TYPE_1__* gsskrb5_cred ;
typedef scalar_t__ gss_cred_id_t ;
typedef int gss_buffer_t ;
struct TYPE_2__ {int cred_flags; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static OM_uint32
FUNC_0(OM_uint32 *VAR_4,
     krb5_context VAR_5,
     gss_cred_id_t *VAR_6,
     const gss_buffer_t VAR_7)
{
    gsskrb5_cred VAR_8;

    if (VAR_6 == ((void*)0) || *VAR_6 == VAR_1) {
 *VAR_4 = 0;
 return VAR_3;
    }

    VAR_8 = (gsskrb5_cred)*VAR_6;
    VAR_8->cred_flags |= VAR_0;

    *VAR_4 = 0;
    return VAR_2;

}
