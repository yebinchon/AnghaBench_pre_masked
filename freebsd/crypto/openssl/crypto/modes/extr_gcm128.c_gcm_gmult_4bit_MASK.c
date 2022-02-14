
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int hi; int lo; } ;
typedef TYPE_1__ u128 ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t*,scalar_t__) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(u64 VAR_1[2], const u128 VAR_2[16])
{
    u128 VAR_3;
    int VAR_4 = 15;
    size_t VAR_5, VAR_6, VAR_7;
    const union {
        long one;
        char little;
    } VAR_8 = { 1 };

    VAR_6 = ((const u8 *)VAR_1)[15];
    VAR_7 = VAR_6 >> 4;
    VAR_6 &= 0xf;

    VAR_3.hi = VAR_2[VAR_6].hi;
    VAR_3.lo = VAR_2[VAR_6].lo;

    while (1) {
        VAR_5 = (size_t)VAR_3.lo & 0xf;
        VAR_3.lo = (VAR_3.hi << 60) | (VAR_3.lo >> 4);
        VAR_3.hi = (VAR_3.hi >> 4);
        if (sizeof(size_t) == 8)
            VAR_3.hi ^= VAR_0[VAR_5];
        else
            VAR_3.hi ^= (u64)VAR_0[VAR_5] << 32;

        VAR_3.hi ^= VAR_2[VAR_7].hi;
        VAR_3.lo ^= VAR_2[VAR_7].lo;

        if (--VAR_4 < 0)
            break;

        VAR_6 = ((const u8 *)VAR_1)[VAR_4];
        VAR_7 = VAR_6 >> 4;
        VAR_6 &= 0xf;

        VAR_5 = (size_t)VAR_3.lo & 0xf;
        VAR_3.lo = (VAR_3.hi << 60) | (VAR_3.lo >> 4);
        VAR_3.hi = (VAR_3.hi >> 4);
        if (sizeof(size_t) == 8)
            VAR_3.hi ^= VAR_0[VAR_5];
        else
            VAR_3.hi ^= (u64)VAR_0[VAR_5] << 32;

        VAR_3.hi ^= VAR_2[VAR_6].hi;
        VAR_3.lo ^= VAR_2[VAR_6].lo;
    }

    if (VAR_8.little) {




        u8 *VAR_9 = (u8 *)VAR_1;
        u32 VAR_10;
        VAR_10 = (u32)(VAR_3.hi >> 32);
        FUNC_1(VAR_9, VAR_10);
        VAR_10 = (u32)(VAR_3.hi);
        FUNC_1(VAR_9 + 4, VAR_10);
        VAR_10 = (u32)(VAR_3.lo >> 32);
        FUNC_1(VAR_9 + 8, VAR_10);
        VAR_10 = (u32)(VAR_3.lo);
        FUNC_1(VAR_9 + 12, VAR_10);

    } else {
        VAR_1[0] = VAR_3.hi;
        VAR_1[1] = VAR_3.lo;
    }
}
