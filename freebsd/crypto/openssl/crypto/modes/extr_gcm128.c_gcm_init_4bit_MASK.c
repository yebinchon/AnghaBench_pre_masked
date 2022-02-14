
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_4__ {int hi; int lo; } ;
typedef TYPE_1__ u128 ;


 int FUNC_0 (TYPE_1__) ;

__attribute__((used)) static void FUNC_1(u128 VAR_0[16], u64 VAR_1[2])
{
    u128 VAR_2;




    VAR_0[0].hi = 0;
    VAR_0[0].lo = 0;
    VAR_2.hi = VAR_1[0];
    VAR_2.lo = VAR_1[1];
    VAR_0[8] = VAR_2;
    FUNC_0(VAR_2);
    VAR_0[4] = VAR_2;
    FUNC_0(VAR_2);
    VAR_0[2] = VAR_2;
    FUNC_0(VAR_2);
    VAR_0[1] = VAR_2;
    VAR_0[3].hi = VAR_2.hi ^ VAR_0[2].hi, VAR_0[3].lo = VAR_2.lo ^ VAR_0[2].lo;
    VAR_2 = VAR_0[4];
    VAR_0[5].hi = VAR_2.hi ^ VAR_0[1].hi, VAR_0[5].lo = VAR_2.lo ^ VAR_0[1].lo;
    VAR_0[6].hi = VAR_2.hi ^ VAR_0[2].hi, VAR_0[6].lo = VAR_2.lo ^ VAR_0[2].lo;
    VAR_0[7].hi = VAR_2.hi ^ VAR_0[3].hi, VAR_0[7].lo = VAR_2.lo ^ VAR_0[3].lo;
    VAR_2 = VAR_0[8];
    VAR_0[9].hi = VAR_2.hi ^ VAR_0[1].hi, VAR_0[9].lo = VAR_2.lo ^ VAR_0[1].lo;
    VAR_0[10].hi = VAR_2.hi ^ VAR_0[2].hi, VAR_0[10].lo = VAR_2.lo ^ VAR_0[2].lo;
    VAR_0[11].hi = VAR_2.hi ^ VAR_0[3].hi, VAR_0[11].lo = VAR_2.lo ^ VAR_0[3].lo;
    VAR_0[12].hi = VAR_2.hi ^ VAR_0[4].hi, VAR_0[12].lo = VAR_2.lo ^ VAR_0[4].lo;
    VAR_0[13].hi = VAR_2.hi ^ VAR_0[5].hi, VAR_0[13].lo = VAR_2.lo ^ VAR_0[5].lo;
    VAR_0[14].hi = VAR_2.hi ^ VAR_0[6].hi, VAR_0[14].lo = VAR_2.lo ^ VAR_0[6].lo;
    VAR_0[15].hi = VAR_2.hi ^ VAR_0[7].hi, VAR_0[15].lo = VAR_2.lo ^ VAR_0[7].lo;
}
