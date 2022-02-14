
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_9__ {scalar_t__ length; int data; } ;
struct TYPE_8__ {TYPE_2__ ciphertext; int enctype; scalar_t__ kvno; } ;
typedef TYPE_1__ krb5_enc_data ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__,size_t*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(krb5_context VAR_1,
     krb5_enctype VAR_2,
     krb5_keyblock *VAR_3,
     unsigned VAR_4,
     krb5_data *VAR_5,
     krb5_data *VAR_6)
{

    krb5_error_code VAR_7;
    krb5_enc_data VAR_8;
    krb5_data VAR_9;
    size_t VAR_10;

    VAR_8.kvno = 0;
    VAR_8.enctype = VAR_2;
    VAR_8.ciphertext = *VAR_5;

    VAR_7 = FUNC_0(VAR_1, *VAR_3, VAR_4, ((void*)0), &VAR_8, &VAR_9);
    if (VAR_7)
 return VAR_7;

    if (VAR_9.length != VAR_6->length ||
 FUNC_4(VAR_9.data, VAR_6->data, VAR_9.length) != 0) {
 FUNC_3(VAR_1, "clear text not same");
 return VAR_0;
    }

    FUNC_2(&VAR_9);

    VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_6->length, &VAR_10);
    if (VAR_7)
 return VAR_7;

    if (VAR_10 != VAR_5->length) {
 FUNC_3(VAR_1, "c_encrypt_length wrong %lu != %lu",
     (unsigned long)VAR_10, (unsigned long)VAR_5->length);
 return VAR_0;
    }

    return 0;
}
