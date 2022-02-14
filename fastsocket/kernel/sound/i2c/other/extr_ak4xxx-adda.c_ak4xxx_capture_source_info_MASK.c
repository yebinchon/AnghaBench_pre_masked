
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct snd_akm4xxx {TYPE_1__* adc_info; } ;
struct TYPE_4__ {char** input_names; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_akm4xxx*,int) ;
 struct snd_akm4xxx* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_info *VAR_3)
{
 struct snd_akm4xxx *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = FUNC_0(VAR_2->private_value);
 const char **VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_7)
  return -VAR_0;
 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = VAR_7;
 VAR_8 = VAR_3->value.enumerated.item;
 if (VAR_8 >= VAR_7)
  return -VAR_0;
 VAR_6 = VAR_4->adc_info[VAR_5].input_names;
 FUNC_3(VAR_3->value.enumerated.name, VAR_6[VAR_8],
  sizeof(VAR_3->value.enumerated.name));
 return 0;
}
