
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memac_regs {int ievent; } ;


 int FUNC_0 (int *) ;

uint32_t FUNC_1(struct memac_regs *VAR_0, uint32_t VAR_1)
{
    return FUNC_0(&VAR_0->ievent) & VAR_1;
}
