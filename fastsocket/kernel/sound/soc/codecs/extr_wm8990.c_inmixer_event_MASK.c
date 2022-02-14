
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {int codec; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_8,
 struct snd_kcontrol *VAR_9, int VAR_10)
{
 u16 VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_8->codec, VAR_7);
 VAR_12 = FUNC_0(VAR_8->codec, VAR_6);

 if (VAR_12 & ((1 << VAR_4) |
  (1 << VAR_0))) {
  VAR_11 |= VAR_1;
 } else {
  VAR_11 &= ~VAR_1;
 }

 if (VAR_12 & ((1 << VAR_5) |
  (1 << VAR_2))) {
  VAR_11 |= VAR_3;
 } else {
  VAR_11 &= ~VAR_1;
 }
 FUNC_1(VAR_8->codec, VAR_7, VAR_11);

 return 0;
}
