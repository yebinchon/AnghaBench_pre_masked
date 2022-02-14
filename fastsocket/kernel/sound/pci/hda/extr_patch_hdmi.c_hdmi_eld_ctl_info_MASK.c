
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int count; int type; } ;
struct hdmi_spec {int dummy; } ;
struct hdmi_eld {int lock; int eld_size; scalar_t__ eld_valid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {struct hdmi_eld sink_eld; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_info *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_3(VAR_1);
 struct hdmi_spec *VAR_4 = VAR_3->spec;
 struct hdmi_eld *VAR_5;
 int VAR_6;

 VAR_2->type = VAR_0;

 VAR_6 = VAR_1->private_value;
 VAR_5 = &FUNC_0(VAR_4, VAR_6)->sink_eld;

 FUNC_1(&VAR_5->lock);
 VAR_2->count = VAR_5->eld_valid ? VAR_5->eld_size : 0;
 FUNC_2(&VAR_5->lock);

 return 0;
}
