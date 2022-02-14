
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_als300_substream_data {int period_flipflop; } ;
struct snd_als300 {TYPE_2__* capture_substream; scalar_t__ port; scalar_t__ pcm; TYPE_2__* playback_substream; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {struct snd_als300_substream_data* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11;
 struct snd_als300 *VAR_12 = VAR_8;
 struct snd_als300_substream_data *VAR_13;

 VAR_9 = FUNC_0(VAR_12->port+VAR_1);
 VAR_10 = FUNC_0(VAR_12->port+VAR_6);
 VAR_11 = FUNC_0(VAR_12->port+VAR_0);


 if ((VAR_9 == 0) && ((VAR_10 & 0x80) == 0) && ((VAR_11 & 0x01) == 0))
  return VAR_4;

 if (VAR_9 & VAR_5) {
  if (VAR_12->pcm && VAR_12->playback_substream) {
   FUNC_1(VAR_5, VAR_12->port+VAR_1);
   VAR_13 = VAR_12->playback_substream->runtime->private_data;
   VAR_13->period_flipflop ^= 1;
   FUNC_3(VAR_12->playback_substream);
   FUNC_2("IRQ_PLAYBACK\n");
  }
 }
 if (VAR_9 & VAR_2) {
  if (VAR_12->pcm && VAR_12->capture_substream) {
   FUNC_1(VAR_2, VAR_12->port+VAR_1);
   VAR_13 = VAR_12->capture_substream->runtime->private_data;
   VAR_13->period_flipflop ^= 1;
   FUNC_3(VAR_12->capture_substream);
   FUNC_2("IRQ_CAPTURE\n");
  }
 }


 return VAR_3;
}
