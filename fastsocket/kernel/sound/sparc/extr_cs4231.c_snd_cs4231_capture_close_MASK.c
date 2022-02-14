
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cs4231 {int * capture_substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs4231*,int ) ;
 struct snd_cs4231* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_cs4231 *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_0);
 VAR_2->capture_substream = ((void*)0);

 return 0;
}
