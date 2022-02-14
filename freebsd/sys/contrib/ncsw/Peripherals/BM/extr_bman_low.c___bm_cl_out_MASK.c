
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bm_addr {int addr_ce; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,uintptr_t) ;

__attribute__((used)) static __inline__ void FUNC_3(struct bm_addr *VAR_0, uintptr_t VAR_1, uint32_t VAR_2)
{
    uint32_t *VAR_3 = (uint32_t *)FUNC_2(VAR_0->addr_ce, VAR_1);
    FUNC_0(*VAR_3, VAR_2);
    FUNC_1(VAR_3);
}
