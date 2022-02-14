
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {int channels; int sample_bits; int rate; struct snd_pcm_substream* master_substream; struct snd_pcm_substream* slave_substream; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct twl4030_priv *VAR_3,
    struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_substream *VAR_5;


 if (VAR_4 == VAR_3->master_substream)
  VAR_5 = VAR_3->slave_substream;
 else if (VAR_4 == VAR_3->slave_substream)
  VAR_5 = VAR_3->master_substream;
 else
  return;


 FUNC_0(VAR_5->runtime,
    VAR_1,
    VAR_3->rate,
    VAR_3->rate);

 FUNC_0(VAR_5->runtime,
    VAR_2,
    VAR_3->sample_bits,
    VAR_3->sample_bits);

 FUNC_0(VAR_5->runtime,
    VAR_0,
    VAR_3->channels,
    VAR_3->channels);
}
