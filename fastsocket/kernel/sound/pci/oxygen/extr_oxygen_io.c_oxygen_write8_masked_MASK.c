
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* _8; } ;
struct oxygen {TYPE_1__ saved_registers; scalar_t__ addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct oxygen *VAR_0, unsigned int VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_0->addr + VAR_1);
 VAR_4 &= ~VAR_3;
 VAR_4 |= VAR_2 & VAR_3;
 FUNC_1(VAR_4, VAR_0->addr + VAR_1);
 VAR_0->saved_registers._8[VAR_1] = VAR_4;
}
