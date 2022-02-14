
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_akm4xxx {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned char FUNC_6 (struct snd_akm4xxx*,int,int) ;
 int FUNC_7 (struct snd_akm4xxx*,int,int,unsigned char) ;
 int FUNC_8 (struct snd_akm4xxx*,int,int,unsigned char) ;
 struct snd_akm4xxx* FUNC_9 (struct snd_kcontrol*) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static int FUNC_10(struct snd_kcontrol *VAR_1, int VAR_2,
        unsigned char VAR_3)
{
 struct snd_akm4xxx *VAR_4 = FUNC_9(VAR_1);
 unsigned int VAR_5 = FUNC_3(VAR_1->private_value);
 int VAR_6 = FUNC_0(VAR_1->private_value);

 if (FUNC_6(VAR_4, VAR_6, VAR_2) == VAR_3)
  return 0;

 FUNC_7(VAR_4, VAR_6, VAR_2, VAR_3);
 if (FUNC_5(VAR_1->private_value) && VAR_3 < 128)
  VAR_3 = VAR_0[VAR_3];
 if (FUNC_2(VAR_1->private_value) && VAR_3 >= 128)
  VAR_3++;
 if (FUNC_1(VAR_1->private_value))
  VAR_3 = VAR_5 - VAR_3;
 if (FUNC_4(VAR_1->private_value))
  VAR_3 |= 0x80;


 FUNC_8(VAR_4, VAR_6, VAR_2, VAR_3);
 return 1;
}
