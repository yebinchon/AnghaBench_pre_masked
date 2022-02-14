
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_crypto ;
typedef int krb5_context ;
struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_1__ krb5_authdata ;
struct TYPE_7__ {unsigned char* enc_authorization_data; } ;
typedef TYPE_2__ KDC_REQ_BODY ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,size_t,TYPE_1__*,size_t*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int ,int ,int ,unsigned char*,size_t,int ,unsigned char*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_9 (krb5_context VAR_3,
        KDC_REQ_BODY *VAR_4,
        krb5_authdata *VAR_5,
        krb5_keyblock *VAR_6)
{
    if(VAR_5->len) {
 size_t VAR_7 = 0, VAR_8;
 unsigned char *VAR_9;
 krb5_crypto VAR_10;
 krb5_error_code VAR_11;

 FUNC_1(VAR_0, VAR_9, VAR_8, VAR_5,
      &VAR_7, VAR_11);
 if (VAR_11)
     return VAR_11;
 if (VAR_8 != VAR_7)
     FUNC_4(VAR_3, "internal error in ASN.1 encoder");

 FUNC_0(VAR_4->enc_authorization_data, 1);
 if (VAR_4->enc_authorization_data == ((void*)0)) {
     FUNC_3 (VAR_9);
     FUNC_8(VAR_3, VAR_1,
       FUNC_2("malloc: out of memory", ""));
     return VAR_1;
 }
 VAR_11 = FUNC_6(VAR_3, VAR_6, 0, &VAR_10);
 if (VAR_11) {
     FUNC_3 (VAR_9);
     FUNC_3 (VAR_4->enc_authorization_data);
     VAR_4->enc_authorization_data = ((void*)0);
     return VAR_11;
 }
 FUNC_7(VAR_3,
       VAR_10,
       VAR_2,
       VAR_9,
       VAR_7,
       0,
       VAR_4->enc_authorization_data);
 FUNC_3 (VAR_9);
 FUNC_5(VAR_3, VAR_10);
    } else {
 VAR_4->enc_authorization_data = ((void*)0);
    }
    return 0;
}
