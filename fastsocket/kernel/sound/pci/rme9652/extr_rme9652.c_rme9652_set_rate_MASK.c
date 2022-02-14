
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {scalar_t__ capture_pid; scalar_t__ playback_pid; int running; int control_register; scalar_t__ ss_channels; int lock; int channel_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (struct snd_rme9652*) ;
 int FUNC_3 (struct snd_rme9652*,int ,int) ;
 int FUNC_4 (struct snd_rme9652*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_rme9652 *VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 if (!FUNC_4 (VAR_10)) {
  return -VAR_0;
 }
 FUNC_5(&VAR_10->lock);
 VAR_14 = FUNC_0(VAR_10);

 switch (VAR_11) {
 case 44100:
  if (VAR_14 > 48000) {
   VAR_13 = 1;
  }
  VAR_11 = 0;
  break;
 case 48000:
  if (VAR_14 > 48000) {
   VAR_13 = 1;
  }
  VAR_11 = VAR_5;
  break;
 case 88200:
  if (VAR_14 < 48000) {
   VAR_13 = 1;
  }
  VAR_11 = VAR_2;
  break;
 case 96000:
  if (VAR_14 < 48000) {
   VAR_13 = 1;
  }
  VAR_11 = VAR_2 | VAR_5;
  break;
 default:
  FUNC_6(&VAR_10->lock);
  return -VAR_1;
 }

 if (VAR_13 && (VAR_10->capture_pid >= 0 || VAR_10->playback_pid >= 0)) {
  FUNC_6(&VAR_10->lock);
  return -VAR_0;
 }

 if ((VAR_12 = VAR_10->running)) {
  FUNC_2(VAR_10);
 }
 VAR_10->control_register &= ~(VAR_5 | VAR_2);
 VAR_10->control_register |= VAR_11;
 FUNC_3(VAR_10, VAR_4, VAR_10->control_register);

 if (VAR_12) {
  FUNC_1(VAR_10);
 }

 if (VAR_11 & VAR_2) {
  if (VAR_10->ss_channels == VAR_3) {
   VAR_10->channel_map = VAR_8;
  } else {
   VAR_10->channel_map = VAR_6;
  }
 } else {
  if (VAR_10->ss_channels == VAR_3) {
   VAR_10->channel_map = VAR_9;
  } else {
   VAR_10->channel_map = VAR_7;
  }
 }

 FUNC_6(&VAR_10->lock);
 return 0;
}
