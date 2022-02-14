
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8350* control_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (struct wm8350*,int ,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;
 int FUNC_3 (struct wm8350*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_7,
     int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct snd_soc_codec *VAR_11 = VAR_7->codec;
 struct wm8350 *VAR_12 = VAR_11->control_data;
 u16 VAR_13;

 switch (VAR_8) {
 case 132:
  FUNC_0(VAR_12, VAR_0,
      VAR_6);
  break;
 case 128:
 case 129:
 case 130:
 case 131:
  FUNC_3(VAR_12, VAR_0,
    VAR_6);
  VAR_13 = FUNC_1(VAR_11, VAR_3) &
      ~VAR_2;
  FUNC_2(VAR_11, VAR_3, VAR_13 | VAR_8);
  break;
 }


 if (VAR_10 == VAR_5)
  FUNC_3(VAR_12, VAR_1,
    VAR_4);
 else
  FUNC_0(VAR_12, VAR_1,
      VAR_4);

 return 0;
}
