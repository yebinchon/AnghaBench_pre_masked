
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_priv {int hsl_enabled; int hsr_enabled; } ;
struct snd_soc_dapm_widget {TYPE_1__* codec; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {struct twl4030_priv* private_data; } ;




 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_0,
  struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct twl4030_priv *VAR_3 = VAR_0->codec->private_data;

 switch (VAR_2) {
 case 128:

  if (!VAR_3->hsr_enabled)
   FUNC_0(VAR_0->codec, 1);

  VAR_3->hsl_enabled = 1;
  break;
 case 129:

  if (!VAR_3->hsr_enabled)
   FUNC_0(VAR_0->codec, 0);

  VAR_3->hsl_enabled = 0;
  break;
 }
 return 0;
}
