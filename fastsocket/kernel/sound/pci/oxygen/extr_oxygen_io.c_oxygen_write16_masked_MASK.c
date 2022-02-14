
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int * _16; } ;
struct oxygen {TYPE_1__ saved_registers; scalar_t__ addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct oxygen *VAR_0, unsigned int VAR_1,
      u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4 = FUNC_1(VAR_0->addr + VAR_1);
 VAR_4 &= ~VAR_3;
 VAR_4 |= VAR_2 & VAR_3;
 FUNC_2(VAR_4, VAR_0->addr + VAR_1);
 VAR_0->saved_registers._16[VAR_1 / 2] = FUNC_0(VAR_4);
}
