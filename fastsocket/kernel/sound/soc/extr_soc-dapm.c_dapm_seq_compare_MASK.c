
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {size_t id; scalar_t__ reg; } ;



__attribute__((used)) static int FUNC_0(struct snd_soc_dapm_widget *VAR_0,
       struct snd_soc_dapm_widget *VAR_1,
       int VAR_2[])
{
 if (VAR_2[VAR_0->id] != VAR_2[VAR_1->id])
  return VAR_2[VAR_0->id] - VAR_2[VAR_1->id];
 if (VAR_0->reg != VAR_1->reg)
  return VAR_0->reg - VAR_1->reg;

 return 0;
}
