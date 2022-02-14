
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soundfont {struct snd_sf_zone* zones; struct snd_soundfont* next; } ;
struct snd_sf_zone {int * sample; int v; int mapped; struct snd_sf_zone* next; } ;
struct snd_sf_list {struct snd_soundfont* fonts; int presets; } ;


 int FUNC_0 (struct snd_sf_list*,struct snd_sf_zone*) ;
 int FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (struct snd_soundfont*,int *) ;

__attribute__((used)) static void
FUNC_3(struct snd_sf_list *VAR_0)
{
 struct snd_soundfont *VAR_1;
 struct snd_sf_zone *VAR_2;


 FUNC_1(VAR_0->presets, 0, sizeof(VAR_0->presets));


 for (VAR_1 = VAR_0->fonts; VAR_1; VAR_1 = VAR_1->next) {
  for (VAR_2 = VAR_1->zones; VAR_2; VAR_2 = VAR_2->next) {
   if (! VAR_2->mapped && VAR_2->sample == ((void*)0)) {

    VAR_2->sample = FUNC_2(VAR_1, &VAR_2->v);
    if (VAR_2->sample == ((void*)0))
     continue;
   }

   FUNC_0(VAR_0, VAR_2);
  }
 }
}
