
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct client {int moniker; } ;
struct TYPE_12__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (struct client*,scalar_t__,int,int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct client*,scalar_t__,int,int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int32_t
FUNC_6(struct client *VAR_1, int32_t VAR_2, struct client *VAR_3, int32_t VAR_4,
       int VAR_5, int VAR_6)
{
    krb5_data VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int32_t VAR_12;

    VAR_7.data = "header";
    VAR_7.length = 6;

    VAR_8.data = "0123456789abcdef";
    VAR_8.length = 32;

    VAR_9.data = "trailer";
    VAR_9.length = 7;

    FUNC_1(&VAR_10);
    FUNC_1(&VAR_11);

    VAR_12 = FUNC_5(VAR_1, VAR_2, VAR_5, VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
    if (VAR_12) {
 FUNC_4("encrypt_token failed to host: %s", VAR_1->moniker);
 return VAR_12;
    }
    VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_10, &VAR_9, &VAR_11);
    if (VAR_12) {
 FUNC_0(&VAR_10);
 FUNC_4("decrypt_token failed to host: %s", VAR_3->moniker);
 return VAR_12;
    }

    if (VAR_8.length != VAR_11.length) {
 FUNC_4("decrypted'ed token have wrong length (%lu != %lu)",
       (unsigned long)VAR_8.length, (unsigned long)VAR_11.length);
 VAR_12 = VAR_0;
    } else if (FUNC_2(VAR_8.data, VAR_11.data, VAR_8.length) != 0) {
 FUNC_4("decryptd'ed token have wrong data");
 VAR_12 = VAR_0;
    }

    FUNC_0(&VAR_10);
    FUNC_0(&VAR_11);
    return VAR_12;
}
