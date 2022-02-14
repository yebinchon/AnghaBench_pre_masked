
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int s ;
typedef int krb5_salt ;
struct TYPE_9__ {int data; } ;
struct TYPE_7__ {TYPE_3__ keyvalue; int keytype; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int EVP_MD_CTX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int* FUNC_10 (size_t) ;
 int FUNC_11 (int*,int ,size_t) ;
 scalar_t__ FUNC_12 (int ,int*,size_t*) ;
 scalar_t__ FUNC_13 (int ,size_t*) ;

__attribute__((used)) static krb5_error_code
FUNC_14(krb5_context VAR_1,
        krb5_enctype VAR_2,
        krb5_data VAR_3,
        krb5_salt VAR_4,
        krb5_data VAR_5,
        krb5_keyblock *VAR_6)
{
    krb5_error_code VAR_7;
    uint16_t *VAR_8 = ((void*)0);
    size_t VAR_9 = 0, VAR_10;
    EVP_MD_CTX *VAR_11;

    VAR_11 = FUNC_3();
    if (VAR_11 == ((void*)0)) {
 VAR_7 = VAR_0;
 FUNC_9(VAR_1, VAR_7, FUNC_6("malloc: out of memory", ""));
 goto out;
    }

    FUNC_1(VAR_11, FUNC_5(), ((void*)0));

    VAR_7 = FUNC_13(VAR_3.data, &VAR_9);
    if (VAR_7) {
 FUNC_9 (VAR_1, VAR_7,
    FUNC_6("Password not an UCS2 string", ""));
 goto out;
    }

    VAR_8 = FUNC_10 (VAR_9 * sizeof(VAR_8[0]));
    if (VAR_9 != 0 && VAR_8 == ((void*)0)) {
 FUNC_9 (VAR_1, VAR_0,
    FUNC_6("malloc: out of memory", ""));
 VAR_7 = VAR_0;
 goto out;
    }

    VAR_7 = FUNC_12(VAR_3.data, VAR_8, &VAR_9);
    if (VAR_7) {
 FUNC_9 (VAR_1, VAR_7,
    FUNC_6("Password not an UCS2 string", ""));
 goto out;
    }


    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
 unsigned char VAR_12;
 VAR_12 = (VAR_8[VAR_10] & 0xff);
 FUNC_2 (VAR_11, &VAR_12, 1);
 VAR_12 = (VAR_8[VAR_10] >> 8) & 0xff;
 FUNC_2 (VAR_11, &VAR_12, 1);
    }

    VAR_6->keytype = VAR_2;
    VAR_7 = FUNC_8 (&VAR_6->keyvalue, 16);
    if (VAR_7) {
 FUNC_9 (VAR_1, VAR_0, FUNC_6("malloc: out of memory", ""));
 goto out;
    }
    FUNC_0 (VAR_11, VAR_6->keyvalue.data, ((void*)0));

 out:
    FUNC_4(VAR_11);
    if (VAR_8)
 FUNC_11 (VAR_8, 0, VAR_9);
    FUNC_7 (VAR_8);
    return VAR_7;
}
