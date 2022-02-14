
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {size_t items; size_t item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct echoaudio {size_t num_clock_sources; size_t* clock_source_list; } ;


 int VAR_0 ;
 struct echoaudio* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_info *VAR_2)
{
 static char *VAR_3[8] = {
  "Internal", "Word", "Super", "S/PDIF", "ADAT", "ESync",
  "ESync96", "MTC"
 };
 struct echoaudio *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_2->type = VAR_0;
 VAR_2->value.enumerated.items = VAR_4->num_clock_sources;
 VAR_2->count = 1;
 if (VAR_2->value.enumerated.item >= VAR_4->num_clock_sources)
  VAR_2->value.enumerated.item = VAR_4->num_clock_sources - 1;
 FUNC_1(VAR_2->value.enumerated.name, VAR_3[
   VAR_4->clock_source_list[VAR_2->value.enumerated.item]]);
 return 0;
}
