
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int * krb5_crypto ;
typedef int krb5_context ;
typedef scalar_t__ krb5_cksumtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,size_t*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int const*,int ,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_2,
      const krb5_keyblock *VAR_3,
      uint32_t *VAR_4,
      size_t *VAR_5)
{
    krb5_cksumtype VAR_6;
    krb5_error_code VAR_7;
    krb5_crypto VAR_8 = ((void*)0);

    VAR_7 = FUNC_4(VAR_2, VAR_3, 0, &VAR_8);
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_3(VAR_2, VAR_8, &VAR_6);
    FUNC_2(VAR_2, VAR_8);
    if (VAR_7)
 return VAR_7;

    if (FUNC_0(VAR_2, VAR_6) == VAR_1) {
 *VAR_4 = VAR_0;
 *VAR_5 = 16;
    }

    VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_5);
    if (VAR_7)
 return VAR_7;

    *VAR_4 = (uint32_t)VAR_6;

    return 0;
}
