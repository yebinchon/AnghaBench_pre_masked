
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct oxygen {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1, unsigned int VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 u8 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = (VAR_1->private_value >> 8) & 0xf;
 VAR_5 = (VAR_1->private_value >> 12) & 0xf;
 if (VAR_2 < VAR_4 || VAR_2 > VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_3->mutex);
 VAR_6 = VAR_2 != (VAR_1->private_value & 0xf);
 if (VAR_6) {
  VAR_1->private_value = (VAR_1->private_value & ~0xf) | VAR_2;
  FUNC_2(VAR_1);
 }
 FUNC_1(&VAR_3->mutex);
 return VAR_6;
}
