
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {scalar_t__ model; int * awacs_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pmac*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pmac *VAR_1)
{
 FUNC_0(VAR_1, 0, VAR_1->awacs_reg[0]);
 FUNC_0(VAR_1, 1, VAR_1->awacs_reg[1]);
 FUNC_0(VAR_1, 2, VAR_1->awacs_reg[2]);
 FUNC_0(VAR_1, 4, VAR_1->awacs_reg[4]);
 if (VAR_1->model == VAR_0) {
  FUNC_0(VAR_1, 5, VAR_1->awacs_reg[5]);
  FUNC_0(VAR_1, 6, VAR_1->awacs_reg[6]);
  FUNC_0(VAR_1, 7, VAR_1->awacs_reg[7]);
 }
}
