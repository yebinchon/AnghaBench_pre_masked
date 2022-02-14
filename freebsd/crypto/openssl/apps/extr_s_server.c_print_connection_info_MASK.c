
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
typedef int X509 ;
struct TYPE_3__ {int name; } ;
typedef int SSL ;
typedef TYPE_1__ SRTP_PROTECTION_PROFILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 char* FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int *,unsigned char*,int,int *,int ,int *,int ,int ) ;
 int FUNC_8 (int *,unsigned char const**,unsigned int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *,char*,int) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 unsigned char* FUNC_18 (int,char*) ;
 int VAR_2 ;
 int FUNC_19 (int ,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_22 (int ,int *,int ) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static void FUNC_26(SSL *VAR_6)
{
    const char *VAR_7;
    X509 *VAR_8;
    char VAR_9[VAR_0];

    const unsigned char *VAR_10;
    unsigned VAR_11;

    unsigned char *VAR_12;
    int VAR_13;

    if (VAR_5)
        FUNC_21(VAR_6);

    FUNC_4(VAR_2, FUNC_14(VAR_6));

    VAR_8 = FUNC_11(VAR_6);
    if (VAR_8 != ((void*)0)) {
        FUNC_1(VAR_2, "Client certificate\n");
        FUNC_5(VAR_2, VAR_8);
        FUNC_19(VAR_2, VAR_8);
        FUNC_17(VAR_8);
        VAR_8 = ((void*)0);
    }

    if (FUNC_15(VAR_6, VAR_9, sizeof(VAR_9)) != ((void*)0))
        FUNC_1(VAR_2, "Shared ciphers:%s\n", VAR_9);
    VAR_7 = FUNC_6(FUNC_9(VAR_6));
    FUNC_24(VAR_2, VAR_6);

    FUNC_23(VAR_2, VAR_6);
    FUNC_22(VAR_2, VAR_6, 0);

    FUNC_20(VAR_2, VAR_6);
    FUNC_1(VAR_2, "CIPHER is %s\n", (VAR_7 != ((void*)0)) ? VAR_7 : "(NONE)");


    FUNC_8(VAR_6, &VAR_10, &VAR_11);
    if (VAR_10) {
        FUNC_1(VAR_2, "NEXTPROTO is ");
        FUNC_2(VAR_2, VAR_10, VAR_11);
        FUNC_1(VAR_2, "\n");
    }


    {
        SRTP_PROTECTION_PROFILE *VAR_14
            = FUNC_13(VAR_6);

        if (VAR_14)
            FUNC_1(VAR_2, "SRTP Extension negotiated, profile=%s\n",
                       VAR_14->name);
    }

    if (FUNC_16(VAR_6))
        FUNC_1(VAR_2, "Reused session-id\n");
    FUNC_1(VAR_2, "Secure Renegotiation IS%s supported\n",
               FUNC_12(VAR_6) ? "" : " NOT");
    if ((FUNC_10(VAR_6) & VAR_1))
        FUNC_1(VAR_2, "Renegotiation is DISABLED\n");

    if (VAR_3 != ((void*)0)) {
        FUNC_1(VAR_2, "Keying material exporter:\n");
        FUNC_1(VAR_2, "    Label: '%s'\n", VAR_3);
        FUNC_1(VAR_2, "    Length: %i bytes\n", VAR_4);
        VAR_12 = FUNC_18(VAR_4, "export key");
        if (!FUNC_7(VAR_6, VAR_12,
                                        VAR_4,
                                        VAR_3,
                                        FUNC_25(VAR_3),
                                        ((void*)0), 0, 0)) {
            FUNC_1(VAR_2, "    Error\n");
        } else {
            FUNC_1(VAR_2, "    Keying material: ");
            for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
                FUNC_1(VAR_2, "%02X", VAR_12[VAR_13]);
            FUNC_1(VAR_2, "\n");
        }
        FUNC_3(VAR_12);
    }

    (void)FUNC_0(VAR_2);
}
