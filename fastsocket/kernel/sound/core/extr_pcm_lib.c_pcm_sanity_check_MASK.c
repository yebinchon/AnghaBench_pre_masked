
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_2__* status; int dma_area; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5;
 if (FUNC_0(VAR_4))
  return -VAR_2;
 VAR_5 = VAR_4->runtime;
 if (FUNC_1(!VAR_4->ops->copy && !VAR_5->dma_area))
  return -VAR_1;
 if (VAR_5->status->state == VAR_3)
  return -VAR_0;
 return 0;
}
