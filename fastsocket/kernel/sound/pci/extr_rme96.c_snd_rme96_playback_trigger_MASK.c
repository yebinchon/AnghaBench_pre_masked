
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme96 {struct snd_pcm_substream* playback_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rme96*) ;




 struct rme96* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct rme96*,int) ;
 int FUNC_3 (struct rme96*) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_2,
      int VAR_3)
{
 struct rme96 *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 129:
  if (!FUNC_0(VAR_4)) {
   if (VAR_2 != VAR_4->playback_substream) {
    return -VAR_0;
   }
   FUNC_2(VAR_4, 0);
  }
  break;

 case 128:
  if (FUNC_0(VAR_4)) {
   if (VAR_2 != VAR_4->playback_substream) {
    return -VAR_0;
   }
   FUNC_3(VAR_4);
  }
  break;

 case 131:
  if (FUNC_0(VAR_4)) {
   FUNC_3(VAR_4);
  }
  break;

 case 130:
  if (!FUNC_0(VAR_4)) {
   FUNC_2(VAR_4, 1);
  }
  break;

 default:
  return -VAR_1;
 }
 return 0;
}
