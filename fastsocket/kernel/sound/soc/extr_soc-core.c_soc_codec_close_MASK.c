
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_platform {TYPE_4__* pcm_ops; } ;
struct snd_soc_pcm_runtime {struct snd_soc_dai_link* dai; struct snd_soc_device* socdev; } ;
struct snd_soc_device {struct snd_soc_card* card; } ;
struct snd_soc_dai_link {TYPE_3__* ops; struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct TYPE_10__ {scalar_t__ active; int stream_name; } ;
struct TYPE_6__ {scalar_t__ active; } ;
struct snd_soc_dai {int pop_wait; TYPE_5__ capture; int * runtime; TYPE_2__* ops; scalar_t__ active; TYPE_1__ playback; } ;
struct snd_soc_codec {int active; } ;
struct snd_soc_card {int delayed_work; struct snd_soc_codec* codec; struct snd_soc_platform* platform; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_9__ {int (* close ) (struct snd_pcm_substream*) ;} ;
struct TYPE_8__ {int (* shutdown ) (struct snd_pcm_substream*) ;} ;
struct TYPE_7__ {int (* shutdown ) (struct snd_pcm_substream*,struct snd_soc_dai*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_7 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 struct snd_soc_device *VAR_6 = VAR_5->socdev;
 struct snd_soc_card *VAR_7 = VAR_6->card;
 struct snd_soc_dai_link *VAR_8 = VAR_5->dai;
 struct snd_soc_platform *VAR_9 = VAR_7->platform;
 struct snd_soc_dai *VAR_10 = VAR_8->cpu_dai;
 struct snd_soc_dai *VAR_11 = VAR_8->codec_dai;
 struct snd_soc_codec *VAR_12 = VAR_7->codec;

 FUNC_1(&VAR_2);

 if (VAR_4->stream == VAR_0)
  VAR_10->playback.active = VAR_11->playback.active = 0;
 else
  VAR_10->capture.active = VAR_11->capture.active = 0;

 if (VAR_11->playback.active == 0 &&
  VAR_11->capture.active == 0) {
  VAR_10->active = VAR_11->active = 0;
 }
 VAR_12->active--;




 if (VAR_4->stream == VAR_0)
  FUNC_4(VAR_11, 1);

 if (VAR_10->ops->shutdown)
  VAR_10->ops->shutdown(VAR_4, VAR_10);

 if (VAR_11->ops->shutdown)
  VAR_11->ops->shutdown(VAR_4, VAR_11);

 if (VAR_8->ops && VAR_8->ops->shutdown)
  VAR_8->ops->shutdown(VAR_4);

 if (VAR_9->pcm_ops->close)
  VAR_9->pcm_ops->close(VAR_4);
 VAR_10->runtime = ((void*)0);

 if (VAR_4->stream == VAR_0) {

  VAR_11->pop_wait = 1;
  FUNC_3(&VAR_7->delayed_work,
   FUNC_0(VAR_3));
 } else {

  FUNC_5(VAR_12,
   VAR_11->capture.stream_name,
   VAR_1);
 }

 FUNC_2(&VAR_2);
 return 0;
}
