
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int private_value; int index; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct snd_ac97 {int flags; int num; } ;


 struct snd_kcontrol_new FUNC_0 (char*,int,int,int,int,int) ;
 struct snd_kcontrol_new FUNC_1 (char*,int,int,int,int) ;
 int VAR_0 ;
 unsigned short FUNC_2 (struct snd_ac97*,int) ;
 int FUNC_3 (struct snd_ac97*,int) ;
 int FUNC_4 (struct snd_ac97*,int,unsigned short) ;
 int FUNC_5 (struct snd_ac97*,int,unsigned short) ;
 int FUNC_6 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_7 (struct snd_kcontrol_new*,struct snd_ac97*) ;

__attribute__((used)) static int FUNC_8(struct snd_card *VAR_1, char *VAR_2, int VAR_3,
         int VAR_4, int VAR_5,
         struct snd_ac97 *VAR_6)
{
 struct snd_kcontrol *VAR_7;
 int VAR_8;
 unsigned short VAR_9, VAR_10, VAR_11;

 if (! FUNC_3(VAR_6, VAR_3))
  return 0;

 VAR_11 = 0x8000;
 VAR_9 = FUNC_2(VAR_6, VAR_3);
 if (VAR_4 || (VAR_6->flags & VAR_0)) {

  VAR_10 = VAR_9 | 0x8080;
  FUNC_4(VAR_6, VAR_3, VAR_10);
  if (VAR_10 == FUNC_2(VAR_6, VAR_3))
   VAR_11 = 0x8080;
 }
 if (VAR_11 == 0x8080) {
  struct snd_kcontrol_new VAR_12 = FUNC_0(VAR_2, VAR_3, 15, 7, 1, 1);
  if (VAR_5)
   VAR_12.private_value |= (1 << 30);
  VAR_12.index = VAR_6->num;
  VAR_7 = FUNC_7(&VAR_12, VAR_6);
 } else {
  struct snd_kcontrol_new VAR_13 = FUNC_1(VAR_2, VAR_3, 15, 1, 1);
  if (VAR_5)
   VAR_13.private_value |= (1 << 30);
  VAR_13.index = VAR_6->num;
  VAR_7 = FUNC_7(&VAR_13, VAR_6);
 }
 VAR_8 = FUNC_6(VAR_1, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_5(VAR_6, VAR_3, VAR_9 | VAR_11);
 return 0;
}
