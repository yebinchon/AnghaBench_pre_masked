
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soundfont {struct snd_sf_zone* samples; struct snd_sf_zone* zones; struct snd_soundfont* next; } ;
struct TYPE_3__ {scalar_t__ truesize; } ;
struct snd_sf_zone {scalar_t__ counter; TYPE_1__ v; struct snd_sf_zone* next; } ;
struct snd_sf_sample {scalar_t__ counter; TYPE_1__ v; struct snd_sf_sample* next; } ;
struct TYPE_4__ {int private_data; int (* sample_free ) (int ,struct snd_sf_zone*,int ) ;int (* sample_reset ) (int ) ;} ;
struct snd_sf_list {scalar_t__ zone_locked; scalar_t__ sample_locked; scalar_t__ zone_counter; scalar_t__ sample_counter; int memhdr; TYPE_2__ callback; int mem_used; struct snd_soundfont* fonts; int presets; } ;


 int FUNC_0 (struct snd_sf_zone*) ;
 int FUNC_1 (struct snd_sf_list*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct snd_sf_list*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct snd_sf_zone*,int ) ;
 int FUNC_6 (struct snd_sf_list*) ;

int
FUNC_7(struct snd_sf_list *VAR_0)
{
 struct snd_soundfont *VAR_1;
 struct snd_sf_zone *VAR_2, *VAR_3;
 struct snd_sf_sample *VAR_4, *VAR_5;

 FUNC_1(VAR_0);

 if (VAR_0->callback.sample_reset)
  VAR_0->callback.sample_reset(VAR_0->callback.private_data);


 FUNC_2(VAR_0->presets, 0, sizeof(VAR_0->presets));

 for (VAR_1 = VAR_0->fonts; VAR_1; VAR_1 = VAR_1->next) {
  for (VAR_2 = VAR_1->zones; VAR_2; VAR_2 = VAR_3) {
   if (VAR_2->counter < VAR_0->zone_locked)
    break;
   VAR_3 = VAR_2->next;
   VAR_1->zones = VAR_3;
   FUNC_0(VAR_2);
  }

  for (VAR_4 = VAR_1->samples; VAR_4; VAR_4 = VAR_5) {
   if (VAR_4->counter < VAR_0->sample_locked)
    break;
   VAR_5 = VAR_4->next;
   VAR_1->samples = VAR_5;
   VAR_0->mem_used -= VAR_4->v.truesize;
   if (VAR_0->callback.sample_free)
    VAR_0->callback.sample_free(VAR_0->callback.private_data,
            VAR_4, VAR_0->memhdr);
   FUNC_0(VAR_4);
  }
 }

 VAR_0->zone_counter = VAR_0->zone_locked;
 VAR_0->sample_counter = VAR_0->sample_locked;

 FUNC_3(VAR_0);

 FUNC_6(VAR_0);
 return 0;
}
