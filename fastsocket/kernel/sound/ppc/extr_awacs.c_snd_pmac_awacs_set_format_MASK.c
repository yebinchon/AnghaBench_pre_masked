
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int* awacs_reg; int rate_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pmac*,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_pmac *VAR_1)
{
 VAR_1->awacs_reg[1] &= ~VAR_0;
 VAR_1->awacs_reg[1] |= VAR_1->rate_index << 3;
 FUNC_0(VAR_1, 1, VAR_1->awacs_reg[1]);
}
