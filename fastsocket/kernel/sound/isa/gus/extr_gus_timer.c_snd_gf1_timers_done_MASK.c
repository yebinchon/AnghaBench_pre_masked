
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * timer2; int * timer1; } ;
struct snd_gus_card {TYPE_1__ gf1; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct snd_gus_card*,int) ;

void FUNC_2(struct snd_gus_card * VAR_2)
{
 FUNC_1(VAR_2, VAR_0 | VAR_1);
 if (VAR_2->gf1.timer1) {
  FUNC_0(VAR_2->card, VAR_2->gf1.timer1);
  VAR_2->gf1.timer1 = ((void*)0);
 }
 if (VAR_2->gf1.timer2) {
  FUNC_0(VAR_2->card, VAR_2->gf1.timer2);
  VAR_2->gf1.timer2 = ((void*)0);
 }
}
