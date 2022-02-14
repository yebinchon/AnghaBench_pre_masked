
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct dtsec_regs {int macstnaddr2; int macstnaddr1; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dtsec_regs *VAR_0, uint8_t *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = FUNC_0(&VAR_0->macstnaddr1);
 VAR_3 = FUNC_0(&VAR_0->macstnaddr2);

 VAR_1[0] = (uint8_t)((VAR_3 & 0x00ff0000) >> 16);
 VAR_1[1] = (uint8_t)((VAR_3 & 0xff000000) >> 24);
 VAR_1[2] = (uint8_t)(VAR_2 & 0x000000ff);
 VAR_1[3] = (uint8_t)((VAR_2 & 0x0000ff00) >> 8);
 VAR_1[4] = (uint8_t)((VAR_2 & 0x00ff0000) >> 16);
 VAR_1[5] = (uint8_t)((VAR_2 & 0xff000000) >> 24);
}
