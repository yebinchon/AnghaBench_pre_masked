
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct snd_emu10k1_fx8010_ctl* p; } ;
struct snd_kcontrol {TYPE_1__ tlv; scalar_t__ private_value; } ;
struct snd_emu10k1_fx8010_ctl {int list; } ;


 int FUNC_0 (struct snd_emu10k1_fx8010_ctl*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_kcontrol *VAR_0)
{
 struct snd_emu10k1_fx8010_ctl *VAR_1;

 VAR_1 = (struct snd_emu10k1_fx8010_ctl *) VAR_0->private_value;
 VAR_0->private_value = 0;
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
 if (VAR_0->tlv.p)
  FUNC_0(VAR_0->tlv.p);
}
