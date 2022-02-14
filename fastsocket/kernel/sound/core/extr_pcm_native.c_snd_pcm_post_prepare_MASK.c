
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_2__* status; TYPE_1__* control; } ;
struct TYPE_4__ {int hw_ptr; } ;
struct TYPE_3__ {int appl_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 VAR_3->control->appl_ptr = VAR_3->status->hw_ptr;
 FUNC_0(VAR_1, VAR_0);
}
