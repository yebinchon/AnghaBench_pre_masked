
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned short) ;
 unsigned short FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_2(VAR_1);
 hda_nid_t VAR_4 = VAR_1->private_value;
 unsigned short VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4, 0, VAR_0, 0);
 VAR_6 = FUNC_0(VAR_5);
 VAR_2->value.iec958.status[0] = VAR_6;
 VAR_2->value.iec958.status[1] = VAR_6 >> 8;
 VAR_2->value.iec958.status[2] = VAR_6 >> 16;
 VAR_2->value.iec958.status[3] = VAR_6 >> 24;
 return 0;
}
