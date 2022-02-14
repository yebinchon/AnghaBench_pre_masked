
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct audio_stream* private_data; } ;
struct audio_stream {int dummy; } ;


 int FUNC_0 (struct audio_stream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct audio_stream *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_1);
 return FUNC_1(VAR_0);
}
