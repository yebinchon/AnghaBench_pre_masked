
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_client ;
typedef int kcm_ccache ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,char const*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

krb5_error_code
FUNC_7(krb5_context VAR_1,
     kcm_client *VAR_2,
     const char *VAR_3)
{
    krb5_error_code VAR_4;
    kcm_ccache VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_3, &VAR_5);
    if (VAR_4) {
 FUNC_4(1, "Failed to resolve cache %s: %s",
  VAR_3, FUNC_6(VAR_1, VAR_4));
 return VAR_4;
    }

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_5);
    FUNC_3(VAR_1, VAR_5);
    FUNC_5(VAR_1, VAR_5);
    if (VAR_4)
 return VAR_4;

    return FUNC_1(VAR_1, VAR_3);
}
