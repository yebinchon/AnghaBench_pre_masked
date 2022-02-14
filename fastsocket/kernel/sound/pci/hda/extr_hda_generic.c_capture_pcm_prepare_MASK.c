
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_1,
          struct hda_codec *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4,
          struct snd_pcm_substream *VAR_5)
{
 FUNC_1(VAR_2, VAR_1->nid, VAR_3, 0, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_5,
         VAR_0);
 return 0;
}
