
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef int kcm_ccache ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,char**) ;
 scalar_t__ FUNC_8 (int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_0,
     kcm_client *VAR_1,
     kcm_operation VAR_2,
     krb5_storage *VAR_3,
     krb5_storage *VAR_4)
{
    uint32_t VAR_5;
    krb5_creds VAR_6;
    krb5_error_code VAR_7;
    kcm_ccache VAR_8;
    char *VAR_9;

    VAR_7 = FUNC_7(VAR_3, &VAR_9);
    if (VAR_7)
 return VAR_7;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_9);

    VAR_7 = FUNC_8(VAR_3, &VAR_5);
    if (VAR_7) {
 FUNC_1(VAR_9);
 return VAR_7;
    }

    VAR_7 = FUNC_6(VAR_3, &VAR_6);
    if (VAR_7) {
 FUNC_1(VAR_9);
 return VAR_7;
    }

    VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2,
        VAR_9, &VAR_8);
    if (VAR_7) {
 FUNC_1(VAR_9);
 FUNC_5(VAR_0, &VAR_6);
 return VAR_7;
    }

    VAR_7 = FUNC_2(VAR_0, VAR_8, VAR_5, &VAR_6);



    FUNC_1(VAR_9);
    FUNC_5(VAR_0, &VAR_6);
    FUNC_4(VAR_0, VAR_8);

    return VAR_7;
}
