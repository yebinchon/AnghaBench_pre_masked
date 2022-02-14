
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {unsigned int on_val; unsigned int off_val; int reg; int mask; int shift; int codec; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,unsigned int) ;

int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_0(VAR_2))
  VAR_3 = VAR_0->on_val;
 else
  VAR_3 = VAR_0->off_val;

 FUNC_1(VAR_0->codec, -(VAR_0->reg + 1),
       VAR_0->mask << VAR_0->shift, VAR_3 << VAR_0->shift);

 return 0;
}
