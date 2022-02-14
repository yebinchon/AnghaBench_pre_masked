
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_7__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
struct TYPE_8__ {int enc_part; } ;
typedef TYPE_2__ Ticket ;
typedef int EncTicketPart ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,size_t*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_8 (int ,int ,char*,int ,int *) ;

__attribute__((used)) static void
FUNC_9 (krb5_context VAR_1,
        krb5_data *VAR_2,
        krb5_principal VAR_3,
        krb5_enctype VAR_4)
{
    krb5_error_code VAR_5;
    krb5_crypto VAR_6;
    krb5_data VAR_7;
    size_t VAR_8;
    EncTicketPart VAR_9;
    krb5_keyblock VAR_10;
    Ticket VAR_11;

    VAR_5 = FUNC_1 (VAR_2->data, VAR_2->length, &VAR_11, &VAR_8);
    if (VAR_5)
 FUNC_7 (VAR_1, 1, VAR_5, "decode_Ticket");

    VAR_5 = FUNC_8 (VAR_1, VAR_4, "foo", VAR_3, &VAR_10);
    if (VAR_5)
 FUNC_7 (VAR_1, 1, VAR_5, "krb5_string_to_key");

    VAR_5 = FUNC_4(VAR_1, &VAR_10, 0, &VAR_6);
    if (VAR_5)
 FUNC_7 (VAR_1, 1, VAR_5, "krb5_crypto_init");

    VAR_5 = FUNC_6 (VAR_1, VAR_6, VAR_0,
          &VAR_11.enc_part, &VAR_7);
    FUNC_3 (VAR_1, VAR_6);
    if (VAR_5)
 FUNC_7 (VAR_1, 1, VAR_5, "krb5_decrypt_EncryptedData");
    VAR_5 = FUNC_0 (VAR_7.data, VAR_7.length,
    &VAR_9, &VAR_8);
    FUNC_5 (&VAR_7);
    if (VAR_5)
 FUNC_7 (VAR_1, 1, VAR_5, "krb5_decode_EncTicketPart");
    FUNC_2(&VAR_9);
}
