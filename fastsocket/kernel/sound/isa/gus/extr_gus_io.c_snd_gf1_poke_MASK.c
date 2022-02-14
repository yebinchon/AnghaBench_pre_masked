
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_dram; int reg_data8; int reg_regsel; int reg_data16; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned short,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct snd_gus_card * VAR_2, unsigned int VAR_3, unsigned char VAR_4)
{
 unsigned long VAR_5;

 FUNC_3(&VAR_2->reg_lock, VAR_5);
 FUNC_1(VAR_1, VAR_2->gf1.reg_regsel);
 FUNC_0();
 FUNC_2((unsigned short) VAR_3, VAR_2->gf1.reg_data16);
 FUNC_0();
 FUNC_1(VAR_0, VAR_2->gf1.reg_regsel);
 FUNC_0();
 FUNC_1((unsigned char) (VAR_3 >> 16), VAR_2->gf1.reg_data8);
 FUNC_0();
 FUNC_1(VAR_4, VAR_2->gf1.reg_dram);
 FUNC_4(&VAR_2->reg_lock, VAR_5);
}
