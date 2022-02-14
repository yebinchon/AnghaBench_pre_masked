
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int * krb5_principal ;
typedef int * krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int * krb5_ccache ;
typedef scalar_t__ gss_cred_id_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int *,int *,scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int **) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int **) ;
 scalar_t__ FUNC_7 (int ,char*,int **) ;
 scalar_t__ FUNC_8 (int *,char**) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;

__attribute__((used)) static OM_uint32
FUNC_11(OM_uint32 *VAR_2,
     krb5_context VAR_3,
            gss_cred_id_t *VAR_4,
            const gss_buffer_t VAR_5)
{
    OM_uint32 VAR_6;
    krb5_error_code VAR_7;
    krb5_principal VAR_8 = ((void*)0);
    krb5_keytab VAR_9 = ((void*)0);
    krb5_storage *VAR_10 = ((void*)0);
    krb5_ccache VAR_11 = ((void*)0);
    char *VAR_12;

    if (VAR_4 == ((void*)0) || *VAR_4 != VAR_0) {
 *VAR_2 = 0;
 return VAR_1;
    }

    VAR_10 = FUNC_10(VAR_5->value, VAR_5->length);
    if (VAR_10 == ((void*)0)) {
 *VAR_2 = 0;
 return VAR_1;
    }


    VAR_7 = FUNC_8(VAR_10, &VAR_12);
    if (VAR_7) {
 *VAR_2 = VAR_7;
 VAR_6 = VAR_1;
 goto out;
    }
    if (VAR_12[0]) {
 VAR_7 = FUNC_3(VAR_3, VAR_12, &VAR_11);
 if (VAR_7) {
     *VAR_2 = VAR_7;
     VAR_6 = VAR_1;
     goto out;
 }
    }
    FUNC_1(VAR_12);
    VAR_12 = ((void*)0);


    VAR_7 = FUNC_8(VAR_10, &VAR_12);
    if (VAR_7 == 0 && VAR_12[0])
 VAR_7 = FUNC_7(VAR_3, VAR_12, &VAR_8);
    if (VAR_7) {
 *VAR_2 = VAR_7;
 VAR_6 = VAR_1;
 goto out;
    }
    FUNC_1(VAR_12);
    VAR_12 = ((void*)0);


    VAR_7 = FUNC_8(VAR_10, &VAR_12);
    if (VAR_7) {
 *VAR_2 = VAR_7;
 VAR_6 = VAR_1;
 goto out;
    }
    if (VAR_12[0]) {
 VAR_7 = FUNC_6(VAR_3, VAR_12, &VAR_9);
 if (VAR_7) {
     *VAR_2 = VAR_7;
     VAR_6 = VAR_1;
     goto out;
 }
    }
    FUNC_1(VAR_12);
    VAR_12 = ((void*)0);

    VAR_6 = FUNC_0(VAR_2, VAR_11, VAR_8,
        VAR_9, VAR_4);
out:
    if (VAR_11)
 FUNC_2(VAR_3, VAR_11);
    if (VAR_8)
 FUNC_4(VAR_3, VAR_8);
    if (VAR_9)
 FUNC_5(VAR_3, VAR_9);
    if (VAR_12)
 FUNC_1(VAR_12);
    if (VAR_10)
 FUNC_9(VAR_10);

    return VAR_6;
}
