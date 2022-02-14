
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prepare; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct hdmi_spec {TYPE_2__ pcm_playback; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_3)
{
 struct hdmi_spec *VAR_4;
 int VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 = VAR_3->spec;
 VAR_4->pcm_playback.ops.prepare = VAR_2;
 return 0;
}
