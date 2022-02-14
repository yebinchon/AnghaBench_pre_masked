
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_pcm_stream *VAR_0,
       struct hda_codec *VAR_1,
       struct snd_pcm_substream *VAR_2)
{
 FUNC_0(VAR_1, VAR_0->nid);
 return 0;
}
