
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
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct ews_spec {int * i2cdevs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_kcontrol*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ) ;
 struct snd_ice1712* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_6(VAR_2);
 struct ews_spec *VAR_5 = VAR_4->spec;
 int VAR_6 = FUNC_1(VAR_2, &VAR_3->id);
 unsigned char VAR_7, VAR_8;

 if (FUNC_0(VAR_6 < 0 || VAR_6 > 7))
  return 0;
 FUNC_2(VAR_4->i2c);
 if (FUNC_3(VAR_5->i2cdevs[VAR_1], &VAR_7, 1) != 1) {
  FUNC_5(VAR_4->i2c);
  return -VAR_0;
 }
 VAR_8 = (VAR_7 & ~(1 << VAR_6)) | (VAR_3->value.enumerated.item[0] ? 0 : (1 << VAR_6));
 if (VAR_8 != VAR_7 && FUNC_4(VAR_5->i2cdevs[VAR_1],
            &VAR_8, 1) != 1) {
  FUNC_5(VAR_4->i2c);
  return -VAR_0;
 }
 FUNC_5(VAR_4->i2c);
 return VAR_8 != VAR_7;
}
