
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soundfont {struct snd_soundfont* next; struct snd_soundfont* samples; struct snd_soundfont* zones; } ;
struct snd_sf_zone {struct snd_sf_zone* next; struct snd_sf_zone* samples; struct snd_sf_zone* zones; } ;
struct snd_sf_sample {struct snd_sf_sample* next; struct snd_sf_sample* samples; struct snd_sf_sample* zones; } ;
struct TYPE_2__ {int private_data; int (* sample_free ) (int ,struct snd_soundfont*,int ) ;} ;
struct snd_sf_list {int memhdr; TYPE_1__ callback; struct snd_soundfont* fonts; } ;


 int FUNC_0 (struct snd_soundfont*) ;
 int FUNC_1 (struct snd_sf_list*) ;
 int FUNC_2 (int ,struct snd_soundfont*,int ) ;

__attribute__((used)) static void
FUNC_3(struct snd_sf_list *VAR_0)
{
 struct snd_soundfont *VAR_1, *VAR_2;
 struct snd_sf_zone *VAR_3, *VAR_4;
 struct snd_sf_sample *VAR_5, *VAR_6;

 for (VAR_1 = VAR_0->fonts; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  for (VAR_3 = VAR_1->zones; VAR_3; VAR_3 = VAR_4) {
   VAR_4 = VAR_3->next;
   FUNC_0(VAR_3);
  }
  for (VAR_5 = VAR_1->samples; VAR_5; VAR_5 = VAR_6) {
   VAR_6 = VAR_5->next;
   if (VAR_0->callback.sample_free)
    VAR_0->callback.sample_free(VAR_0->callback.private_data,
            VAR_5, VAR_0->memhdr);
   FUNC_0(VAR_5);
  }
  FUNC_0(VAR_1);
 }

 FUNC_1(VAR_0);
}
