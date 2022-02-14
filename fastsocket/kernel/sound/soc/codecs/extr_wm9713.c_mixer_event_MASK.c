
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
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_9,
 struct snd_kcontrol *VAR_10, int VAR_11)
{
 u16 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_12 = FUNC_0(VAR_9->codec, VAR_6);
 VAR_13 = FUNC_0(VAR_9->codec, VAR_7);
 VAR_14 = FUNC_0(VAR_9->codec, VAR_3);
 VAR_15 = FUNC_0(VAR_9->codec, VAR_1);
 VAR_16 = FUNC_0(VAR_9->codec, VAR_4);
 VAR_17 = FUNC_0(VAR_9->codec, VAR_5);
 VAR_18 = FUNC_0(VAR_9->codec, VAR_2);
 VAR_19 = FUNC_0(VAR_9->codec, VAR_0);

 if (VAR_11 & VAR_8)
  return 0;
 if ((VAR_12 & 0x1) || (VAR_13 & 0x1))
  FUNC_1(VAR_9->codec, VAR_3, VAR_14 & 0x7fff);
 else
  FUNC_1(VAR_9->codec, VAR_3, VAR_14 | 0x8000);

 if ((VAR_12 & 0x2) || (VAR_13 & 0x2))
  FUNC_1(VAR_9->codec, VAR_1, VAR_15 & 0x7fff);
 else
  FUNC_1(VAR_9->codec, VAR_1, VAR_15 | 0x8000);

 if ((VAR_12 & 0x4) || (VAR_13 & 0x4))
  FUNC_1(VAR_9->codec, VAR_4, VAR_16 & 0x7fff);
 else
  FUNC_1(VAR_9->codec, VAR_4, VAR_16 | 0x8000);

 if ((VAR_12 & 0x8) || (VAR_13 & 0x8))
  FUNC_1(VAR_9->codec, VAR_5, VAR_17 & 0x7fff);
 else
  FUNC_1(VAR_9->codec, VAR_5, VAR_17 | 0x8000);

 if ((VAR_12 & 0x10) || (VAR_13 & 0x10))
  FUNC_1(VAR_9->codec, VAR_2, VAR_18 & 0x7fff);
 else
  FUNC_1(VAR_9->codec, VAR_2, VAR_18 | 0x8000);

 if ((VAR_12 & 0x20) || (VAR_13 & 0x20))
  FUNC_1(VAR_9->codec, VAR_0, VAR_19 & 0x7fff);
 else
  FUNC_1(VAR_9->codec, VAR_0, VAR_19 | 0x8000);

 return 0;
}
