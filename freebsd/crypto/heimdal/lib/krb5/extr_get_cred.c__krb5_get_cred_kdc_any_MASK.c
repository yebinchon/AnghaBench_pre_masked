
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_principal ;
struct TYPE_11__ {scalar_t__ canonicalize; } ;
struct TYPE_12__ {TYPE_1__ b; } ;
typedef TYPE_2__ krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_deltat ;
typedef int krb5_creds ;
typedef TYPE_3__* krb5_context ;
typedef int krb5_ccache ;
typedef int Ticket ;
struct TYPE_13__ {scalar_t__ kdc_usec_offset; int kdc_sec_offset; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__,int ,int *,int ,int *,int **,int ***) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__,int ,int *,int ,int *,int **,int ***) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int *) ;

krb5_error_code
FUNC_3(krb5_context VAR_0,
         krb5_kdc_flags VAR_1,
         krb5_ccache VAR_2,
         krb5_creds *VAR_3,
         krb5_principal VAR_4,
         Ticket *VAR_5,
         krb5_creds **VAR_6,
         krb5_creds ***VAR_7)
{
    krb5_error_code VAR_8;
    krb5_deltat VAR_9;

    VAR_8 = FUNC_2(VAR_0, VAR_2, &VAR_9);
    if (VAR_8) {
 VAR_0->kdc_sec_offset = VAR_9;
 VAR_0->kdc_usec_offset = 0;
    }

    VAR_8 = FUNC_1(VAR_0,
    VAR_1,
    VAR_2,
    VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_7);
    if (VAR_8 == 0 || VAR_1.b.canonicalize)
 return VAR_8;
    return FUNC_0(VAR_0,
    VAR_1,
    VAR_2,
    VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_7);
}
