
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
typedef int* felem ;



__attribute__((used)) static void FUNC_0(felem VAR_0, const u8 VAR_1[28])
{
    VAR_0[0] = *((const uint64_t *)(VAR_1)) & 0x00ffffffffffffff;
    VAR_0[1] = (*((const uint64_t *)(VAR_1 + 7))) & 0x00ffffffffffffff;
    VAR_0[2] = (*((const uint64_t *)(VAR_1 + 14))) & 0x00ffffffffffffff;
    VAR_0[3] = (*((const uint64_t *)(VAR_1+20))) >> 8;
}
