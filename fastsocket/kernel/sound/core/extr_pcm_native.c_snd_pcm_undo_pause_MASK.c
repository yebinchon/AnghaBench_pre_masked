
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* ops; TYPE_1__* runtime; } ;
struct TYPE_4__ {int (* trigger ) (struct snd_pcm_substream*,int ) ;} ;
struct TYPE_3__ {struct snd_pcm_substream* trigger_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 if (VAR_2->runtime->trigger_master == VAR_2)
  VAR_2->ops->trigger(VAR_2,
     VAR_3 ? VAR_1 :
     VAR_0);
}
