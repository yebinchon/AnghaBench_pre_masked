
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct au1xpsc_audio_dmadata {int ddma_chan; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct au1xpsc_audio_dmadata*) ;
 int FUNC_2 (struct au1xpsc_audio_dmadata*) ;
 struct au1xpsc_audio_dmadata** VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct au1xpsc_audio_dmadata *VAR_3 =
   VAR_1[FUNC_0(VAR_2)];

 FUNC_3(VAR_3->ddma_chan);

 if (FUNC_0(VAR_2) == VAR_0) {
  FUNC_1(VAR_3);
  FUNC_1(VAR_3);
 } else {
  FUNC_2(VAR_3);
  FUNC_2(VAR_3);
 }

 return 0;
}
