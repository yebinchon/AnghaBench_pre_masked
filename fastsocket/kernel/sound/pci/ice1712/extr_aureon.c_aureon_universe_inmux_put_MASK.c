
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {struct aureon_spec* spec; } ;
struct TYPE_3__ {unsigned char* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aureon_spec {unsigned char pca9554_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_3(VAR_2);
 struct aureon_spec *VAR_5 = VAR_4->spec;
 unsigned char VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = VAR_3->value.enumerated.item[0];
 if (VAR_7 >= 3)
  return -VAR_0;
 FUNC_2(VAR_4);
 VAR_6 = VAR_5->pca9554_out;
 VAR_8 = (VAR_6 != VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_4, VAR_1, VAR_7);
  VAR_5->pca9554_out = VAR_7;
 }
 FUNC_1(VAR_4);
 return VAR_8;
}
