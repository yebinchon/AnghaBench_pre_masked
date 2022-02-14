
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int queue_length; int channels; struct snd_pcm_substream* substream; } ;
struct ua101 {int rate; int mutex; int states; int packets_per_second; TYPE_3__ playback; } ;
struct snd_pcm_substream {TYPE_2__* runtime; struct ua101* private_data; } ;
struct TYPE_4__ {int fifo_size; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ua101*,struct snd_pcm_substream*,int ) ;
 int FUNC_5 (struct ua101*) ;
 int FUNC_6 (struct ua101*) ;
 int FUNC_7 (struct ua101*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_2)
{
 struct ua101 *VAR_3 = VAR_2->private_data;
 int VAR_4;

 VAR_3->playback.substream = VAR_2;
 VAR_4 = FUNC_4(VAR_3, VAR_2, VAR_3->playback.channels);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_2->runtime->hw.fifo_size =
  FUNC_0(VAR_3->rate * VAR_3->playback.queue_length,
      VAR_3->packets_per_second);

 FUNC_1(&VAR_3->mutex);
 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0)
  goto error;
 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0) {
  if (!FUNC_8(VAR_0, &VAR_3->states))
   FUNC_7(VAR_3);
  goto error;
 }
 FUNC_3(VAR_1, &VAR_3->states);
error:
 FUNC_2(&VAR_3->mutex);
 return VAR_4;
}
