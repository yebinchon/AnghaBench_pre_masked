
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct snd_pcm_hw_constraint_list {int dummy; } ;
struct hdmi_spec {int multiout; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {TYPE_1__* preset; struct hdmi_spec* spec; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 struct snd_pcm_hw_constraint_list VAR_1 ;
 struct snd_pcm_hw_constraint_list VAR_2 ;
 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (int ,int ,int ,struct snd_pcm_hw_constraint_list*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hda_pcm_stream *VAR_3,
        struct hda_codec *VAR_4,
        struct snd_pcm_substream *VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_4->spec;
 struct snd_pcm_hw_constraint_list *VAR_7 = ((void*)0);

 switch (VAR_4->preset->id) {
 case 0x10de0002:
 case 0x10de0003:
 case 0x10de0005:
 case 0x10de0006:
  VAR_7 = &VAR_2;
  break;
 case 0x10de0007:
  VAR_7 = &VAR_1;
  break;
 default:
  break;
 }

 if (VAR_7 != ((void*)0)) {
  FUNC_1(VAR_5->runtime, 0,
    VAR_0,
    VAR_7);
 } else {
  FUNC_2(VAR_5->runtime, 0,
        VAR_0, 2);
 }

 return FUNC_0(VAR_4, &VAR_6->multiout);
}
