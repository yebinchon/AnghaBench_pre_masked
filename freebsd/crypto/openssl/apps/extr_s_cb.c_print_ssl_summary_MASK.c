
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CIPHER ;
typedef int SSL ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_0 ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int ,int *,int) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ,int *) ;

void FUNC_21(SSL *VAR_1)
{
    const SSL_CIPHER *VAR_2;
    X509 *VAR_3;

    FUNC_0(VAR_0, "Protocol version: %s\n", FUNC_8(VAR_1));
    FUNC_16(VAR_1);
    VAR_2 = FUNC_4(VAR_1);
    FUNC_0(VAR_0, "Ciphersuite: %s\n", FUNC_3(VAR_2));
    FUNC_13(VAR_0, VAR_1, 0);
    VAR_3 = FUNC_5(VAR_1);
    if (VAR_3 != ((void*)0)) {
        int VAR_4;

        FUNC_1(VAR_0, "Peer certificate: ");
        FUNC_10(VAR_0, FUNC_12(VAR_3),
                           0, FUNC_14());
        FUNC_1(VAR_0, "\n");
        if (FUNC_6(VAR_1, &VAR_4))
            FUNC_0(VAR_0, "Hash used: %s\n", FUNC_2(VAR_4));
        if (FUNC_7(VAR_1, &VAR_4))
            FUNC_0(VAR_0, "Signature type: %s\n", FUNC_15(VAR_4));
        FUNC_17(VAR_1, VAR_0);
    } else {
        FUNC_1(VAR_0, "No peer certificate\n");
    }
    FUNC_11(VAR_3);

    FUNC_19(VAR_0, VAR_1);
    if (FUNC_9(VAR_1))
        FUNC_18(VAR_0, VAR_1, 1);
    else
        FUNC_20(VAR_0, VAR_1);




}
