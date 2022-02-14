
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_pin {void* pin_nid; } ;
struct hdmi_spec_per_cvt {void* cvt_nid; } ;
struct TYPE_2__ {int max_channels; void* dig_out_nid; scalar_t__ num_dacs; } ;
struct hdmi_spec {int num_cvts; int num_pins; int pcm_playback; int cvts; int pins; TYPE_1__ multiout; } ;
struct hda_codec {int patch_ops; struct hdmi_spec* spec; } ;
typedef void* hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdmi_spec*,int) ;
 struct hdmi_spec* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct hda_codec*) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4,
        hda_nid_t VAR_5, hda_nid_t VAR_6)
{
 struct hdmi_spec *VAR_7;
 struct hdmi_spec_per_cvt *VAR_8;
 struct hdmi_spec_per_pin *VAR_9;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_4->spec = VAR_7;
 FUNC_0(VAR_7, 1);

 VAR_7->multiout.num_dacs = 0;
 VAR_7->multiout.max_channels = 2;
 VAR_7->multiout.dig_out_nid = VAR_5;
 VAR_7->num_cvts = 1;
 VAR_7->num_pins = 1;
 VAR_9 = FUNC_3(&VAR_7->pins);
 VAR_8 = FUNC_3(&VAR_7->cvts);
 if (!VAR_9 || !VAR_8) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }
 VAR_8->cvt_nid = VAR_5;
 VAR_9->pin_nid = VAR_6;
 VAR_7->pcm_playback = VAR_3;

 VAR_4->patch_ops = VAR_2;

 return 0;
}
