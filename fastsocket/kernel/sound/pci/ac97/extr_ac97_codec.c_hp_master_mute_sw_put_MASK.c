
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct snd_ac97 {unsigned short* regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_1 (struct snd_ac97*,int ,int,int) ;
 struct snd_ac97* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 > 0) {
  struct snd_ac97 *VAR_5 = FUNC_2(VAR_2);
  int VAR_6 = (VAR_2->private_value >> 8) & 0x0f;
  int VAR_7 = (VAR_2->private_value >> 12) & 0x0f;
  unsigned short VAR_8;
  if (VAR_6 != VAR_7)
   VAR_8 = 0x8080;
  else
   VAR_8 = 0x8000;
  FUNC_1(VAR_5, VAR_1, 0x8000,
         (VAR_5->regs[VAR_0] & VAR_8) == VAR_8 ?
         0x8000 : 0);
 }
 return VAR_4;
}
