
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef scalar_t__ UWORD ;
typedef scalar_t__ UINT8 ;



__attribute__((used)) static void FUNC_0(UINT8 *VAR_0, int VAR_1)
{

    if (VAR_1 >= (int)sizeof(UWORD)) {
        while ((ptrdiff_t)VAR_0 % sizeof(UWORD)) {
            *VAR_0 = 0;
            VAR_1--;
            VAR_0++;
        }
        while (VAR_1 >= (int)sizeof(UWORD)) {
            *(UWORD *)VAR_0 = 0;
            VAR_1 -= sizeof(UWORD);
            VAR_0 += sizeof(UWORD);
        }
    }
    while (VAR_1) {
        *VAR_0 = 0;
        VAR_1--;
        VAR_0++;
    }
}
