
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdmi_spec {int dummy; } ;
struct hdmi_eld {scalar_t__ eld_size; int lock; int eld_buffer; scalar_t__ eld_valid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_6__ {struct hdmi_eld sink_eld; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 struct hda_codec* FUNC_7 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_7(VAR_1);
 struct hdmi_spec *VAR_4 = VAR_3->spec;
 struct hdmi_eld *VAR_5;
 int VAR_6;

 VAR_6 = VAR_1->private_value;
 VAR_5 = &FUNC_1(VAR_4, VAR_6)->sink_eld;

 FUNC_4(&VAR_5->lock);
 if (VAR_5->eld_size > FUNC_0(VAR_2->value.bytes.data)) {
  FUNC_5(&VAR_5->lock);
  FUNC_6();
  return -VAR_0;
 }

 FUNC_3(VAR_2->value.bytes.data, 0,
        FUNC_0(VAR_2->value.bytes.data));
 if (VAR_5->eld_valid)
  FUNC_2(VAR_2->value.bytes.data, VAR_5->eld_buffer,
         VAR_5->eld_size);
 FUNC_5(&VAR_5->lock);

 return 0;
}
