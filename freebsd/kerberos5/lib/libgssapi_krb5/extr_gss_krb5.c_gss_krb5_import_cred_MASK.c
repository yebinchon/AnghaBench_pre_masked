
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_principal ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int gss_cred_id_t ;
struct TYPE_7__ {int length; int value; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,char**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,char**) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int ,int ,char**) ;

OM_uint32
FUNC_12(OM_uint32 *VAR_4,
       krb5_ccache VAR_5,
       krb5_principal VAR_6,
       krb5_keytab VAR_7,
       gss_cred_id_t *VAR_8)
{
    gss_buffer_desc VAR_9;
    OM_uint32 VAR_10;
    krb5_context VAR_11;
    krb5_error_code VAR_12;
    krb5_storage *VAR_13;
    krb5_data VAR_14;
    char *VAR_15;

    *VAR_8 = VAR_1;

    VAR_12 = FUNC_5(&VAR_11);
    if (VAR_12) {
 *VAR_4 = VAR_12;
 return VAR_3;
    }

    VAR_13 = FUNC_7();
    if (VAR_13 == ((void*)0)) {
 *VAR_4 = VAR_0;
 VAR_10 = VAR_3;
 goto out;
    }

    if (VAR_5) {
 VAR_12 = FUNC_2(VAR_11, VAR_5, &VAR_15);
 if (VAR_12 == 0) {
     VAR_12 = FUNC_10(VAR_13, VAR_15);
     FUNC_0(VAR_15);
 }
    } else
 VAR_12 = FUNC_10(VAR_13, "");
    if (VAR_12) {
 *VAR_4 = VAR_12;
 VAR_10 = VAR_3;
 goto out;
    }

    if (VAR_6) {
 VAR_12 = FUNC_11(VAR_11, VAR_6, &VAR_15);
 if (VAR_12 == 0) {
     VAR_12 = FUNC_10(VAR_13, VAR_15);
     FUNC_0(VAR_15);
 }
    } else
 FUNC_10(VAR_13, "");
    if (VAR_12) {
 *VAR_4 = VAR_12;
 VAR_10 = VAR_3;
 goto out;
    }


    if (VAR_7) {
 VAR_12 = FUNC_6(VAR_11, VAR_7, &VAR_15);
 if (VAR_12 == 0) {
     VAR_12 = FUNC_10(VAR_13, VAR_15);
     FUNC_0(VAR_15);
 }
    } else
 FUNC_10(VAR_13, "");
    if (VAR_12) {
 *VAR_4 = VAR_12;
 VAR_10 = VAR_3;
 goto out;
    }

    VAR_12 = FUNC_9(VAR_13, &VAR_14);
    if (VAR_12) {
 *VAR_4 = VAR_12;
 VAR_10 = VAR_3;
 goto out;
    }

    VAR_9.value = VAR_14.data;
    VAR_9.length = VAR_14.length;

    VAR_10 = FUNC_1(VAR_4,
           VAR_8,
           VAR_2,
           &VAR_9);
    FUNC_3(&VAR_14);
out:
    if (VAR_13)
 FUNC_8(VAR_13);
    FUNC_4(VAR_11);
    return VAR_10;
}
