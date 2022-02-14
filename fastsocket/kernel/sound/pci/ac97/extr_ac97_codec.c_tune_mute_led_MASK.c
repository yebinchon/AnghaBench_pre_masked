
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int put; } ;
struct snd_ac97 {int scaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_kcontrol* FUNC_0 (struct snd_ac97*,char*,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_ac97*,char*,int *) ;
 int FUNC_2 (struct snd_ac97*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_4)
{
 struct snd_kcontrol *VAR_5 = FUNC_0(VAR_4, "Master Playback Switch", ((void*)0));
 if (! VAR_5)
  return -VAR_2;
 VAR_5->put = VAR_3;
 FUNC_1(VAR_4, "External Amplifier", ((void*)0));
 FUNC_2(VAR_4, VAR_0, 0x8000, 0x8000);
 VAR_4->scaps |= VAR_1;
 return 0;
}
