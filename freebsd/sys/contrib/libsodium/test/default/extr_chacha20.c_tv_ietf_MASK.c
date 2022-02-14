
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,size_t,unsigned char*,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,int,unsigned char*,unsigned int,unsigned char*) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (unsigned char*,int,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (unsigned char*,int) ;
 int FUNC_9 (char*,int,unsigned char*,int) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (unsigned char*,int,char const*,int ,char*,int *,int *) ;
 scalar_t__ FUNC_12 (size_t) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static
void FUNC_14(void)
{
    static struct {
        const char *key_hex;
        const char *nonce_hex;
        uint32_t ic;
    } VAR_2[]
      = { { "0000000000000000000000000000000000000000000000000000000000000000",
            "000000000000000000000000",
            0U },
          { "0000000000000000000000000000000000000000000000000000000000000000",
            "000000000000000000000000",
            1U },
          { "0000000000000000000000000000000000000000000000000000000000000001",
            "000000000000000000000000",
            1U },
          { "00ff000000000000000000000000000000000000000000000000000000000000",
            "000000000000000000000000",
            2U },
          { "0000000000000000000000000000000000000000000000000000000000000000",
            "000000000000000000000002",
            0U },
          { "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "000000090000004a00000000",
            1U },
          { "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "000000090000004a00000000",
            0xffffffff }};
    unsigned char VAR_3[VAR_1];
    unsigned char VAR_4[VAR_0];
    unsigned char *VAR_5;
    unsigned char VAR_6[160];
    unsigned char VAR_7[160];
    char VAR_8[160 * 2 + 1];
    size_t VAR_9 = 0U;
    size_t VAR_10;

    FUNC_6(VAR_7, 0, sizeof VAR_7);
    do {
        FUNC_11((unsigned char *)VAR_3, sizeof VAR_3, VAR_2[VAR_9].key_hex,
                       FUNC_13(VAR_2[VAR_9].key_hex), ": ", ((void*)0), ((void*)0));
        FUNC_11(VAR_4, sizeof VAR_4, VAR_2[VAR_9].nonce_hex,
                       FUNC_13(VAR_2[VAR_9].nonce_hex), ": ", ((void*)0), ((void*)0));
        FUNC_6(VAR_6, 0, sizeof VAR_6);
        FUNC_4(VAR_6, VAR_6, sizeof VAR_6, VAR_4, VAR_2[VAR_9].ic, VAR_3);
        FUNC_9(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
        FUNC_7("[%s]\n", VAR_8);
        for (VAR_10 = 1U; VAR_10 < sizeof VAR_6; VAR_10++) {
            VAR_5 = (unsigned char *) FUNC_12(VAR_10);
            FUNC_4(VAR_5, VAR_6, VAR_10, VAR_4, VAR_2[VAR_9].ic, VAR_3);
            if (FUNC_5(VAR_5, VAR_7, VAR_10) != 0) {
                FUNC_7("Failed with length %lu\n", (unsigned long) VAR_10);
            }
            FUNC_10(VAR_5);
        }
    } while (++VAR_9 < (sizeof VAR_2) / (sizeof VAR_2[0]));
    FUNC_0(66 <= sizeof VAR_6);
    for (VAR_10 = 1U; VAR_10 < 66; VAR_10 += 3) {
        FUNC_6(VAR_6, (int) (VAR_10 & 0xff), sizeof VAR_6);
        FUNC_1(VAR_6, VAR_10, VAR_4, VAR_3);
        FUNC_9(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
        FUNC_7("[%s]\n", VAR_8);
    }
    FUNC_8(VAR_6, sizeof VAR_6);
    FUNC_2(VAR_6, sizeof VAR_6, VAR_4, VAR_3);
    FUNC_9(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_7("[%s]\n", VAR_8);

    FUNC_0(FUNC_2(VAR_6, 0U, VAR_4, VAR_3) == 0);
    FUNC_0(FUNC_3(VAR_6, VAR_6, 0U, VAR_4, VAR_3) == 0);
    FUNC_0(FUNC_3(VAR_6, VAR_6, 0U, VAR_4, VAR_3) == 0);
    FUNC_0(FUNC_4(VAR_6, VAR_6, 0U, VAR_4, 1U, VAR_3) == 0);

    FUNC_6(VAR_6, 0x42, sizeof VAR_6);
    FUNC_3(VAR_6, VAR_6, sizeof VAR_6, VAR_4, VAR_3);
    FUNC_9(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_7("[%s]\n", VAR_8);

    FUNC_4(VAR_6, VAR_6, sizeof VAR_6, VAR_4, 0U, VAR_3);
    FUNC_9(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_7("[%s]\n", VAR_8);

    FUNC_4(VAR_6, VAR_6, sizeof VAR_6, VAR_4, 1U, VAR_3);
    FUNC_9(VAR_8, sizeof VAR_8, VAR_6, sizeof VAR_6);
    FUNC_7("[%s]\n", VAR_8);
}
