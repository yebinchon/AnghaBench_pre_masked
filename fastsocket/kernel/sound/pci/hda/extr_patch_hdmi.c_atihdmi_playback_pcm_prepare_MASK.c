
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct hdmi_spec_per_cvt {int cvt_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_pcm_stream*,struct hda_codec*,unsigned int,unsigned int,struct snd_pcm_substream*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hda_pcm_stream *VAR_2,
     struct hda_codec *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5,
     struct snd_pcm_substream *VAR_6)
{
 struct hdmi_spec *VAR_7 = VAR_3->spec;
 struct hdmi_spec_per_cvt *VAR_8 = FUNC_0(VAR_7, 0);
 int VAR_9 = VAR_6->runtime->channels;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_2(VAR_3, VAR_8->cvt_nid, 0,
       VAR_0, VAR_9 - 1);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  FUNC_2(VAR_3, VAR_8->cvt_nid, 0,
        VAR_1,
        (VAR_10 << 4) | VAR_10);
 }
 return 0;
}
