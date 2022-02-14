
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,unsigned char*,int) ;
 int FUNC_11 (unsigned char*,int,char*,int,int *,int *,int *) ;

int
FUNC_12(void)
{
    unsigned char VAR_6[VAR_2];
    unsigned char VAR_7[VAR_3];
    unsigned char VAR_8[VAR_1];
    unsigned char VAR_9[VAR_1];
    unsigned char VAR_10[VAR_1];
    char VAR_11[VAR_1 * 2 + 1];
    char VAR_12[VAR_1 * 2 + 1];
    unsigned char VAR_13[VAR_0];
    unsigned int VAR_14;

    FUNC_0(VAR_4 <= VAR_0);



    FUNC_8(VAR_13, VAR_5, VAR_4);

    FUNC_5(VAR_6, VAR_7, VAR_13);

    if (FUNC_4(VAR_8, VAR_6) != 0) {
        FUNC_9("conversion failed\n");
    }
    FUNC_6(VAR_10, VAR_7);
    FUNC_10(VAR_11, sizeof VAR_11, VAR_8,
                   sizeof VAR_8);
    FUNC_10(VAR_12, sizeof VAR_12, VAR_10,
                   sizeof VAR_10);

    FUNC_9("curve25519 pk: [%s]\n", VAR_11);
    FUNC_9("curve25519 sk: [%s]\n", VAR_12);

    for (VAR_14 = 0U; VAR_14 < 500U; VAR_14++) {
        FUNC_3(VAR_6, VAR_7);
        if (FUNC_4(VAR_8, VAR_6) !=
            0) {
            FUNC_9("conversion failed\n");
        }
        FUNC_6(VAR_10, VAR_7);
        FUNC_2(VAR_9, VAR_10);
        if (FUNC_7(VAR_8, VAR_9, sizeof VAR_8) != 0) {
            FUNC_9("conversion failed\n");
        }
    }

    FUNC_11(VAR_6, VAR_2,
                   "0000000000000000000000000000000000000000000000000000000000000000"
                   "0000000000000000000000000000000000000000000000000000000000000000",
                   64, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(FUNC_4(VAR_8, VAR_6) == -1);
    FUNC_11(VAR_6, VAR_2,
                   "0200000000000000000000000000000000000000000000000000000000000000"
                   "0000000000000000000000000000000000000000000000000000000000000000",
                   64, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(FUNC_4(VAR_8, VAR_6) == -1);
    FUNC_11(VAR_6, VAR_2,
                   "0500000000000000000000000000000000000000000000000000000000000000"
                   "0000000000000000000000000000000000000000000000000000000000000000",
                   64, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(FUNC_4(VAR_8, VAR_6) == -1);

    FUNC_9("ok\n");

    return 0;
}
