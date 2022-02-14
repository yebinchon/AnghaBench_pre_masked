
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; int buffer_size; } ;
struct TYPE_2__ {int hw_ptr; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,unsigned long) ;
 int FUNC_2 (struct snd_pcm_substream*,unsigned long) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
       void *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 unsigned long VAR_3;
 FUNC_1(VAR_0, VAR_3);
 if (FUNC_0(VAR_0) &&
     FUNC_3(VAR_0) >= 0)
  VAR_2->status->hw_ptr %= VAR_2->buffer_size;
 else
  VAR_2->status->hw_ptr = 0;
 FUNC_2(VAR_0, VAR_3);
 return 0;
}
