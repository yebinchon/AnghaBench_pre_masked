
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_data8; int reg_regsel; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static inline void FUNC_3(struct snd_gus_card * VAR_0, unsigned char VAR_1)
{
 unsigned char VAR_2;

 FUNC_2(VAR_1 | 0x80, VAR_0->gf1.reg_regsel);
 FUNC_1();
 VAR_2 = FUNC_0(VAR_0->gf1.reg_data8);
 FUNC_1();
 FUNC_2(VAR_1, VAR_0->gf1.reg_regsel);
 FUNC_1();
 FUNC_2((VAR_2 | 0x03) & ~(0x80 | 0x20), VAR_0->gf1.reg_data8);
 FUNC_1();
}
