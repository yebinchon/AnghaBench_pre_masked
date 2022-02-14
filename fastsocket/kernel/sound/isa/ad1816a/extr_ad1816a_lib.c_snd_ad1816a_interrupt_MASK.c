
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ad1816a {int lock; TYPE_1__* timer; scalar_t__ capture_substream; scalar_t__ playback_substream; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sticks; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (struct snd_ad1816a*,int ) ;
 int FUNC_1 (struct snd_ad1816a*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct snd_ad1816a *VAR_7 = VAR_6;
 unsigned char VAR_8;

 FUNC_4(&VAR_7->lock);
 VAR_8 = FUNC_0(VAR_7, VAR_1);
 FUNC_5(&VAR_7->lock);

 if ((VAR_8 & VAR_2) && VAR_7->playback_substream)
  FUNC_2(VAR_7->playback_substream);

 if ((VAR_8 & VAR_0) && VAR_7->capture_substream)
  FUNC_2(VAR_7->capture_substream);

 if ((VAR_8 & VAR_3) && VAR_7->timer)
  FUNC_3(VAR_7->timer, VAR_7->timer->sticks);

 FUNC_4(&VAR_7->lock);
 FUNC_1(VAR_7, VAR_1, 0x00);
 FUNC_5(&VAR_7->lock);
 return VAR_4;
}
