
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vx_pipe {struct vx_pipe* monitoring_pipe; int references; int start_tq; struct snd_pcm_substream* substream; } ;
struct TYPE_5__ {int size; } ;
struct vx_core {int chip_status; unsigned int audio_ins; TYPE_2__ ibl; scalar_t__* audio_monitor_active; int * audio_monitor; struct vx_pipe** playback_pipes; struct vx_pipe** capture_pipes; } ;
struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int period_bytes_min; } ;
struct snd_pcm_runtime {struct vx_pipe* private_data; TYPE_3__ hw; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct vx_core* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (struct vx_core*,int,unsigned int,int,struct vx_pipe**) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct vx_core*,unsigned int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct vx_core *VAR_9 = FUNC_2(VAR_7);
 struct vx_pipe *VAR_10;
 struct vx_pipe *VAR_11 = ((void*)0);
 unsigned int VAR_12;
 int VAR_13;

 if (VAR_9->chip_status & VAR_4)
  return -VAR_0;

 VAR_12 = VAR_7->pcm->device * 2;
 if (FUNC_0(VAR_12 >= VAR_9->audio_ins))
  return -VAR_1;
 VAR_13 = FUNC_4(VAR_9, 1, VAR_12, 2, &VAR_10);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_10->substream = VAR_7;
 FUNC_3(&VAR_10->start_tq, VAR_6, (unsigned long)VAR_7);
 VAR_9->capture_pipes[VAR_12] = VAR_10;


 if (VAR_9->audio_monitor_active[VAR_12]) {
  VAR_11 = VAR_9->playback_pipes[VAR_12];
  if (! VAR_11) {

   VAR_13 = FUNC_4(VAR_9, 0, VAR_12, 2, &VAR_11);
   if (VAR_13 < 0)
    return VAR_13;
   VAR_9->playback_pipes[VAR_12] = VAR_11;
  }
  VAR_11->references++;




  FUNC_5(VAR_9, VAR_12, VAR_9->audio_monitor[VAR_12],
         VAR_9->audio_monitor_active[VAR_12]);

  FUNC_5(VAR_9, VAR_12+1, VAR_9->audio_monitor[VAR_12+1],
         VAR_9->audio_monitor_active[VAR_12+1]);
 }

 VAR_10->monitoring_pipe = VAR_11;

 VAR_8->hw = VAR_5;
 VAR_8->hw.period_bytes_min = VAR_9->ibl.size;
 VAR_8->private_data = VAR_10;


 FUNC_1(VAR_8, 0, VAR_2, 4);
 FUNC_1(VAR_8, 0, VAR_3, 4);

 return 0;
}
