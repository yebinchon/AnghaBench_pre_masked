
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_data16; int reg_regsel; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned short,int ) ;

__attribute__((used)) static inline void FUNC_3(struct snd_gus_card * VAR_0,
         unsigned char VAR_1, unsigned int VAR_2)
{
 FUNC_1(VAR_1, VAR_0->gf1.reg_regsel);
 FUNC_0();
 FUNC_2((unsigned short) VAR_2, VAR_0->gf1.reg_data16);
 FUNC_0();
}
