
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {struct snd_gus_card* private_data; } ;
struct TYPE_2__ {int * timer2; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;



__attribute__((used)) static void FUNC_0(struct snd_timer *VAR_0)
{
 struct snd_gus_card *VAR_1 = VAR_0->private_data;
 VAR_1->gf1.timer2 = ((void*)0);
}
