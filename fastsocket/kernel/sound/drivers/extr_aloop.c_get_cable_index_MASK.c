
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {unsigned int stream; TYPE_1__* pcm; } ;
struct TYPE_2__ {int device; } ;



__attribute__((used)) static unsigned int FUNC_0(struct snd_pcm_substream *VAR_0)
{
 if (!VAR_0->pcm->device)
  return VAR_0->stream;
 else
  return !VAR_0->stream;
}
