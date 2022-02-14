
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int index; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct snd_ac97 {int num; } ;


 struct snd_kcontrol_new FUNC_0 (char*,int,int,int ,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_kcontrol_new FUNC_1 (char*,int,int ,unsigned int,int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct snd_kcontrol*,int ) ;
 int FUNC_4 (struct snd_ac97*,int) ;
 int FUNC_5 (struct snd_ac97*,int) ;
 int FUNC_6 (struct snd_ac97*,int,int) ;
 int FUNC_7 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_8 (struct snd_kcontrol_new*,struct snd_ac97*) ;

__attribute__((used)) static int FUNC_9(struct snd_card *VAR_3, char *VAR_4, int VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, struct snd_ac97 *VAR_8)
{
 int VAR_9;
 struct snd_kcontrol *VAR_10;

 if (! FUNC_5(VAR_8, VAR_5))
  return 0;
 if (VAR_7) {

  struct snd_kcontrol_new VAR_11 = FUNC_0(VAR_4, VAR_5, 8, 0, VAR_6, 1);
  VAR_11.index = VAR_8->num;
  VAR_10 = FUNC_8(&VAR_11, VAR_8);
 } else {

  struct snd_kcontrol_new VAR_12 = FUNC_1(VAR_4, VAR_5, 0, VAR_6, 1);
  VAR_12.index = VAR_8->num;
  VAR_10 = FUNC_8(&VAR_12, VAR_8);
 }
 if (VAR_5 >= VAR_1 && VAR_5 <= VAR_0)
  FUNC_3(VAR_10, VAR_2);
 else
  FUNC_3(VAR_10, FUNC_2(VAR_6));
 VAR_9 = FUNC_7(VAR_3, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;
 FUNC_6(VAR_8, VAR_5,
        (FUNC_4(VAR_8, VAR_5) & 0x8080) |
        VAR_6 | (VAR_7 << 8));
 return 0;
}
