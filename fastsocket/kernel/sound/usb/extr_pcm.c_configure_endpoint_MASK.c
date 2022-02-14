
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_substream {TYPE_2__* stream; int cur_audiofmt; int cur_rate; int period_bytes; int channels; int pcm_format; int data_endpoint; int * sync_endpoint; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct TYPE_3__ {int shutdown_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct snd_usb_substream*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_substream *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->stream->chip->shutdown_mutex);

 FUNC_3(VAR_0, 0, 0, 0);
 VAR_1 = FUNC_2(VAR_0->data_endpoint,
       VAR_0->pcm_format,
       VAR_0->channels,
       VAR_0->period_bytes,
       VAR_0->cur_rate,
       VAR_0->cur_audiofmt,
       VAR_0->sync_endpoint);
 if (VAR_1 < 0)
  goto unlock;

 if (VAR_0->sync_endpoint)
  VAR_1 = FUNC_2(VAR_0->data_endpoint,
        VAR_0->pcm_format,
        VAR_0->channels,
        VAR_0->period_bytes,
        VAR_0->cur_rate,
        VAR_0->cur_audiofmt,
        ((void*)0));

unlock:
 FUNC_1(&VAR_0->stream->chip->shutdown_mutex);
 return VAR_1;
}
