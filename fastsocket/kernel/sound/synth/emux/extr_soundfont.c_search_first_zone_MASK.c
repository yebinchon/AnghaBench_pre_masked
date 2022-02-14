
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sf_zone {int instr; int bank; struct snd_sf_zone* next_instr; } ;
struct snd_sf_list {struct snd_sf_zone** presets; } ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static struct snd_sf_zone *
FUNC_1(struct snd_sf_list *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 struct snd_sf_zone *VAR_5;

 if ((VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3)) < 0)
  return ((void*)0);
 for (VAR_5 = VAR_0->presets[VAR_4]; VAR_5; VAR_5 = VAR_5->next_instr) {
  if (VAR_5->instr == VAR_2 && VAR_5->bank == VAR_1)
   return VAR_5;
 }
 return ((void*)0);
}
