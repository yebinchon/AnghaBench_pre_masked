
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {scalar_t__ ss_channels; int hw_rev; struct snd_kcontrol* spdif_ctl; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct snd_rme9652*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_4, struct snd_rme9652 *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 struct snd_kcontrol *VAR_8;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if ((VAR_7 = FUNC_1(VAR_4, VAR_8 = FUNC_2(&VAR_3[VAR_6], VAR_5))) < 0)
   return VAR_7;
  if (VAR_6 == 1)
   VAR_5->spdif_ctl = VAR_8;
 }

 if (VAR_5->ss_channels == VAR_0)
  if ((VAR_7 = FUNC_1(VAR_4, VAR_8 = FUNC_2(&VAR_2, VAR_5))) < 0)
   return VAR_7;

 if (VAR_5->hw_rev >= 15)
  if ((VAR_7 = FUNC_1(VAR_4, VAR_8 = FUNC_2(&VAR_1, VAR_5))) < 0)
   return VAR_7;

 return 0;
}
