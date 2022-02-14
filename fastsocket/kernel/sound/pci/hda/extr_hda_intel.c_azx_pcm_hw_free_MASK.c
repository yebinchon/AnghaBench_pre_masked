
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t stream; } ;
struct hda_pcm_stream {int dummy; } ;
struct azx_pcm {int codec; struct hda_pcm_stream** hinfo; struct azx* chip; } ;
struct azx_dev {scalar_t__ prepared; scalar_t__ format_val; scalar_t__ period_bytes; scalar_t__ bufsize; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct azx_dev*,int ,int ) ;
 int FUNC_1 (struct azx_dev*) ;
 int FUNC_2 (struct azx_dev*) ;
 int FUNC_3 (struct azx_dev*) ;
 struct azx_dev* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct azx*,struct azx_dev*,struct snd_pcm_substream*,int) ;
 int FUNC_6 (int ,struct hda_pcm_stream*,struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 struct azx_pcm* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_3)
{
 struct azx_pcm *VAR_4 = FUNC_8(VAR_3);
 struct azx_dev *VAR_5 = FUNC_4(VAR_3);
 struct azx *VAR_6 = VAR_4->chip;
 struct hda_pcm_stream *VAR_7 = VAR_4->hinfo[VAR_3->stream];


 FUNC_2(VAR_5);
 if (!FUNC_1(VAR_5)) {
  FUNC_0(VAR_5, VAR_0, 0);
  FUNC_0(VAR_5, VAR_1, 0);
  FUNC_0(VAR_5, VAR_2, 0);
  VAR_5->bufsize = 0;
  VAR_5->period_bytes = 0;
  VAR_5->format_val = 0;
 }

 FUNC_6(VAR_4->codec, VAR_7, VAR_3);

 FUNC_5(VAR_6, VAR_5, VAR_3, 0);
 VAR_5->prepared = 0;
 FUNC_3(VAR_5);
 return FUNC_7(VAR_3);
}
