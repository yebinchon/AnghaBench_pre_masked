
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct TYPE_5__ {int * buffer; } ;
struct TYPE_8__ {TYPE_1__ oss; } ;
struct TYPE_6__ {scalar_t__ oss; } ;
struct TYPE_7__ {TYPE_2__ oss; } ;


 TYPE_4__* FUNC_0 (struct snd_pcm_runtime*) ;
 TYPE_3__* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1;
 VAR_1 = VAR_0->runtime;
 FUNC_3(FUNC_0(VAR_1)->oss.buffer);
 FUNC_0(VAR_1)->oss.buffer = ((void*)0);



 FUNC_1(VAR_0)->oss.oss = 0;
}
