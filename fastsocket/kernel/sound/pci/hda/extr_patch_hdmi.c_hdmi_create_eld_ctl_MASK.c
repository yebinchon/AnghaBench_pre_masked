
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct snd_kcontrol {int private_value; TYPE_1__ id; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_4__ {struct snd_kcontrol* eld_ctl; int pin_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct hdmi_spec*,int) ;
 struct snd_kcontrol* FUNC_1 (int *,struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, int VAR_3,
   int VAR_4)
{
 struct snd_kcontrol *VAR_5;
 struct hdmi_spec *VAR_6 = VAR_2->spec;
 int VAR_7;

 VAR_5 = FUNC_1(&VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->private_value = VAR_3;
 VAR_5->id.device = VAR_4;

 VAR_7 = FUNC_2(VAR_2, FUNC_0(VAR_6, VAR_3)->pin_nid, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_6, VAR_3)->eld_ctl = VAR_5;
 return 0;
}
