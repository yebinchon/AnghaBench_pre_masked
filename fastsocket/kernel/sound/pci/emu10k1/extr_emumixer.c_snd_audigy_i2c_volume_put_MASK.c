
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; } ;
struct snd_emu10k1 {unsigned int** i2c_capture_volume; unsigned int i2c_capture_source; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
typedef int ngain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct snd_emu10k1 *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_3->private_value;


 if (VAR_8 >= 2)
  return -VAR_2;
 VAR_6 = VAR_5->i2c_capture_volume[VAR_8][0];
 VAR_7 = VAR_4->value.integer.value[0];
 if (VAR_7 > 0xff)
  return 0;
 if (VAR_6 != VAR_7) {
  if (VAR_5->i2c_capture_source == VAR_8)
   FUNC_0(VAR_5, VAR_0, ((VAR_7) & 0xff) );
  VAR_5->i2c_capture_volume[VAR_8][0] = VAR_7;
  VAR_9 = 1;
 }
 VAR_6 = VAR_5->i2c_capture_volume[VAR_8][1];
 VAR_7 = VAR_4->value.integer.value[1];
 if (VAR_7 > 0xff)
  return 0;
 if (VAR_6 != VAR_7) {
  if (VAR_5->i2c_capture_source == VAR_8)
   FUNC_0(VAR_5, VAR_1, ((VAR_7) & 0xff));
  VAR_5->i2c_capture_volume[VAR_8][1] = VAR_7;
  VAR_9 = 1;
 }

 return VAR_9;
}
