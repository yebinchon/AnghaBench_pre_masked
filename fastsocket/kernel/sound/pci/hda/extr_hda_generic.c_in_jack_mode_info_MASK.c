
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 size_t FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_info*,int ,int *) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_info *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_4(VAR_1);
 hda_nid_t VAR_4 = VAR_1->private_value;
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_4);

 FUNC_3(VAR_1, VAR_2, FUNC_2(VAR_5),
     VAR_0);

 FUNC_5(VAR_2->value.enumerated.name,
        VAR_0[FUNC_1(VAR_5, VAR_2->value.enumerated.item)]);
 return 0;
}
