
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer_pos; scalar_t__ period_pos; } ;
struct ua101 {TYPE_2__ playback; int states; int alsa_playback_wait; int mutex; } ;
struct snd_pcm_substream {TYPE_1__* runtime; struct ua101* private_data; } ;
struct TYPE_3__ {scalar_t__ delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ua101*) ;
 int FUNC_3 (struct ua101*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5)
{
 struct ua101 *VAR_6 = VAR_5->private_data;
 int VAR_7;

 FUNC_0(&VAR_6->mutex);
 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_3(VAR_6);
 FUNC_1(&VAR_6->mutex);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_5(VAR_6->alsa_playback_wait,
     FUNC_4(VAR_3, &VAR_6->states) ||
     !FUNC_4(VAR_4, &VAR_6->states));
 if (FUNC_4(VAR_0, &VAR_6->states))
  return -VAR_2;
 if (!FUNC_4(VAR_4, &VAR_6->states))
  return -VAR_1;

 VAR_5->runtime->delay = 0;
 VAR_6->playback.period_pos = 0;
 VAR_6->playback.buffer_pos = 0;
 return 0;
}
