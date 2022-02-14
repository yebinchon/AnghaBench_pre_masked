
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_als300_substream_data {int period_flipflop; } ;
struct snd_als300 {TYPE_2__* capture_substream; scalar_t__ pcm; TYPE_2__* playback_substream; scalar_t__ port; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {struct snd_als300_substream_data* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 u8 VAR_7;
 struct snd_als300 *VAR_8 = VAR_6;
 struct snd_als300_substream_data *VAR_9;

 VAR_7 = FUNC_0(VAR_8->port+VAR_0);
 if (!VAR_7)
  return VAR_3;


 FUNC_1(VAR_7, VAR_8->port+VAR_0);
 if (VAR_7 & VAR_4) {
  if (VAR_8->pcm && VAR_8->playback_substream) {
   VAR_9 = VAR_8->playback_substream->runtime->private_data;
   VAR_9->period_flipflop ^= 1;
   FUNC_3(VAR_8->playback_substream);
   FUNC_2("IRQ_PLAYBACK\n");
  }
 }
 if (VAR_7 & VAR_1) {
  if (VAR_8->pcm && VAR_8->capture_substream) {
   VAR_9 = VAR_8->capture_substream->runtime->private_data;
   VAR_9->period_flipflop ^= 1;
   FUNC_3(VAR_8->capture_substream);
   FUNC_2("IRQ_CAPTURE\n");
  }
 }
 return VAR_2;
}
