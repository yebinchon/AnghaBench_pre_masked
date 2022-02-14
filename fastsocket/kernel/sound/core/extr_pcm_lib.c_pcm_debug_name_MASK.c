
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* pcm; int number; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int device; TYPE_2__* card; } ;


 int FUNC_0 (char*,size_t,char*,int,int,char,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
      char *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2, "pcmC%dD%d%c:%d",
   VAR_0->pcm->card->number,
   VAR_0->pcm->device,
   VAR_0->stream ? 'c' : 'p',
   VAR_0->number);
}
