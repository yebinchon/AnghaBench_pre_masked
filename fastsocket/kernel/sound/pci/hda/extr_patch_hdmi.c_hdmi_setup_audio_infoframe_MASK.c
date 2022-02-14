
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dp_audio_infoframe {int type; int len; int ver; int CC02_CT47; int CA; } ;
struct hdmi_audio_infoframe {int type; int ver; int len; int CC02_CT47; int CA; } ;
union audio_infoframe {int bytes; struct dp_audio_infoframe dp; struct hdmi_audio_infoframe hdmi; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_4__ {int conn_type; } ;
struct hdmi_eld {TYPE_2__ info; int monitor_present; } ;
struct hdmi_spec_per_pin {int non_pcm; struct hdmi_eld sink_eld; int pin_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;
typedef int ai ;
struct TYPE_3__ {int channels; } ;


 struct hdmi_spec_per_pin* FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (struct hdmi_eld*,int) ;
 int FUNC_2 (struct hdmi_audio_infoframe*) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,int ,int,int) ;
 int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (struct hda_codec*,int ) ;
 int FUNC_8 (union audio_infoframe*,int ,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct hda_codec *VAR_0, int VAR_1,
           bool VAR_2,
           struct snd_pcm_substream *VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_0->spec;
 struct hdmi_spec_per_pin *VAR_5 = FUNC_0(VAR_4, VAR_1);
 hda_nid_t VAR_6 = VAR_5->pin_nid;
 int VAR_7 = VAR_3->runtime->channels;
 struct hdmi_eld *VAR_8;
 int VAR_9;
 union audio_infoframe VAR_10;

 VAR_8 = &VAR_5->sink_eld;
 if (!VAR_8->monitor_present)
  return;

 VAR_9 = FUNC_1(VAR_8, VAR_7);

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 if (VAR_8->info.conn_type == 0) {
  struct hdmi_audio_infoframe *VAR_11 = &VAR_10.hdmi;

  VAR_11->type = 0x84;
  VAR_11->ver = 0x01;
  VAR_11->len = 0x0a;
  VAR_11->CC02_CT47 = VAR_7 - 1;
  VAR_11->CA = VAR_9;
  FUNC_2(VAR_11);
 } else if (VAR_8->info.conn_type == 1) {
  struct dp_audio_infoframe *VAR_12 = &VAR_10.dp;

  VAR_12->type = 0x84;
  VAR_12->len = 0x1b;
  VAR_12->ver = 0x11 << 2;
  VAR_12->CC02_CT47 = VAR_7 - 1;
  VAR_12->CA = VAR_9;
 } else {
  FUNC_9("HDMI: unknown connection type at pin %d\n",
       VAR_6);
  return;
 }






 if (!FUNC_4(VAR_0, VAR_6, VAR_10.bytes,
     sizeof(VAR_10))) {
  FUNC_10("hdmi_setup_audio_infoframe: "
       "pin=%d channels=%d\n",
       VAR_6,
       VAR_7);
  FUNC_5(VAR_0, VAR_6, VAR_2, VAR_9);
  FUNC_7(VAR_0, VAR_6);
  FUNC_3(VAR_0, VAR_6,
         VAR_10.bytes, sizeof(VAR_10));
  FUNC_6(VAR_0, VAR_6);
 } else {


  if (VAR_5->non_pcm != VAR_2)
   FUNC_5(VAR_0, VAR_6, VAR_2, VAR_9);
 }

 VAR_5->non_pcm = VAR_2;
}
