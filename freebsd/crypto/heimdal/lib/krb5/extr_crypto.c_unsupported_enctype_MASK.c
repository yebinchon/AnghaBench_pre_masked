
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,char**) ;
 int FUNC_3 (int ,scalar_t__,int ,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1, krb5_enctype VAR_2)
{
    krb5_error_code VAR_3;
    char *VAR_4;

    VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_4);
    if (VAR_3)
 return VAR_3;

    FUNC_3(VAR_1, VAR_0,
      FUNC_0("Encryption type %s not supported", ""),
      VAR_4);
    FUNC_1(VAR_4);
    return VAR_0;
}
