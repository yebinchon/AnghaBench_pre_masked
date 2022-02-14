
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * p; } ;
struct snd_kcontrol {TYPE_1__ tlv; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_ac97*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct snd_ac97*,char*,int *,int ) ;
 int * VAR_3 ;
 struct snd_kcontrol* FUNC_3 (struct snd_ac97*,char*) ;
 int FUNC_4 (struct snd_ac97*,char*,char*) ;
 scalar_t__ FUNC_5 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_ac97 * VAR_4)
{
 struct snd_kcontrol *VAR_5;
 int VAR_6;

 if (FUNC_5(VAR_4, 0x5a, 9))
  if ((VAR_6 = FUNC_1(VAR_4, &VAR_3[0], 1)) < 0)
   return VAR_6;
 if ((VAR_6 = FUNC_1(VAR_4, &VAR_3[1], FUNC_0(VAR_3) - 1)) < 0)
  return VAR_6;


 VAR_5 = FUNC_3(VAR_4, "Master Playback Volume");
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_4, "Master Playback", "Front Playback");

 VAR_6 = FUNC_2(VAR_4, "Master Playback Volume",
       VAR_5->tlv.p, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, "Master Playback Switch",
       ((void*)0), VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
