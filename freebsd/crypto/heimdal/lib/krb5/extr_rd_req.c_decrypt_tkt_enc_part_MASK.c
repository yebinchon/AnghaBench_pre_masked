
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int EncryptedData ;
typedef int EncTicketPart ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *,size_t*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,TYPE_1__*) ;
 int FUNC_6 (int ,scalar_t__,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_7 (krb5_context VAR_1,
        krb5_keyblock *VAR_2,
        EncryptedData *VAR_3,
        EncTicketPart *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_data VAR_6;
    size_t VAR_7;
    krb5_crypto VAR_8;

    VAR_5 = FUNC_3(VAR_1, VAR_2, 0, &VAR_8);
    if (VAR_5)
 return VAR_5;
    VAR_5 = FUNC_5 (VAR_1,
          VAR_8,
          VAR_0,
          VAR_3,
          &VAR_6);
    FUNC_2(VAR_1, VAR_8);
    if (VAR_5)
 return VAR_5;

    VAR_5 = FUNC_1(VAR_6.data, VAR_6.length, VAR_4, &VAR_7);
    if (VAR_5)
        FUNC_6(VAR_1, VAR_5,
          FUNC_0("Failed to decode encrypted "
      "ticket part", ""));
    FUNC_4 (&VAR_6);
    return VAR_5;
}
