
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ silence_size; TYPE_2__* status; TYPE_1__* control; } ;
struct TYPE_4__ {int hw_ptr; } ;
struct TYPE_3__ {int appl_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 VAR_4->control->appl_ptr = VAR_4->status->hw_ptr;
 if (VAR_2->stream == VAR_0 &&
     VAR_4->silence_size > 0)
  FUNC_0(VAR_2, VAR_1);
}
