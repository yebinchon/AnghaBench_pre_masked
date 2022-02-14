
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int i2c; struct ews_spec* spec; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ews_spec {int * i2cdevs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_4(VAR_3);
 struct ews_spec *VAR_6 = VAR_5->spec;
 unsigned char VAR_7, VAR_8;

 FUNC_0(VAR_5->i2c);
 if (FUNC_1(VAR_6->i2cdevs[VAR_1], &VAR_7, 1) != 1) {
  FUNC_3(VAR_5->i2c);
  return -VAR_0;
 }
 VAR_8 = (VAR_7 & ~VAR_2) | (VAR_4->value.enumerated.item[0] ? VAR_2 : 0);
 if (VAR_8 != VAR_7 && FUNC_2(VAR_6->i2cdevs[VAR_1],
            &VAR_8, 1) != 1) {
  FUNC_3(VAR_5->i2c);
  return -VAR_0;
 }
 FUNC_3(VAR_5->i2c);
 return VAR_8 != VAR_7;
}
