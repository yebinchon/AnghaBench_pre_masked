
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_key_usage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int EncryptionKey ;
typedef int EncryptedData ;
typedef int Authenticator ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,size_t*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *,TYPE_1__*) ;

__attribute__((used)) static krb5_error_code
FUNC_5 (krb5_context VAR_2,
         EncryptionKey *VAR_3,
         EncryptedData *VAR_4,
         Authenticator *VAR_5,
         krb5_key_usage VAR_6)
{
    krb5_error_code VAR_7;
    krb5_data VAR_8;
    size_t VAR_9;
    krb5_crypto VAR_10;

    VAR_7 = FUNC_2(VAR_2, VAR_3, 0, &VAR_10);
    if (VAR_7)
 return VAR_7;
    VAR_7 = FUNC_4 (VAR_2,
          VAR_10,
          VAR_6 ,
          VAR_4,
          &VAR_8);

    if (VAR_7 && VAR_6 == VAR_1)
 VAR_7 = FUNC_4 (VAR_2,
       VAR_10,
       VAR_0,
       VAR_4,
       &VAR_8);
    FUNC_1(VAR_2, VAR_10);
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_0(VAR_8.data, VAR_8.length,
          VAR_5, &VAR_9);
    FUNC_3 (&VAR_8);
    return VAR_7;
}
