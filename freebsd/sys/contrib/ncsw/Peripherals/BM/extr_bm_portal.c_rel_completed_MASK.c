
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int rcrCons; int p_BmPortalLow; } ;
typedef TYPE_1__ t_BmPortal ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(t_BmPortal *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3 = VAR_1->rcrCons;
    if (VAR_2 & 0xc0000000) {
        VAR_2 &= 0x7fffffff;
        VAR_3 ^= 0x80000000;
    }
    if (VAR_3 >= VAR_2)
        return 1;
    if ((VAR_2 - VAR_3) > VAR_0)
        return 1;
    if (!FUNC_0(VAR_1->p_BmPortalLow))

        return 1;
    FUNC_1(VAR_1, 0);
    return 0;
}
