
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct client {int moniker; } ;
struct TYPE_8__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct client*,scalar_t__,int,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct client*,scalar_t__,int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int32_t
FUNC_6(struct client *VAR_1, int32_t VAR_2, struct client *VAR_3, int32_t VAR_4,
   int VAR_5)
{
    krb5_data VAR_6, VAR_7, VAR_8;
    int32_t VAR_9;

    VAR_6.data = "foo";
    VAR_6.length = 3;

    FUNC_3(&VAR_7);
    FUNC_3(&VAR_8);

    VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_5, &VAR_6, &VAR_7);
    if (VAR_9) {
 FUNC_5("encrypt_token failed to host: %s", VAR_1->moniker);
 return VAR_9;
    }
    VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_7, &VAR_8);
    if (VAR_9) {
 FUNC_2(&VAR_7);
 FUNC_5("decrypt_token failed to host: %s", VAR_3->moniker);
 return VAR_9;
    }

    if (VAR_6.length != VAR_8.length) {
 FUNC_5("decrypted'ed token have wrong length (%lu != %lu)",
       (unsigned long)VAR_6.length, (unsigned long)VAR_8.length);
 VAR_9 = VAR_0;
    } else if (FUNC_4(VAR_6.data, VAR_8.data, VAR_6.length) != 0) {
 FUNC_5("decryptd'ed token have wrong data");
 VAR_9 = VAR_0;
    }

    FUNC_2(&VAR_7);
    FUNC_2(&VAR_8);
    return VAR_9;
}
