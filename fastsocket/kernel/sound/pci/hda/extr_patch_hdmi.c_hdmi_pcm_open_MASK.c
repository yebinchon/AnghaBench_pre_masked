
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rates; int formats; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct hdmi_eld {int info; scalar_t__ eld_valid; } ;
struct hdmi_spec_per_pin {int pin_nid; struct hdmi_eld sink_eld; } ;
struct hdmi_spec_per_cvt {int assigned; int maxbps; int formats; int rates; int channels_max; int channels_min; int cvt_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_pcm_stream {int rates; int formats; int channels_max; int channels_min; int nid; int maxbps; } ;
struct hda_codec {int vendor_id; struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*,int,int*,int*) ;
 int FUNC_4 (struct hdmi_spec*,struct hda_pcm_stream*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_7 (struct hda_codec*,int,int ) ;
 int FUNC_8 (struct hda_codec*,int) ;
 int FUNC_9 (int *,struct hda_pcm_stream*) ;
 int FUNC_10 (struct snd_pcm_runtime*,int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct hda_pcm_stream *VAR_5,
    struct hda_codec *VAR_6,
    struct snd_pcm_substream *VAR_7)
{
 struct hdmi_spec *VAR_8 = VAR_6->spec;
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 int VAR_10, VAR_11, VAR_12 = 0;
 struct hdmi_spec_per_pin *VAR_13;
 struct hdmi_eld *VAR_14;
 struct hdmi_spec_per_cvt *VAR_15 = ((void*)0);
 int VAR_16;


 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if (FUNC_5(VAR_10 < 0))
  return -VAR_1;
 VAR_13 = FUNC_1(VAR_8, VAR_10);
 VAR_14 = &VAR_13->sink_eld;

 VAR_16 = FUNC_3(VAR_6, VAR_10, &VAR_11, &VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15 = FUNC_0(VAR_8, VAR_11);

 VAR_15->assigned = 1;
 VAR_5->nid = VAR_15->cvt_nid;

 FUNC_6(VAR_6, VAR_13->pin_nid, 0,
       VAR_0,
       VAR_12);


 if (VAR_6->vendor_id == 0x80862807)
  FUNC_2(VAR_6, VAR_10, VAR_12);

 FUNC_7(VAR_6, VAR_10, VAR_15->cvt_nid);


 VAR_5->channels_min = VAR_15->channels_min;
 VAR_5->channels_max = VAR_15->channels_max;
 VAR_5->rates = VAR_15->rates;
 VAR_5->formats = VAR_15->formats;
 VAR_5->maxbps = VAR_15->maxbps;


 if (!VAR_4 && VAR_14->eld_valid) {
  FUNC_9(&VAR_14->info, VAR_5);
  if (VAR_5->channels_min > VAR_5->channels_max ||
      !VAR_5->rates || !VAR_5->formats) {
   VAR_15->assigned = 0;
   VAR_5->nid = 0;
   FUNC_8(VAR_6, VAR_10);
   return -VAR_2;
  }
 }


 VAR_9->hw.channels_min = VAR_5->channels_min;
 VAR_9->hw.channels_max = VAR_5->channels_max;
 VAR_9->hw.formats = VAR_5->formats;
 VAR_9->hw.rates = VAR_5->rates;

 FUNC_10(VAR_7->runtime, 0,
       VAR_3, 2);
 return 0;
}
