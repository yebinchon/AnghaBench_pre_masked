
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_data8; int reg_regsel; int reg_data16; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned short,int ) ;

void FUNC_3(struct snd_gus_card * VAR_0, unsigned int VAR_1)
{
 FUNC_1(0x43, VAR_0->gf1.reg_regsel);
 FUNC_0();
 FUNC_2((unsigned short) VAR_1, VAR_0->gf1.reg_data16);
 FUNC_0();
 FUNC_1(0x44, VAR_0->gf1.reg_regsel);
 FUNC_0();
 FUNC_1((unsigned char) (VAR_1 >> 16), VAR_0->gf1.reg_data8);
 FUNC_0();
}
