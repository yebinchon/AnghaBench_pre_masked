
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_ac97*,int ,int ) ;
 int FUNC_2 (struct snd_ac97*,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_1))) < 0)
  return VAR_3;
 FUNC_2(VAR_2, "Headphone Playback Volume",
    VAR_0);
 return 0;
}
