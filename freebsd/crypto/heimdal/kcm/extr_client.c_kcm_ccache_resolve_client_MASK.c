
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef int kcm_ccache ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int,char*,char const*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

krb5_error_code
FUNC_5(krb5_context VAR_1,
     kcm_client *VAR_2,
     kcm_operation VAR_3,
     const char *VAR_4,
     kcm_ccache *VAR_5)
{
    krb5_error_code VAR_6;

    VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5);
    if (VAR_6) {
 FUNC_2(1, "Failed to resolve cache %s: %s",
  VAR_4, FUNC_4(VAR_1, VAR_6));
 return VAR_6;
    }

    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, *VAR_5);
    if (VAR_6) {
 VAR_6 = VAR_0;
 FUNC_3(VAR_1, *VAR_5);
    }

    return VAR_6;
}
