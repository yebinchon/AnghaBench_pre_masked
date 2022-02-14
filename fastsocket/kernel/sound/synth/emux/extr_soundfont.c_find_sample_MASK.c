
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soundfont {struct snd_sf_sample* samples; } ;
struct TYPE_2__ {int sample; } ;
struct snd_sf_sample {TYPE_1__ v; struct snd_sf_sample* next; } ;



__attribute__((used)) static struct snd_sf_sample *
FUNC_0(struct snd_soundfont *VAR_0, int VAR_1)
{
 struct snd_sf_sample *VAR_2;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 for (VAR_2 = VAR_0->samples; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->v.sample == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
