
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wm8776 {unsigned short* regs; int addr; } ;
struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int ,unsigned char,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0, struct snd_wm8776 *VAR_1,
    unsigned char VAR_2, unsigned short VAR_3)
{




 FUNC_0(VAR_0, VAR_1->addr,
        (VAR_2 << 1) | ((VAR_3 >> 8) & 1),
        VAR_3 & 0xff);
 VAR_1->regs[VAR_2] = VAR_3;
}
