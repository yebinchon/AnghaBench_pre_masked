
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t stream; } ;
struct TYPE_2__ {int (* close ) (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_1__ ops; } ;
struct azx_pcm {int codec; struct azx* chip; struct hda_pcm_stream** hinfo; } ;
struct azx_dev {scalar_t__ running; int * substream; } ;
struct azx {int open_mutex; int reg_lock; } ;


 int FUNC_0 (struct azx_dev*) ;
 struct azx_dev* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct azx_pcm* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_0)
{
 struct azx_pcm *VAR_1 = FUNC_5(VAR_0);
 struct hda_pcm_stream *VAR_2 = VAR_1->hinfo[VAR_0->stream];
 struct azx *VAR_3 = VAR_1->chip;
 struct azx_dev *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;

 FUNC_2(&VAR_3->open_mutex);
 FUNC_6(&VAR_3->reg_lock, VAR_5);
 VAR_4->substream = ((void*)0);
 VAR_4->running = 0;
 FUNC_7(&VAR_3->reg_lock, VAR_5);
 FUNC_0(VAR_4);
 VAR_2->ops.close(VAR_2, VAR_1->codec, VAR_0);
 FUNC_4(VAR_1->codec);
 FUNC_3(&VAR_3->open_mutex);
 return 0;
}
