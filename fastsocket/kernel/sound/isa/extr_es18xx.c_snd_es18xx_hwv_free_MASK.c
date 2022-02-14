
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_es18xx {int * hw_switch; int * hw_volume; int * master_switch; int * master_volume; } ;


 struct snd_es18xx* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static void FUNC_1(struct snd_kcontrol *VAR_0)
{
 struct snd_es18xx *VAR_1 = FUNC_0(VAR_0);
 VAR_1->master_volume = ((void*)0);
 VAR_1->master_switch = ((void*)0);
 VAR_1->hw_volume = ((void*)0);
 VAR_1->hw_switch = ((void*)0);
}
