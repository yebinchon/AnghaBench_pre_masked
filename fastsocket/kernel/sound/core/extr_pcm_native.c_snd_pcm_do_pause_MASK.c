
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* ops; TYPE_1__* runtime; } ;
struct TYPE_4__ {int (* trigger ) (struct snd_pcm_substream*,int ) ;} ;
struct TYPE_3__ {scalar_t__ hw_ptr_jiffies; struct snd_pcm_substream* trigger_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 if (VAR_4->runtime->trigger_master != VAR_4)
  return 0;




 VAR_4->runtime->hw_ptr_jiffies = VAR_3 - VAR_0 * 1000;
 return VAR_4->ops->trigger(VAR_4,
           VAR_5 ? VAR_1 :
           VAR_2);
}
