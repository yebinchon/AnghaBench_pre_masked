
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char * const VAR_0)
{
    static const unsigned char VAR_1[32] =
      { 0xed, 0xd3, 0xf5, 0x5c, 0x1a, 0x63, 0x12, 0x58,
        0xd6, 0x9c, 0xf7, 0xa2, 0xde, 0xf9, 0xde, 0x14,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10 };
    unsigned char VAR_2 = 0U;
    unsigned int VAR_3;
    unsigned int VAR_4;

    for (VAR_3 = 0U; VAR_3 < 32U; VAR_3++) {
        VAR_4 = VAR_0[VAR_3] + VAR_1[VAR_3] + VAR_2;
        VAR_0[VAR_3] = (unsigned char) VAR_4;
        VAR_2 = (VAR_4 >> 8) & 1;
    }
}
