
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct intel8x0 {TYPE_1__* ichd; } ;
struct TYPE_2__ {int * substream; } ;


 size_t VAR_0 ;
 struct intel8x0* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct intel8x0 *VAR_2 = FUNC_0(VAR_1);

 VAR_2->ichd[VAR_0].substream = ((void*)0);
 return 0;
}
