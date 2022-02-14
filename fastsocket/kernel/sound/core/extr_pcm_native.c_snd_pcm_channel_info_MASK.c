
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int channels; TYPE_2__* status; } ;
struct snd_pcm_channel_info {unsigned int channel; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int (* ioctl ) (struct snd_pcm_substream*,int ,struct snd_pcm_channel_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_pcm_channel_info*,int ,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ,struct snd_pcm_channel_info*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
    struct snd_pcm_channel_info * VAR_5)
{
 struct snd_pcm_runtime *VAR_6;
 unsigned int VAR_7;

 VAR_7 = VAR_5->channel;
 VAR_6 = VAR_4->runtime;
 FUNC_1(VAR_4);
 if (VAR_6->status->state == VAR_3) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }
 FUNC_2(VAR_4);
 if (VAR_7 >= VAR_6->channels)
  return -VAR_1;
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->channel = VAR_7;
 return VAR_4->ops->ioctl(VAR_4, VAR_2, VAR_5);
}
