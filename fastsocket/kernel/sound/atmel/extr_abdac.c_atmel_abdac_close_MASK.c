
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atmel_abdac {int * substream; } ;


 struct atmel_abdac* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct atmel_abdac *VAR_1 = FUNC_0(VAR_0);
 VAR_1->substream = ((void*)0);
 return 0;
}
