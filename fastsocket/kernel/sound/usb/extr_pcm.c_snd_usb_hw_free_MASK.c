
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_substream {TYPE_2__* stream; scalar_t__ period_bytes; scalar_t__ cur_rate; int * cur_audiofmt; } ;
struct snd_pcm_substream {TYPE_3__* runtime; } ;
struct TYPE_6__ {struct snd_usb_substream* private_data; } ;
struct TYPE_5__ {TYPE_1__* chip; } ;
struct TYPE_4__ {int shutdown_mutex; } ;


 int FUNC_0 (struct snd_usb_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_usb_substream*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_usb_substream *VAR_1 = VAR_0->runtime->private_data;

 VAR_1->cur_audiofmt = ((void*)0);
 VAR_1->cur_rate = 0;
 VAR_1->period_bytes = 0;
 FUNC_1(&VAR_1->stream->chip->shutdown_mutex);
 FUNC_4(VAR_1, 0, 1, 1);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->stream->chip->shutdown_mutex);
 return FUNC_3(VAR_0);
}
