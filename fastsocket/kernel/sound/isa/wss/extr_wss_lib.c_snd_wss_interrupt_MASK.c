
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wss {int hardware; int mode; int reg_lock; scalar_t__ capture_substream; scalar_t__ playback_substream; scalar_t__ single_dma; TYPE_1__* timer; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sticks; } ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 unsigned char FUNC_3 (struct snd_wss*,int ) ;
 int FUNC_4 (struct snd_wss*,int ,unsigned char) ;
 int FUNC_5 (struct snd_wss*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_wss*,int ,int ) ;

irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct snd_wss *VAR_13 = VAR_12;
 unsigned char VAR_14;

 if (VAR_13->hardware & VAR_7)

  VAR_14 = VAR_2;
 else
  VAR_14 = FUNC_3(VAR_13, VAR_1);
 if (VAR_14 & VAR_4) {
  if (VAR_13->timer)
   FUNC_2(VAR_13->timer, VAR_13->timer->sticks);
 }
 if (VAR_13->single_dma && VAR_13->hardware != VAR_8) {
  if (VAR_14 & VAR_2) {
   if (VAR_13->mode & VAR_9) {
    if (VAR_13->playback_substream)
     FUNC_1(VAR_13->playback_substream);
   }
   if (VAR_13->mode & VAR_10) {
    if (VAR_13->capture_substream) {
     FUNC_5(VAR_13);
     FUNC_1(VAR_13->capture_substream);
    }
   }
  }
 } else {
  if (VAR_14 & VAR_2) {
   if (VAR_13->playback_substream)
    FUNC_1(VAR_13->playback_substream);
  }
  if (VAR_14 & VAR_3) {
   if (VAR_13->capture_substream) {
    FUNC_5(VAR_13);
    FUNC_1(VAR_13->capture_substream);
   }
  }
 }

 FUNC_6(&VAR_13->reg_lock);
 VAR_14 = ~VAR_0 | ~VAR_14;
 if (VAR_13->hardware & VAR_7)
  FUNC_8(VAR_13, FUNC_0(VAR_6), 0);
 else
  FUNC_4(VAR_13, VAR_1, VAR_14);
 FUNC_7(&VAR_13->reg_lock);
 return VAR_5;
}
