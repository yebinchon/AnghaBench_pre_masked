
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_mixer_control {unsigned int reg; unsigned int shift; int max; unsigned int invert; } ;
struct snd_soc_dapm_widget {int muted; int saved_value; int codec; scalar_t__ num_kcontrols; struct snd_kcontrol_new* kcontrols; } ;
struct snd_kcontrol_new {scalar_t__ private_value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0, int VAR_1)
{
 const struct snd_kcontrol_new *VAR_2 = VAR_0->kcontrols;

 if (VAR_0->muted && !VAR_1)
  return 0;
 if (!VAR_0->muted && VAR_1)
  return 0;

 if (VAR_0->num_kcontrols && VAR_2) {
  struct soc_mixer_control *VAR_3 =
   (struct soc_mixer_control *)VAR_2->private_value;
  unsigned int VAR_4 = VAR_3->reg;
  unsigned int VAR_5 = VAR_3->shift;
  int VAR_6 = VAR_3->max;
  unsigned int VAR_7 = (1 << FUNC_0(VAR_6)) - 1;
  unsigned int VAR_8 = VAR_3->invert;

  if (VAR_1) {
   int VAR_9;

   if (VAR_8) {
    for (VAR_9 = VAR_6; VAR_9 > VAR_0->saved_value; VAR_9--)
     FUNC_2(VAR_0->codec, VAR_4, VAR_7, VAR_9);
   } else {
    for (VAR_9 = 0; VAR_9 < VAR_0->saved_value; VAR_9++)
     FUNC_2(VAR_0->codec, VAR_4, VAR_7, VAR_9);
   }
   VAR_0->muted = 0;
  } else {

   int VAR_10 = FUNC_1(VAR_0->codec, VAR_4);
   int VAR_11 = VAR_0->saved_value = (VAR_10 >> VAR_5) & VAR_7;
   if (VAR_8) {
    for (; VAR_11 < VAR_7; VAR_11++)
     FUNC_2(VAR_0->codec, VAR_4, VAR_7, VAR_11);
   } else {
    for (; VAR_11 > 0; VAR_11--)
     FUNC_2(VAR_0->codec, VAR_4, VAR_7, VAR_11);
   }
   VAR_0->muted = 1;
  }
 }
 return 0;
}
