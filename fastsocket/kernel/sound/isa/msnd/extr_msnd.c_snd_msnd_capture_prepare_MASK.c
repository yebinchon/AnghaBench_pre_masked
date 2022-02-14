
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_msnd {scalar_t__ captureDMAPos; } ;


 int FUNC_0 (struct snd_msnd*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_msnd* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_msnd *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = VAR_2 / VAR_3;

 FUNC_0(VAR_1, VAR_4, VAR_3);
 VAR_1->captureDMAPos = 0;
 return 0;
}
