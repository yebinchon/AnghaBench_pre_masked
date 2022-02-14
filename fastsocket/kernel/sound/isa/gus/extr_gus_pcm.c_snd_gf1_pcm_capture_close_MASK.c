
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_gus_card {int * pcm_cap_substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 struct snd_gus_card* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_gus_card *VAR_2 = FUNC_1(VAR_1);

 VAR_2->pcm_cap_substream = ((void*)0);
 FUNC_0(VAR_2, VAR_0);
 return 0;
}
