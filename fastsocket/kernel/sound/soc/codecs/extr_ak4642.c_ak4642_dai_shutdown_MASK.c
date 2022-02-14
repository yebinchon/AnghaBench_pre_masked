
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_1,
          struct snd_soc_dai *VAR_2)
{
 int VAR_3 = VAR_1->stream == VAR_0;
 struct snd_soc_codec *VAR_4 = VAR_2->codec;

 if (VAR_3) {

  FUNC_0(VAR_4, 0x01, 0x3b);
  FUNC_0(VAR_4, 0x01, 0x0b);
  FUNC_0(VAR_4, 0x00, 0x40);
  FUNC_0(VAR_4, 0x0e, 0x11);
  FUNC_0(VAR_4, 0x0f, 0x08);
 } else {

  FUNC_0(VAR_4, 0x00, 0x40);
  FUNC_0(VAR_4, 0x10, 0x00);
  FUNC_0(VAR_4, 0x07, 0x01);
 }
}
