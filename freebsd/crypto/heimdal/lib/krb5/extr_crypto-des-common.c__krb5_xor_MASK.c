
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_cblock ;



void
FUNC_0 (DES_cblock *VAR_0, const unsigned char *VAR_1)
{
    unsigned char *VAR_2 = (unsigned char*)VAR_0;
    VAR_2[0] ^= VAR_1[0];
    VAR_2[1] ^= VAR_1[1];
    VAR_2[2] ^= VAR_1[2];
    VAR_2[3] ^= VAR_1[3];
    VAR_2[4] ^= VAR_1[4];
    VAR_2[5] ^= VAR_1[5];
    VAR_2[6] ^= VAR_1[6];
    VAR_2[7] ^= VAR_1[7];
}
