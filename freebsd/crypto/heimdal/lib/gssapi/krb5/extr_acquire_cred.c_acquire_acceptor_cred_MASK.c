
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_kt_cursor ;
typedef int krb5_keytab_entry ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* gsskrb5_cred ;
typedef int gss_name_t ;
typedef int gss_cred_usage_t ;
typedef scalar_t__ gss_const_OID ;
struct TYPE_3__ {int * keytab; scalar_t__ principal; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;

__attribute__((used)) static OM_uint32 FUNC_7
    (OM_uint32 * VAR_4,
     krb5_context VAR_5,
     gss_const_OID VAR_6,
     const void *VAR_7,
     const gss_name_t VAR_8,
     OM_uint32 VAR_9,
     gss_const_OID VAR_10,
     gss_cred_usage_t VAR_11,
     gsskrb5_cred VAR_12
    )
{
    OM_uint32 VAR_13;
    krb5_error_code VAR_14;

    VAR_13 = VAR_3;

    if (VAR_6 != VAR_1) {
 VAR_14 = VAR_0;
 goto end;
    }

    VAR_14 = FUNC_0(VAR_5, &VAR_12->keytab);
    if (VAR_14)
 goto end;


    if (VAR_12->principal) {
 krb5_keytab_entry VAR_15;

 VAR_14 = FUNC_4(VAR_5, VAR_12->keytab,
     VAR_12->principal, 0, 0, &VAR_15);
 if (VAR_14)
     goto end;
 FUNC_3(VAR_5, &VAR_15);
 VAR_13 = VAR_2;
    } else {




 krb5_keytab_entry VAR_16;
 krb5_kt_cursor VAR_17;

 VAR_14 = FUNC_6 (VAR_5, VAR_12->keytab, &VAR_17);
 if (VAR_14)
     goto end;
 if (FUNC_5(VAR_5, VAR_12->keytab, &VAR_16, &VAR_17) == 0) {
     FUNC_3(VAR_5, &VAR_16);
     VAR_13 = VAR_2;
 }
 FUNC_2 (VAR_5, VAR_12->keytab, &VAR_17);
    }
end:
    if (VAR_13 != VAR_2) {
 if (VAR_12->keytab != ((void*)0))
     FUNC_1(VAR_5, VAR_12->keytab);
 if (VAR_14 != 0) {
     *VAR_4 = VAR_14;
 }
    }
    return (VAR_13);
}
