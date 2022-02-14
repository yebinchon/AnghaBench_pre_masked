
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channels; struct snd_pcm_substream* substream; } ;
struct ua101 {int mutex; int states; int packets_per_second; int rate; TYPE_1__ capture; } ;
struct snd_pcm_substream {TYPE_3__* runtime; struct ua101* private_data; } ;
struct TYPE_5__ {int fifo_size; } ;
struct TYPE_6__ {TYPE_2__ hw; int delay; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ua101*,struct snd_pcm_substream*,int ) ;
 int FUNC_5 (struct ua101*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct ua101 *VAR_2 = VAR_1->private_data;
 int VAR_3;

 VAR_2->capture.substream = VAR_1;
 VAR_3 = FUNC_4(VAR_2, VAR_1, VAR_2->capture.channels);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_1->runtime->hw.fifo_size =
  FUNC_0(VAR_2->rate, VAR_2->packets_per_second);
 VAR_1->runtime->delay = VAR_1->runtime->hw.fifo_size;

 FUNC_1(&VAR_2->mutex);
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 >= 0)
  FUNC_3(VAR_0, &VAR_2->states);
 FUNC_2(&VAR_2->mutex);
 return VAR_3;
}
