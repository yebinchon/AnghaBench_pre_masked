
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef TYPE_2__* kcm_ccache ;
struct TYPE_7__ {int keytab; } ;
struct TYPE_8__ {scalar_t__ renew_life; scalar_t__ tkt_life; int mode; TYPE_1__ key; int server; int client; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (int ,char*,TYPE_2__**) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int ,char*,char*,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (char*,char*) ;
 char* VAR_6 ;
 int FUNC_10 (int *,char*,int*) ;
 char* VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 char* VAR_12 ;

__attribute__((used)) static krb5_error_code
FUNC_11(void)
{
    kcm_ccache VAR_13;
    krb5_error_code VAR_14;

    if (VAR_7 == ((void*)0))
 VAR_7 = FUNC_3("cc_name");

    VAR_14 = FUNC_1(VAR_5,
    VAR_7 ? VAR_7 : "SYSTEM",
    &VAR_13);
    if (VAR_14)
 return VAR_14;

    VAR_13->flags |= VAR_2;
    VAR_13->flags |= VAR_3;

    VAR_14 = FUNC_8(VAR_13);
    if (VAR_14)
 return VAR_14;

    VAR_14 = FUNC_7(VAR_5, VAR_10, &VAR_13->client);
    if (VAR_14) {
 FUNC_2(VAR_5, VAR_13);
 return VAR_14;
    }

    if (VAR_11 == ((void*)0))
 VAR_11 = FUNC_3("server");

    if (VAR_11 != ((void*)0)) {
 VAR_14 = FUNC_7(VAR_5, VAR_11, &VAR_13->server);
 if (VAR_14) {
     FUNC_2(VAR_5, VAR_13);
     return VAR_14;
 }
    }

    if (VAR_8 == ((void*)0))
 VAR_8 = FUNC_3("keytab_name");

    if (VAR_8 != ((void*)0)) {
 VAR_14 = FUNC_6(VAR_5, VAR_8, &VAR_13->key.keytab);
    } else {
 VAR_14 = FUNC_5(VAR_5, &VAR_13->key.keytab);
    }
    if (VAR_14) {
 FUNC_2(VAR_5, VAR_13);
 return VAR_14;
    }

    if (VAR_6 == ((void*)0))
 VAR_6 = FUNC_3("renew_life");

    if (VAR_6 == ((void*)0))
 VAR_6 = "1 month";

    if (VAR_6 != ((void*)0)) {
 VAR_13->renew_life = FUNC_9(VAR_6, "s");
 if (VAR_13->renew_life < 0) {
     FUNC_2(VAR_5, VAR_13);
     return VAR_0;
 }
    }

    if (VAR_12 == ((void*)0))
 VAR_12 = FUNC_3("ticket_life");

    if (VAR_12 != ((void*)0)) {
 VAR_13->tkt_life = FUNC_9(VAR_12, "s");
 if (VAR_13->tkt_life < 0) {
     FUNC_2(VAR_5, VAR_13);
     return VAR_0;
 }
    }

    if (VAR_9 == ((void*)0))
 VAR_9 = FUNC_3("mode");

    if (VAR_9 != ((void*)0)) {
 int VAR_15;

 if (FUNC_10(VAR_9, "%o", &VAR_15) != 1)
     return VAR_0;

 VAR_13->mode = VAR_15;
    }

    if (VAR_4 == -1) {
 VAR_4 =
     FUNC_4(VAR_5, ((void*)0), VAR_1, "kcm",
      "disallow-getting-krbtgt", ((void*)0));
    }


    VAR_14 = FUNC_0(VAR_5, VAR_13, ((void*)0));

    FUNC_2(VAR_5, VAR_13);

    return VAR_14;
}
