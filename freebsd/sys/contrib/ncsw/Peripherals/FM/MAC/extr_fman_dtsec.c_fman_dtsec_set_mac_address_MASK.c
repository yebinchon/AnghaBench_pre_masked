
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct dtsec_regs {int macstnaddr2; int macstnaddr1; } ;


 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct dtsec_regs *VAR_0, uint8_t *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = (uint32_t)((VAR_1[5] << 24) |
    (VAR_1[4] << 16) |
    (VAR_1[3] << 8) |
     VAR_1[2]);
 FUNC_0(VAR_2, &VAR_0->macstnaddr1);

 VAR_2 = (uint32_t)((VAR_1[1] << 24) |
    (VAR_1[0] << 16));
 FUNC_0(VAR_2, &VAR_0->macstnaddr2);
}
