
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int krb5_cksumtype ;
typedef int gss_cfx_wrap_token_desc ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,size_t*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,size_t*) ;
 scalar_t__ FUNC_4 (int ,int ,size_t*) ;
 scalar_t__ FUNC_5 (int ,int ,size_t) ;

krb5_error_code
FUNC_6(krb5_context VAR_0,
       krb5_crypto VAR_1,
       int VAR_2,
       int VAR_3,
       size_t VAR_4,
       size_t *VAR_5,
       size_t *VAR_6,
       uint16_t *VAR_7)
{
    krb5_error_code VAR_8;
    krb5_cksumtype VAR_9;


    *VAR_5 = sizeof(gss_cfx_wrap_token_desc);
    *VAR_7 = 0;

    VAR_8 = FUNC_2(VAR_0, VAR_1, &VAR_9);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_1(VAR_0, VAR_9, VAR_6);
    if (VAR_8)
 return VAR_8;

    if (VAR_2) {
 size_t VAR_10;


 VAR_4 += sizeof(gss_cfx_wrap_token_desc);

 if (VAR_3) {
  VAR_8 = FUNC_3(VAR_0, VAR_1, &VAR_10);
 } else {
  VAR_8 = FUNC_4(VAR_0, VAR_1, &VAR_10);
 }
 if (VAR_8) {
     return VAR_8;
 }
 if (VAR_10 > 1) {

     *VAR_7 = VAR_10 - (VAR_4 % VAR_10);


     VAR_4 += *VAR_7;
 }

 *VAR_5 += FUNC_5(VAR_0,
        VAR_1, VAR_4);
    } else {

 *VAR_5 += VAR_4 + *VAR_6;
    }

    FUNC_0(*VAR_5 > VAR_4);

    return 0;
}
