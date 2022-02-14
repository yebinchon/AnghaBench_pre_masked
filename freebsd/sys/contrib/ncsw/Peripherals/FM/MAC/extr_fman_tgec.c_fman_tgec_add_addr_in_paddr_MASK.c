
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct tgec_regs {int mac_addr_3; int mac_addr_2; } ;


 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct tgec_regs *VAR_0, uint8_t *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = (uint32_t)(VAR_1[0] |
   VAR_1[1] << 8 |
   VAR_1[2] << 16 |
   VAR_1[3] << 24);
 VAR_3 = (uint32_t)(VAR_1[4] | VAR_1[5] << 8);
 FUNC_0(VAR_2, &VAR_0->mac_addr_2);
 FUNC_0(VAR_3, &VAR_0->mac_addr_3);
}
