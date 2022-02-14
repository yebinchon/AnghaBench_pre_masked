
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct snd_pcxhr {TYPE_1__* mgr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; struct pcxhr_stream* private_data; } ;
struct pcxhr_stream {int timer_buf_periods; scalar_t__ timer_period_frag; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int lock; } ;


 struct snd_pcxhr* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 unsigned long VAR_1;
 u_int32_t VAR_2;
 int VAR_3;
 struct snd_pcxhr *VAR_4 = FUNC_0(VAR_0);
 struct snd_pcm_runtime *VAR_5 = VAR_0->runtime;
 struct pcxhr_stream *VAR_6 = VAR_5->private_data;

 FUNC_1(&VAR_4->mgr->lock, VAR_1);


 VAR_2 = VAR_6->timer_period_frag;
 VAR_3 = VAR_6->timer_buf_periods;

 FUNC_2(&VAR_4->mgr->lock, VAR_1);

 return (snd_pcm_uframes_t)((VAR_3 * VAR_5->period_size) +
       VAR_2);
}
