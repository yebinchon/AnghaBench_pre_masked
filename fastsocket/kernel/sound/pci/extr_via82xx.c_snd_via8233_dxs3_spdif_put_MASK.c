
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct via82xx {int spdif_on; int pci; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 struct via82xx* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct via82xx *VAR_4 = FUNC_2(VAR_2);
 u8 VAR_5, VAR_6;

 FUNC_0(VAR_4->pci, VAR_0, &VAR_6);
 VAR_5 = VAR_6 & ~VAR_1;
 if (VAR_3->value.integer.value[0])
  VAR_5 |= VAR_1;

 VAR_4->spdif_on = VAR_3->value.integer.value[0] ? 1 : 0;
 if (VAR_5 != VAR_6) {
  FUNC_1(VAR_4->pci, VAR_0, VAR_5);
  return 1;
 }
 return 0;
}
