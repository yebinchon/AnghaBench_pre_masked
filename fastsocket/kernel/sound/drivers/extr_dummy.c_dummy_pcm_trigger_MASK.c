
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_dummy {TYPE_1__* timer_ops; } ;
struct TYPE_2__ {int (* start ) (struct snd_pcm_substream*) ;int (* stop ) (struct snd_pcm_substream*) ;} ;


 int VAR_0 ;




 struct snd_dummy* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_dummy *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 130:
 case 131:
  return VAR_3->timer_ops->start(VAR_1);
 case 129:
 case 128:
  return VAR_3->timer_ops->stop(VAR_1);
 }
 return -VAR_0;
}
