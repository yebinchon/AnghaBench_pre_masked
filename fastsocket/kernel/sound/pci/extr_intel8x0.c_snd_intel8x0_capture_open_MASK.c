
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct intel8x0 {int * ichd; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int *) ;
 struct intel8x0* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct intel8x0 *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_1, &VAR_2->ichd[VAR_0]);
}
