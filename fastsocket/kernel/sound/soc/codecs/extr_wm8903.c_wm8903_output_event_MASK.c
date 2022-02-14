
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {int reg; int shift; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int FUNC_1 (struct snd_soc_codec*,int) ;
 int FUNC_2 (struct snd_soc_codec*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_11,
          struct snd_kcontrol *VAR_12, int VAR_13)
{
 struct snd_soc_codec *VAR_14 = VAR_11->codec;
 u16 VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 int VAR_19;

 switch (VAR_11->reg) {
 case 129:
  VAR_16 = VAR_4;
  VAR_18 = 0 + VAR_11->shift;
  break;
 case 128:
  VAR_16 = VAR_5;
  VAR_18 = 2 + VAR_11->shift;
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }

 switch (VAR_11->shift) {
 case 0:
  VAR_19 = 0;
  break;
 case 1:
  VAR_19 = 4;
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }

 if (VAR_13 & VAR_3) {
  VAR_15 = FUNC_1(VAR_14, VAR_16);


  VAR_15 &= ~(VAR_10 << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);
 }

 if (VAR_13 & VAR_1) {
  VAR_15 = FUNC_1(VAR_14, VAR_16);

  VAR_15 |= (VAR_7 << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);

  VAR_15 |= (VAR_8 << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);


  VAR_15 |= (VAR_9 << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);


  VAR_17 = FUNC_1(VAR_14, VAR_6);
  VAR_17 |= VAR_18;
  FUNC_2(VAR_14, VAR_6, VAR_17);


  VAR_15 |= (VAR_10 << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);
 }

 if (VAR_13 & VAR_2) {
  VAR_15 = FUNC_1(VAR_14, VAR_16);


  VAR_15 &= ~(VAR_10 << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);


  VAR_17 = FUNC_1(VAR_14, VAR_6);
  VAR_17 &= ~VAR_18;
  FUNC_2(VAR_14, VAR_6, VAR_17);


  VAR_15 &= ~((VAR_9 | VAR_8 |
     VAR_7) << VAR_19);
  FUNC_2(VAR_14, VAR_16, VAR_15);
 }

 return 0;
}
