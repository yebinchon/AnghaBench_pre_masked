
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ number; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hda_pcm_stream *VAR_0,
       struct hda_codec *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3,
       struct snd_pcm_substream *VAR_4)
{
 FUNC_0(VAR_1, 0x05 + VAR_4->number,
       VAR_2, 0, VAR_3);
 return 0;
}
