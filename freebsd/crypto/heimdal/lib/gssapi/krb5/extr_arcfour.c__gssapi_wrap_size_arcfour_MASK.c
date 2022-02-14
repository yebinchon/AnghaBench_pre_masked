
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int const,int ,scalar_t__,scalar_t__*) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_2,
     const gsskrb5_ctx VAR_3,
     krb5_context VAR_4,
     int VAR_5,
     gss_qop_t VAR_6,
     OM_uint32 VAR_7,
     OM_uint32 *VAR_8,
     krb5_keyblock *VAR_9)
{
    krb5_error_code VAR_10;
    krb5_crypto VAR_11;

    VAR_10 = FUNC_1(VAR_4, VAR_9, 0, &VAR_11);
    if (VAR_10 != 0) {
 *VAR_2 = VAR_10;
 return VAR_1;
    }

    VAR_10 = FUNC_2(VAR_3, VAR_11,
      VAR_7, VAR_8);
    if (VAR_10 != 0) {
 *VAR_2 = VAR_10;
 FUNC_0(VAR_4, VAR_11);
 return VAR_1;
    }

    FUNC_0(VAR_4, VAR_11);

    return VAR_0;
}
