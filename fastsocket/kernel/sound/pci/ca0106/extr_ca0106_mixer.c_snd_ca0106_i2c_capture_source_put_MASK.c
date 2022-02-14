
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ca0106 {unsigned int i2c_capture_source; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ca0106*,unsigned int,int ) ;
 struct snd_ca0106* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ca0106 *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 int VAR_5 = 0;




 VAR_4 = VAR_2->value.enumerated.item[0] ;
 if (VAR_4 >= 4)
  return -VAR_0;
 VAR_5 = (VAR_3->i2c_capture_source != VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3, VAR_4, 0);
 }
        return VAR_5;
}
