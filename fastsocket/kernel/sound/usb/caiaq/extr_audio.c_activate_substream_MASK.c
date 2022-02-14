
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int spinlock; struct snd_pcm_substream** sub_capture; struct snd_pcm_substream** sub_playback; } ;
struct snd_pcm_substream {scalar_t__ stream; size_t number; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct snd_usb_caiaqdev *VAR_1,
            struct snd_pcm_substream *VAR_2)
{
 FUNC_0(&VAR_1->spinlock);

 if (VAR_2->stream == VAR_0)
  VAR_1->sub_playback[VAR_2->number] = VAR_2;
 else
  VAR_1->sub_capture[VAR_2->number] = VAR_2;

 FUNC_1(&VAR_1->spinlock);
}
