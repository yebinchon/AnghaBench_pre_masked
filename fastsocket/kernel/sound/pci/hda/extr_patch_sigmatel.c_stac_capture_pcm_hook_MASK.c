
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int num_all_adcs; scalar_t__* all_adcs; } ;
struct sigmatel_spec {int active_adcs; TYPE_1__ gen; int powerdown_adcs; } ;
struct hda_pcm_stream {scalar_t__ nid; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_pcm_stream *VAR_3,
      struct hda_codec *VAR_4,
      struct snd_pcm_substream *VAR_5,
      int VAR_6)
{
 struct sigmatel_spec *VAR_7 = VAR_4->spec;
 int VAR_8, VAR_9 = 0;

 if (!VAR_7->powerdown_adcs)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_7->gen.num_all_adcs; VAR_8++) {
  if (VAR_7->gen.all_adcs[VAR_8] == VAR_3->nid) {
   VAR_9 = VAR_8;
   break;
  }
 }

 switch (VAR_6) {
 case 128:
  FUNC_0(40);
  FUNC_1(VAR_4, VAR_3->nid, 0,
        VAR_2, VAR_0);
  VAR_7->active_adcs |= (1 << VAR_9);
  break;
 case 129:
  FUNC_1(VAR_4, VAR_3->nid, 0,
        VAR_2, VAR_1);
  VAR_7->active_adcs &= ~(1 << VAR_9);
  break;
 }
}
