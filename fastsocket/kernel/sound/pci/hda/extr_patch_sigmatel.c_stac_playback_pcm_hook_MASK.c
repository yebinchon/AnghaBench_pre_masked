
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct sigmatel_spec {scalar_t__ stream_delay; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hda_pcm_stream *VAR_1,
       struct hda_codec *VAR_2,
       struct snd_pcm_substream *VAR_3,
       int VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_2->spec;
 if (VAR_4 == VAR_0 && VAR_5->stream_delay)
  FUNC_0(VAR_5->stream_delay);
}
