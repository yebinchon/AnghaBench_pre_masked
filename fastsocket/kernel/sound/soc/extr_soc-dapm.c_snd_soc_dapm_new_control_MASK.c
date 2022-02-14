
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int connected; int list; int sinks; int sources; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dapm_widgets; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_soc_dapm_widget const*) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct snd_soc_codec *VAR_1,
 const struct snd_soc_dapm_widget *VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
  return -VAR_0;

 VAR_3->codec = VAR_1;
 FUNC_0(&VAR_3->sources);
 FUNC_0(&VAR_3->sinks);
 FUNC_0(&VAR_3->list);
 FUNC_2(&VAR_3->list, &VAR_1->dapm_widgets);


 VAR_3->connected = 1;
 return 0;
}
