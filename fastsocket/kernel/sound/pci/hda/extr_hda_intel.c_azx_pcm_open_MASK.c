
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rates; int formats; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {struct azx_dev* private_data; TYPE_2__ hw; } ;
struct TYPE_3__ {int (* open ) (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;int (* close ) (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_1__ ops; int rates; int formats; int channels_max; int channels_min; } ;
struct azx_pcm {int codec; struct azx* chip; struct hda_pcm_stream** hinfo; } ;
struct azx_dev {scalar_t__ running; struct snd_pcm_substream* substream; } ;
struct azx {int open_mutex; int reg_lock; scalar_t__ align_buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct azx_dev* FUNC_0 (struct azx*,struct snd_pcm_substream*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (struct azx_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_pcm_runtime*,int ) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_9 (struct snd_pcm_runtime*) ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 struct azx_pcm* FUNC_11 (struct snd_pcm_substream*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;
 int FUNC_15 (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_16(struct snd_pcm_substream *VAR_6)
{
 struct azx_pcm *VAR_7 = FUNC_11(VAR_6);
 struct hda_pcm_stream *VAR_8 = VAR_7->hinfo[VAR_6->stream];
 struct azx *VAR_9 = VAR_7->chip;
 struct azx_dev *VAR_10;
 struct snd_pcm_runtime *VAR_11 = VAR_6->runtime;
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_2(&VAR_9->open_mutex);
 VAR_10 = FUNC_0(VAR_9, VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(&VAR_9->open_mutex);
  return -VAR_0;
 }
 VAR_11->hw = VAR_5;
 VAR_11->hw.channels_min = VAR_8->channels_min;
 VAR_11->hw.channels_max = VAR_8->channels_max;
 VAR_11->hw.formats = VAR_8->formats;
 VAR_11->hw.rates = VAR_8->rates;
 FUNC_9(VAR_11);
 FUNC_7(VAR_11, VAR_3);
 if (VAR_9->align_buffer_size)






  VAR_14 = 128;
 else




  VAR_14 = 4;

 FUNC_8(VAR_11, 0, VAR_2,
       VAR_14);
 FUNC_8(VAR_11, 0, VAR_4,
       VAR_14);
 FUNC_6(VAR_7->codec);
 VAR_13 = VAR_8->ops.open(VAR_8, VAR_7->codec, VAR_6);
 if (VAR_13 < 0) {
  FUNC_1(VAR_10);
  FUNC_5(VAR_7->codec);
  FUNC_3(&VAR_9->open_mutex);
  return VAR_13;
 }
 FUNC_9(VAR_11);

 if (FUNC_4(!VAR_11->hw.channels_min) ||
     FUNC_4(!VAR_11->hw.channels_max) ||
     FUNC_4(!VAR_11->hw.formats) ||
     FUNC_4(!VAR_11->hw.rates)) {
  FUNC_1(VAR_10);
  VAR_8->ops.close(VAR_8, VAR_7->codec, VAR_6);
  FUNC_5(VAR_7->codec);
  FUNC_3(&VAR_9->open_mutex);
  return -VAR_1;
 }
 FUNC_12(&VAR_9->reg_lock, VAR_12);
 VAR_10->substream = VAR_6;
 VAR_10->running = 0;
 FUNC_13(&VAR_9->reg_lock, VAR_12);

 VAR_11->private_data = VAR_10;
 FUNC_10(VAR_6);
 FUNC_3(&VAR_9->open_mutex);
 return 0;
}
