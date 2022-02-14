
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ integer; TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ) ;
 int FUNC_5 (struct snd_ice1712*,unsigned int,int) ;
 struct snd_ice1712* FUNC_6 (struct snd_kcontrol*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_3,
           struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_6(VAR_3);
 static const unsigned int VAR_6[13] = {
  8000, 9600, 11025, 12000, 16000, 22050, 24000,
  32000, 44100, 48000, 64000, 88200, 96000
 };
 unsigned char VAR_7;
 int VAR_8 = 0;

 FUNC_7(&VAR_5->reg_lock);
 VAR_7 = FUNC_1(FUNC_0(VAR_5, VAR_2));
 if (VAR_4->value.enumerated.item[0] == 13) {
  FUNC_3(VAR_7 | VAR_0, FUNC_0(VAR_5, VAR_2));
 } else {
  VAR_1 = VAR_6[VAR_4->value.integer.value[0] % 13];
  FUNC_8(&VAR_5->reg_lock);
  FUNC_5(VAR_5, VAR_1, 1);
  FUNC_7(&VAR_5->reg_lock);
 }
 VAR_8 = FUNC_1(FUNC_0(VAR_5, VAR_2)) != VAR_7;
 FUNC_8(&VAR_5->reg_lock);

 if ((VAR_7 & VAR_0) !=
     (FUNC_1(FUNC_0(VAR_5, VAR_2)) & VAR_0))
  FUNC_4(VAR_5, FUNC_2(VAR_5));

 return VAR_8;
}
