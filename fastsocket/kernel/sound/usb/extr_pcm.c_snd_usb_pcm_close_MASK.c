
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_substream {int interface; TYPE_2__* stream; int * pcm_substream; int dev; } ;
struct snd_usb_stream {TYPE_1__* chip; struct snd_usb_substream* substream; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {int chip; } ;
struct TYPE_3__ {int shutdown; } ;


 struct snd_usb_stream* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_usb_substream*,int ,int ,int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct snd_usb_stream *VAR_2 = FUNC_0(VAR_0);
 struct snd_usb_substream *VAR_3 = &VAR_2->substream[VAR_1];

 FUNC_2(VAR_3, 0, 0, 0);

 if (!VAR_2->chip->shutdown && VAR_3->interface >= 0) {
  FUNC_3(VAR_3->dev, VAR_3->interface, 0);
  VAR_3->interface = -1;
 }

 VAR_3->pcm_substream = ((void*)0);
 FUNC_1(VAR_3->stream->chip);

 return 0;
}
