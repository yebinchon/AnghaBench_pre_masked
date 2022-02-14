
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef int kcm_ccache ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,char*,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_0,
      kcm_client *VAR_1,
      kcm_operation VAR_2,
      krb5_storage *VAR_3,
      krb5_storage *VAR_4)
{
    krb5_creds VAR_5;
    krb5_error_code VAR_6;
    kcm_ccache VAR_7;
    char *VAR_8;

    VAR_6 = FUNC_8(VAR_3, &VAR_8);
    if (VAR_6)
 return VAR_6;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8);

    VAR_6 = FUNC_7(VAR_3, &VAR_5);
    if (VAR_6) {
 FUNC_1(VAR_8);
 return VAR_6;
    }

    VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2,
        VAR_8, &VAR_7);
    if (VAR_6) {
 FUNC_1(VAR_8);
 FUNC_6(VAR_0, &VAR_5);
 return VAR_6;
    }

    VAR_6 = FUNC_4(VAR_0, VAR_7, &VAR_5, 0);
    if (VAR_6) {
 FUNC_1(VAR_8);
 FUNC_6(VAR_0, &VAR_5);
 FUNC_5(VAR_0, VAR_7);
 return VAR_6;
    }

    FUNC_2(VAR_0, VAR_7, &VAR_5);

    FUNC_1(VAR_8);
    FUNC_5(VAR_0, VAR_7);

    return 0;
}
