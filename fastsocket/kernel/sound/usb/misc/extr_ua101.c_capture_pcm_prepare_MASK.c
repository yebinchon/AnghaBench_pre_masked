
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buffer_pos; scalar_t__ period_pos; } ;
struct ua101 {TYPE_1__ capture; int states; int alsa_capture_wait; int mutex; } ;
struct snd_pcm_substream {struct ua101* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ua101*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5)
{
 struct ua101 *VAR_6 = VAR_5->private_data;
 int VAR_7;

 FUNC_0(&VAR_6->mutex);
 VAR_7 = FUNC_2(VAR_6);
 FUNC_1(&VAR_6->mutex);
 if (VAR_7 < 0)
  return VAR_7;







 FUNC_4(VAR_6->alsa_capture_wait,
     FUNC_3(VAR_0, &VAR_6->states) ||
     !FUNC_3(VAR_4, &VAR_6->states));
 if (FUNC_3(VAR_1, &VAR_6->states))
  return -VAR_3;
 if (!FUNC_3(VAR_4, &VAR_6->states))
  return -VAR_2;

 VAR_6->capture.period_pos = 0;
 VAR_6->capture.buffer_pos = 0;
 return 0;
}
