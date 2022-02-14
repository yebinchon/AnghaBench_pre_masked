
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_3__ {int (* prepare ) (struct hda_pcm_stream*,struct hda_codec*,unsigned int,unsigned int,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_1__ ops; } ;
struct hda_codec {TYPE_2__* bus; } ;
struct TYPE_4__ {int prepare_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_pcm_stream*,struct hda_codec*,unsigned int,unsigned int,struct snd_pcm_substream*) ;

int FUNC_4(struct hda_codec *VAR_0,
     struct hda_pcm_stream *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3,
     struct snd_pcm_substream *VAR_4)
{
 int VAR_5;
 FUNC_0(&VAR_0->bus->prepare_mutex);
 VAR_5 = VAR_1->ops.prepare(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
 if (VAR_5 >= 0)
  FUNC_2(VAR_0);
 FUNC_1(&VAR_0->bus->prepare_mutex);
 return VAR_5;
}
