
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned int,unsigned char*,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,int,unsigned char*,unsigned int,unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,int,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (char*,int,unsigned char*,int) ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (unsigned char*,int,char const*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_11 (size_t) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static
void FUNC_13(void)
{
    static struct {
        const char *key_hex;
        const char *nonce_hex;
    } VAR_2[]
      = { { "0000000000000000000000000000000000000000000000000000000000000000",
            "0000000000000000" },
          { "0000000000000000000000000000000000000000000000000000000000000001",
            "0000000000000000" },
          { "0000000000000000000000000000000000000000000000000000000000000000",
            "0000000000000001" },
          { "0000000000000000000000000000000000000000000000000000000000000000",
            "0100000000000000" },
          { "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "0001020304050607" } };
    unsigned char VAR_3[VAR_0];
    unsigned char VAR_4[VAR_1];
    unsigned char *VAR_5;
    unsigned char VAR_6[160];
    unsigned char VAR_7[160];
    char VAR_8[160 * 2 + 1];
    size_t VAR_9 = 0U;
    size_t VAR_10;

    FUNC_5(VAR_7, 0, sizeof VAR_7);
    do {
        FUNC_10((unsigned char *)VAR_3, sizeof VAR_3, VAR_2[VAR_9].key_hex,
                       FUNC_12(VAR_2[VAR_9].key_hex), ((void*)0), ((void*)0), ((void*)0));
        FUNC_10(VAR_4, sizeof VAR_4, VAR_2[VAR_9].nonce_hex,
                       FUNC_12(VAR_2[VAR_9].nonce_hex), ((void*)0), ((void*)0), ((void*)0));
        FUNC_1(VAR_6, sizeof VAR_6, VAR_4, VAR_3);
        FUNC_8(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
        FUNC_6("[%s]\n", VAR_8);
        for (VAR_10 = 1U; VAR_10 < sizeof VAR_6; VAR_10++) {
            VAR_5 = (unsigned char *) FUNC_11(VAR_10);
            FUNC_2(VAR_5, VAR_6, VAR_10, VAR_4, VAR_3);
            if (FUNC_4(VAR_5, VAR_7, VAR_10) != 0) {
                FUNC_6("Failed with length %lu\n", (unsigned long) VAR_10);
            }
            FUNC_9(VAR_5);
        }
    } while (++VAR_9 < (sizeof VAR_2) / (sizeof VAR_2[0]));
    FUNC_0(66 <= sizeof VAR_6);
    for (VAR_10 = 1U; VAR_10 < 66; VAR_10 += 3) {
        FUNC_5(VAR_6, (int) (VAR_10 & 0xff), sizeof VAR_6);
        FUNC_1(VAR_6, VAR_10, VAR_4, VAR_3);
        FUNC_8(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
        FUNC_6("[%s]\n", VAR_8);
    }
    FUNC_7(VAR_6, sizeof VAR_6);
    FUNC_1(VAR_6, sizeof VAR_6, VAR_4, VAR_3);
    FUNC_8(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_6("[%s]\n", VAR_8);

    FUNC_0(FUNC_1(VAR_6, 0U, VAR_4, VAR_3) == 0);
    FUNC_0(FUNC_2(VAR_6, VAR_6, 0U, VAR_4, VAR_3) == 0);
    FUNC_0(FUNC_2(VAR_6, VAR_6, 0U, VAR_4, VAR_3) == 0);
    FUNC_0(FUNC_3(VAR_6, VAR_6, 0U, VAR_4, 1U, VAR_3) == 0);

    FUNC_5(VAR_6, 0x42, sizeof VAR_6);
    FUNC_2(VAR_6, VAR_6, sizeof VAR_6, VAR_4, VAR_3);
    FUNC_8(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_6("[%s]\n", VAR_8);

    FUNC_3(VAR_6, VAR_6, sizeof VAR_6, VAR_4, 0U, VAR_3);
    FUNC_8(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_6("[%s]\n", VAR_8);

    FUNC_3(VAR_6, VAR_6, sizeof VAR_6, VAR_4, 1U, VAR_3);
    FUNC_8(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_6("[%s]\n", VAR_8);
}
