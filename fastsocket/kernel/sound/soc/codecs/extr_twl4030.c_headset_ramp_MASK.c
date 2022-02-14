
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_setup_data {int (* set_hs_extmute ) (int) ;scalar_t__ hs_extmute; } ;
struct twl4030_priv {unsigned int sysclk; } ;
struct snd_soc_device {struct twl4030_setup_data* codec_data; } ;
struct snd_soc_codec {struct twl4030_priv* private_data; struct snd_soc_device* socdev; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned char,int ) ;
 unsigned char FUNC_4 (struct snd_soc_codec*,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_codec *VAR_7, int VAR_8)
{
 struct snd_soc_device *VAR_9 = VAR_7->socdev;
 struct twl4030_setup_data *VAR_10 = VAR_9->codec_data;

 unsigned char VAR_11, VAR_12;
 struct twl4030_priv *VAR_13 = VAR_7->private_data;

 unsigned int VAR_14[] = {524288, 1048576, 2097152, 4194304,
        8388608, 16777216, 33554432, 67108864};

 VAR_11 = FUNC_4(VAR_7, VAR_4);
 VAR_12 = FUNC_4(VAR_7, VAR_5);



 if (VAR_10 && VAR_10->hs_extmute) {
  if (VAR_10->set_hs_extmute) {
   VAR_10->set_hs_extmute(1);
  } else {
   VAR_12 |= VAR_0;
   FUNC_5(VAR_7, VAR_5, VAR_12);
  }
 }

 if (VAR_8) {

  VAR_12 |= VAR_6;
  FUNC_5(VAR_7, VAR_5, VAR_12);
  FUNC_5(VAR_7, VAR_4, VAR_11);
  VAR_12 |= VAR_3;
  FUNC_5(VAR_7, VAR_5, VAR_12);

  FUNC_0((VAR_14[(VAR_12 & VAR_2) >> 2] /
   VAR_13->sysclk) + 1);
 } else {


  VAR_12 &= ~VAR_3;
  FUNC_5(VAR_7, VAR_5, VAR_12);

  FUNC_0((VAR_14[(VAR_12 & VAR_2) >> 2] /
   VAR_13->sysclk) + 1);

  FUNC_3(VAR_1,
     VAR_11 & (~0x0f),
     VAR_4);

  VAR_12 &= ~VAR_6;
  FUNC_5(VAR_7, VAR_5, VAR_12);
 }


 if (VAR_10 && VAR_10->hs_extmute) {
  if (VAR_10->set_hs_extmute) {
   VAR_10->set_hs_extmute(0);
  } else {
   VAR_12 &= ~VAR_0;
   FUNC_5(VAR_7, VAR_5, VAR_12);
  }
 }
}
