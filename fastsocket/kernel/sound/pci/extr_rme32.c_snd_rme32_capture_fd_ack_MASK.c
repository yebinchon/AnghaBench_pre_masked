
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme32 {int capture_pcm; } ;


 int FUNC_0 (struct snd_pcm_substream*,int *,int ) ;
 struct rme32* FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct rme32 *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_1, &VAR_2->capture_pcm,
       VAR_0);
 return 0;
}
