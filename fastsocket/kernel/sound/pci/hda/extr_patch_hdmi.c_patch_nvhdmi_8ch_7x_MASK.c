
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_channels; } ;
struct hdmi_spec {int pcm_playback; TYPE_1__ multiout; } ;
struct TYPE_4__ {int init; } ;
struct hda_codec {TYPE_2__ patch_ops; struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 struct hdmi_spec *VAR_3;
 int VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3 = VAR_2->spec;
 VAR_3->multiout.max_channels = 8;
 VAR_3->pcm_playback = VAR_1;
 VAR_2->patch_ops.init = VAR_0;



 FUNC_0(VAR_2, 8);

 return 0;
}
