
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_substream {unsigned int hwptr_done; int lock; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef unsigned int snd_pcm_uframes_t ;
struct TYPE_2__ {int frame_bits; int rate; int delay; scalar_t__ private_data; } ;


 int FUNC_0 (struct snd_usb_substream*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_usb_substream *VAR_1;
 unsigned int VAR_2;

 VAR_1 = (struct snd_usb_substream *)VAR_0->runtime->private_data;
 FUNC_1(&VAR_1->lock);
 VAR_2 = VAR_1->hwptr_done;
 VAR_0->runtime->delay = FUNC_0(VAR_1,
      VAR_0->runtime->rate);
 FUNC_2(&VAR_1->lock);
 return VAR_2 / (VAR_0->runtime->frame_bits >> 3);
}
