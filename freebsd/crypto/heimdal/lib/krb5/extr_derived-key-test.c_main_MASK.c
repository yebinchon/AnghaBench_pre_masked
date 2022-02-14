
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct testcase {scalar_t__ enctype; unsigned char* key; int* res; int constant_len; int constant; } ;
struct TYPE_6__ {int length; unsigned char* data; } ;
struct TYPE_7__ {TYPE_1__ keyvalue; int keytype; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,scalar_t__,int ,int ,TYPE_2__**) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned char*,int*,int) ;
 int FUNC_7 (char*,...) ;
 struct testcase* VAR_2 ;

int
FUNC_8(int VAR_3, char **VAR_4)
{
    struct testcase *VAR_5;
    krb5_context VAR_6;
    krb5_error_code VAR_7;
    int VAR_8 = 0;

    VAR_7 = FUNC_5 (&VAR_6);
    if (VAR_7)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_7);

    for (VAR_5 = VAR_2; VAR_5->enctype != 0; ++VAR_5) {
 krb5_keyblock VAR_9;
 krb5_keyblock *VAR_10;

 VAR_9.keytype = VAR_0;
 VAR_9.keyvalue.length = VAR_1;
 VAR_9.keyvalue.data = VAR_5->key;

 VAR_7 = FUNC_1(VAR_6, &VAR_9, VAR_5->enctype, VAR_5->constant,
         VAR_5->constant_len, &VAR_10);
 if (VAR_7)
     FUNC_2 (VAR_6, 1, VAR_7, "krb5_derive_key");
 if (FUNC_6 (VAR_10->keyvalue.data, VAR_5->res, VAR_10->keyvalue.length) != 0) {
     const unsigned char *VAR_11 = VAR_10->keyvalue.data;
     int VAR_12;

     FUNC_7 ("derive_key failed\n");
     FUNC_7 ("should be: ");
     for (VAR_12 = 0; VAR_12 < VAR_10->keyvalue.length; ++VAR_12)
  FUNC_7 ("%02x", VAR_5->res[VAR_12]);
     FUNC_7 ("\nresult was: ");
     for (VAR_12 = 0; VAR_12 < VAR_10->keyvalue.length; ++VAR_12)
  FUNC_7 ("%02x", VAR_11[VAR_12]);
     FUNC_7 ("\n");
     VAR_8 = 1;
 }
 FUNC_4(VAR_6, VAR_10);
    }
    FUNC_3(VAR_6);

    return VAR_8;
}
