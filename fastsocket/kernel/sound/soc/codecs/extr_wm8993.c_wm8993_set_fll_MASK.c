
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8993_priv {unsigned int fll_fref; unsigned int fll_fout; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; struct wm8993_priv* private_data; } ;
struct _fll_div {int k; int fll_outdiv; int fll_fratio; int n; int fll_clk_ref_div; } ;


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
 int VAR_11 ;


 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_15, int VAR_16,
     unsigned int VAR_17, unsigned int VAR_18)
{
 struct snd_soc_codec *VAR_19 = VAR_15->codec;
 struct wm8993_priv *VAR_20 = VAR_19->private_data;
 u16 VAR_21, VAR_22, VAR_23;
 struct _fll_div VAR_24;
 int VAR_25;


 if (VAR_17 == VAR_20->fll_fref && VAR_18 == VAR_20->fll_fout)
  return 0;


 if (VAR_18 == 0) {
  FUNC_0(VAR_19->dev, "FLL disabled\n");
  VAR_20->fll_fref = 0;
  VAR_20->fll_fout = 0;

  VAR_21 = FUNC_3(VAR_19, VAR_4);
  VAR_21 &= ~VAR_9;
  FUNC_4(VAR_19, VAR_4, VAR_21);

  return 0;
 }

 VAR_25 = FUNC_2(&VAR_24, VAR_17, VAR_18);
 if (VAR_25 != 0)
  return VAR_25;

 VAR_23 = FUNC_3(VAR_19, VAR_8);
 VAR_23 &= ~VAR_3;

 switch (VAR_16) {
 case 128:
  break;

 case 129:
  VAR_23 |= 1;
  break;

 case 130:
  VAR_23 |= 2;
  break;

 default:
  FUNC_1(VAR_19->dev, "Unknown FLL ID %d\n", VAR_16);
  return -VAR_0;
 }



 VAR_21 = FUNC_3(VAR_19, VAR_4);
 VAR_21 &= ~VAR_9;
 FUNC_4(VAR_19, VAR_4, VAR_21);


 if (VAR_24.k)
  VAR_21 |= VAR_10;
 else
  VAR_21 &= ~VAR_10;
 FUNC_4(VAR_19, VAR_4, VAR_21);

 FUNC_4(VAR_19, VAR_5,
       (VAR_24.fll_outdiv << VAR_14) |
       (VAR_24.fll_fratio << VAR_11));
 FUNC_4(VAR_19, VAR_6, VAR_24.k);

 VAR_22 = FUNC_3(VAR_19, VAR_7);
 VAR_22 &= ~VAR_12;
 VAR_22 |= VAR_24.n << VAR_13;
 FUNC_4(VAR_19, VAR_7, VAR_22);

 VAR_23 &= ~VAR_1;
 VAR_23 |= VAR_24.fll_clk_ref_div << VAR_2;
 FUNC_4(VAR_19, VAR_8, VAR_23);


 FUNC_4(VAR_19, VAR_4, VAR_21 | VAR_9);

 FUNC_0(VAR_19->dev, "FLL enabled at %dHz->%dHz\n", VAR_17, VAR_18);

 VAR_20->fll_fref = VAR_17;
 VAR_20->fll_fout = VAR_18;

 return 0;
}
