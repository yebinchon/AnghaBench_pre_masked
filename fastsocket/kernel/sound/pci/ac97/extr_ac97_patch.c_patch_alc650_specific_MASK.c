
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int ext_id; scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_ac97*,int ,int ) ;
 int FUNC_2 (struct snd_ac97*,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_1(VAR_5, VAR_3, FUNC_0(VAR_3))) < 0)
  return VAR_6;
 if (VAR_5->ext_id & VAR_0) {
  if ((VAR_6 = FUNC_1(VAR_5, VAR_4, FUNC_0(VAR_4))) < 0)
   return VAR_6;
 }
 if (VAR_5->id != VAR_1)
  FUNC_2(VAR_5, "Master Playback Volume",
     VAR_2);
 return 0;
}
