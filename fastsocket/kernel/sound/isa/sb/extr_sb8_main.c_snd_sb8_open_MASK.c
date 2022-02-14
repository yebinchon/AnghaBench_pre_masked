
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb {int open; int hardware; struct snd_pcm_substream* capture_substream; struct snd_pcm_substream* playback_substream; int open_lock; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rate_max; int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int,...) ;
 struct snd_sb* FUNC_2 (struct snd_pcm_substream*) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_10)
{
 struct snd_sb *VAR_11 = FUNC_2(VAR_10);
 struct snd_pcm_runtime *VAR_12 = VAR_10->runtime;
 unsigned long VAR_13;

 FUNC_3(&VAR_11->open_lock, VAR_13);
 if (VAR_11->open) {
  FUNC_4(&VAR_11->open_lock, VAR_13);
  return -VAR_0;
 }
 VAR_11->open |= VAR_1;
 FUNC_4(&VAR_11->open_lock, VAR_13);
 if (VAR_10->stream == VAR_4) {
  VAR_11->playback_substream = VAR_10;
  VAR_12->hw = VAR_9;
 } else {
  VAR_11->capture_substream = VAR_10;
  VAR_12->hw = VAR_6;
 }
 switch (VAR_11->hardware) {
 case 128:
  VAR_12->hw.rate_max = 44100;
  VAR_12->hw.channels_max = 2;
  FUNC_1(VAR_12, 0, VAR_3,
        VAR_8, ((void*)0),
        VAR_2,
        VAR_3, -1);
  FUNC_1(VAR_12, 0, VAR_2,
         VAR_7, ((void*)0),
         VAR_3, -1);
  break;
 case 129:
  if (VAR_10->stream == VAR_4) {
   VAR_12->hw.rate_max = 44100;
  } else {
   VAR_12->hw.rate_max = 15000;
  }
 default:
  break;
 }
 FUNC_0(VAR_12, 0, VAR_3,
          &VAR_5);
 return 0;
}
