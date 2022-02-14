
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1,
         struct snd_soc_dai *VAR_2)
{
 int VAR_3 = VAR_1->stream == VAR_0;
 struct snd_soc_codec *VAR_4 = VAR_2->codec;

 if (VAR_3) {
  FUNC_0(VAR_4, 0x05, 0x27);
  FUNC_0(VAR_4, 0x0f, 0x09);
  FUNC_0(VAR_4, 0x0e, 0x19);
  FUNC_0(VAR_4, 0x09, 0x91);
  FUNC_0(VAR_4, 0x0c, 0x91);
  FUNC_0(VAR_4, 0x0a, 0x28);
  FUNC_0(VAR_4, 0x0d, 0x28);
  FUNC_0(VAR_4, 0x00, 0x64);
  FUNC_0(VAR_4, 0x01, 0x3b);
  FUNC_0(VAR_4, 0x01, 0x7b);
 } else {
  FUNC_0(VAR_4, 0x05, 0x27);
  FUNC_0(VAR_4, 0x02, 0x05);
  FUNC_0(VAR_4, 0x06, 0x3c);
  FUNC_0(VAR_4, 0x08, 0xe1);
  FUNC_0(VAR_4, 0x0b, 0x00);
  FUNC_0(VAR_4, 0x07, 0x21);
  FUNC_0(VAR_4, 0x00, 0x41);
  FUNC_0(VAR_4, 0x10, 0x01);
 }

 return 0;
}
