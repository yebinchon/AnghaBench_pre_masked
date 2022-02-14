
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extensions; int * tsa; int * nonce; scalar_t__ ordering; int * accuracy; int time; int * serial; int msg_imprint; int policy_id; int version; } ;
typedef TYPE_1__ TS_TST_INFO ;
typedef int BIO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_10 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;

int FUNC_13(BIO *VAR_3, TS_TST_INFO *VAR_4)
{
    int VAR_5;

    if (VAR_4 == ((void*)0))
        return 0;

    VAR_5 = FUNC_1(VAR_4->version);
    FUNC_2(VAR_3, "Version: %d\n", VAR_5);

    FUNC_2(VAR_3, "Policy OID: ");
    FUNC_7(VAR_3, VAR_4->policy_id);

    FUNC_6(VAR_3, VAR_4->msg_imprint);

    FUNC_2(VAR_3, "Serial number: ");
    if (VAR_4->serial == ((void*)0))
        FUNC_2(VAR_3, "unspecified");
    else
        FUNC_5(VAR_3, VAR_4->serial);
    FUNC_3(VAR_3, "\n", 1);

    FUNC_2(VAR_3, "Time stamp: ");
    FUNC_0(VAR_3, VAR_4->time);
    FUNC_3(VAR_3, "\n", 1);

    FUNC_2(VAR_3, "Accuracy: ");
    if (VAR_4->accuracy == ((void*)0))
        FUNC_2(VAR_3, "unspecified");
    else
        FUNC_12(VAR_3, VAR_4->accuracy);
    FUNC_3(VAR_3, "\n", 1);

    FUNC_2(VAR_3, "Ordering: %s\n", VAR_4->ordering ? "yes" : "no");

    FUNC_2(VAR_3, "Nonce: ");
    if (VAR_4->nonce == ((void*)0))
        FUNC_2(VAR_3, "unspecified");
    else
        FUNC_5(VAR_3, VAR_4->nonce);
    FUNC_3(VAR_3, "\n", 1);

    FUNC_2(VAR_3, "TSA: ");
    if (VAR_4->tsa == ((void*)0))
        FUNC_2(VAR_3, "unspecified");
    else {
        FUNC_4(VAR_0) *VAR_2;
        if ((VAR_2 = FUNC_10(((void*)0), VAR_4->tsa, ((void*)0))))
            FUNC_9(VAR_3, VAR_2, 0, 0);
        FUNC_11(VAR_2, VAR_1);
    }
    FUNC_3(VAR_3, "\n", 1);

    FUNC_8(VAR_3, VAR_4->extensions);

    return 1;
}
