
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ac97*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_ac97 *VAR_1)
{
 if (FUNC_0(VAR_1, "Master Playback", "Surround Playback", "Switch") ||
     FUNC_0(VAR_1, "Master Playback", "Surround Playback", "Volume"))
  return -VAR_0;
 return 0;
}
