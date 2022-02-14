
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_cvt {int cvt_nid; } ;
struct hda_pcm_stream {int channels_max; int nid; } ;
struct hdmi_spec {struct hda_pcm_stream pcm_playback; int pcm_rec; } ;
struct hda_pcm {struct hda_pcm_stream* stream; int pcm_type; int name; } ;
struct hda_codec {int num_pcms; struct hda_pcm* pcm_info; struct hdmi_spec* spec; } ;
struct TYPE_2__ {int pcm_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int ) ;
 TYPE_1__* FUNC_1 (struct hdmi_spec*,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 struct hda_pcm* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_3->spec;
 struct hda_pcm *VAR_5;
 unsigned int VAR_6;
 struct hda_pcm_stream *VAR_7;
 struct hdmi_spec_per_cvt *VAR_8;

 VAR_8 = FUNC_0(VAR_4, 0);
 VAR_6 = FUNC_2(VAR_3, VAR_8->cvt_nid);
 VAR_6 = FUNC_3(VAR_6);

 VAR_5 = FUNC_4(&VAR_4->pcm_rec);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->name = FUNC_1(VAR_4, 0)->pcm_name;
 FUNC_5(VAR_5->name, "HDMI 0");
 VAR_5->pcm_type = VAR_1;
 VAR_7 = &VAR_5->stream[VAR_2];
 *VAR_7 = VAR_4->pcm_playback;
 VAR_7->nid = VAR_8->cvt_nid;
 if (VAR_7->channels_max <= 2 && VAR_6 && VAR_6 <= 16)
  VAR_7->channels_max = VAR_6;

 VAR_3->num_pcms = 1;
 VAR_3->pcm_info = VAR_5;

 return 0;
}
