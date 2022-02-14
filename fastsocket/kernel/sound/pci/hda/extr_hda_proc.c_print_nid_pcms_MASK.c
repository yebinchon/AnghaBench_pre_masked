
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_buffer {int dummy; } ;
struct hda_pcm {size_t pcm_type; TYPE_2__* pcm; int name; TYPE_1__* stream; } ;
struct hda_codec {int num_pcms; struct hda_pcm* pcm_info; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {scalar_t__ nid; } ;


 int * VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_info_buffer *VAR_1,
      struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 int VAR_4, VAR_5;
 struct hda_pcm *VAR_6;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_pcms; VAR_4++) {
  VAR_6 = &VAR_2->pcm_info[VAR_4];
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   if (VAR_6->stream[VAR_5].nid != VAR_3 || VAR_6->pcm == ((void*)0))
    continue;
   FUNC_0(VAR_1, "  Device: name=\"%s\", "
        "type=\"%s\", device=%i\n",
        VAR_6->name,
        VAR_0[VAR_6->pcm_type],
        VAR_6->pcm->device);
  }
 }
}
