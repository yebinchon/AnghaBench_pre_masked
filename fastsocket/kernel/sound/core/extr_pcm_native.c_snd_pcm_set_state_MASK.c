
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_4__ {TYPE_1__* status; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);
 if (VAR_1->runtime->status->state != VAR_0)
  VAR_1->runtime->status->state = VAR_2;
 FUNC_1(VAR_1);
}
