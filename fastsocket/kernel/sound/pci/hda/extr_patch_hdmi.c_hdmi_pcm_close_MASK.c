
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdmi_spec_per_pin {int dummy; } ;
struct hdmi_spec_per_cvt {scalar_t__ assigned; } ;
struct hdmi_spec {int dummy; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdmi_spec*,int ) ;
 struct hdmi_spec_per_cvt* FUNC_1 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hdmi_spec*,struct hda_pcm_stream*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct hda_codec*,int) ;

__attribute__((used)) static int FUNC_6(struct hda_pcm_stream *VAR_1,
     struct hda_codec *VAR_2,
     struct snd_pcm_substream *VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_2->spec;
 int VAR_5, VAR_6;
 struct hdmi_spec_per_cvt *VAR_7;
 struct hdmi_spec_per_pin *VAR_8;

 if (VAR_1->nid) {
  VAR_5 = FUNC_0(VAR_4, VAR_1->nid);
  if (FUNC_4(VAR_5 < 0))
   return -VAR_0;
  VAR_7 = FUNC_1(VAR_4, VAR_5);

  FUNC_4(!VAR_7->assigned);
  VAR_7->assigned = 0;
  VAR_1->nid = 0;

  VAR_6 = FUNC_3(VAR_4, VAR_1);
  if (FUNC_4(VAR_6 < 0))
   return -VAR_0;
  VAR_8 = FUNC_2(VAR_4, VAR_6);

  FUNC_5(VAR_2, VAR_6);
 }
 return 0;
}
