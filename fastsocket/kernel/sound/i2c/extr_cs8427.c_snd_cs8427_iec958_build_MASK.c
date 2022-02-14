
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {int number; TYPE_1__* pcm; } ;
struct TYPE_8__ {int name; int subdevice; int device; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct snd_i2c_device {TYPE_2__* bus; struct cs8427* private_data; } ;
struct TYPE_10__ {struct snd_kcontrol* pcm_ctl; struct snd_pcm_substream* substream; } ;
struct TYPE_9__ {struct snd_pcm_substream* substream; } ;
struct cs8427 {TYPE_5__ playback; TYPE_4__ capture; } ;
struct TYPE_7__ {int card; } ;
struct TYPE_6__ {int device; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_5 ;
 int FUNC_3 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_4 (int *,struct snd_i2c_device*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct snd_i2c_device *VAR_6,
       struct snd_pcm_substream *VAR_7,
       struct snd_pcm_substream *VAR_8)
{
 struct cs8427 *VAR_9 = VAR_6->private_data;
 struct snd_kcontrol *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (FUNC_2(!VAR_7 || !VAR_8))
  return -VAR_0;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  VAR_10 = FUNC_4(&VAR_5[VAR_11], VAR_6);
  if (VAR_10 == ((void*)0))
   return -VAR_2;
  VAR_10->id.device = VAR_7->pcm->device;
  VAR_10->id.subdevice = VAR_7->number;
  VAR_12 = FUNC_3(VAR_6->bus->card, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;
  if (! FUNC_5(VAR_10->id.name,
        FUNC_1("",VAR_4,VAR_3)))
   VAR_9->playback.pcm_ctl = VAR_10;
 }

 VAR_9->playback.substream = VAR_7;
 VAR_9->capture.substream = VAR_8;
 if (FUNC_2(!VAR_9->playback.pcm_ctl))
  return -VAR_1;
 return 0;
}
