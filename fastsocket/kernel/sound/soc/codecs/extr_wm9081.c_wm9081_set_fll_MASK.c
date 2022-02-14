
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm9081_priv {unsigned int fll_fref; unsigned int fll_fout; } ;
struct snd_soc_codec {int dev; struct wm9081_priv* private_data; } ;
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
 int VAR_15 ;
 int VAR_16 ;

 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_17, int VAR_18,
     unsigned int VAR_19, unsigned int VAR_20)
{
 struct wm9081_priv *VAR_21 = VAR_17->private_data;
 u16 VAR_22, VAR_23, VAR_24;
 struct _fll_div VAR_25;
 int VAR_26;
 int VAR_27;


 if (VAR_19 == VAR_21->fll_fref && VAR_20 == VAR_21->fll_fout)
  return 0;


 if (VAR_20 == 0) {
  FUNC_0(VAR_17->dev, "FLL disabled\n");
  VAR_21->fll_fref = 0;
  VAR_21->fll_fout = 0;

  return 0;
 }

 VAR_26 = FUNC_2(&VAR_25, VAR_19, VAR_20);
 if (VAR_26 != 0)
  return VAR_26;

 VAR_24 = FUNC_3(VAR_17, VAR_10);
 VAR_24 &= ~VAR_5;

 switch (VAR_18) {
 case 128:
  VAR_24 |= 0x1;
  break;

 default:
  FUNC_1(VAR_17->dev, "Unknown FLL ID %d\n", VAR_18);
  return -VAR_0;
 }


 VAR_27 = FUNC_3(VAR_17, VAR_2);
 if (VAR_27 & VAR_1)
  FUNC_4(VAR_17, VAR_2,
        VAR_27 & ~VAR_1);



 VAR_22 = FUNC_3(VAR_17, VAR_6);
 VAR_22 &= ~VAR_11;
 FUNC_4(VAR_17, VAR_6, VAR_22);


 if (VAR_25.k)
  VAR_22 |= VAR_12;
 else
  VAR_22 &= ~VAR_12;
 FUNC_4(VAR_17, VAR_6, VAR_22);

 FUNC_4(VAR_17, VAR_7,
       (VAR_25.fll_outdiv << VAR_16) |
       (VAR_25.fll_fratio << VAR_13));
 FUNC_4(VAR_17, VAR_8, VAR_25.k);

 VAR_23 = FUNC_3(VAR_17, VAR_9);
 VAR_23 &= ~VAR_14;
 VAR_23 |= VAR_25.n << VAR_15;
 FUNC_4(VAR_17, VAR_9, VAR_23);

 VAR_24 &= ~VAR_3;
 VAR_24 |= VAR_25.fll_clk_ref_div << VAR_4;
 FUNC_4(VAR_17, VAR_10, VAR_24);


 FUNC_4(VAR_17, VAR_6, VAR_22 | VAR_11);


 if (VAR_27 & VAR_1)
  FUNC_4(VAR_17, VAR_2, VAR_27);

 FUNC_0(VAR_17->dev, "FLL enabled at %dHz->%dHz\n", VAR_19, VAR_20);

 VAR_21->fll_fref = VAR_19;
 VAR_21->fll_fout = VAR_20;

 return 0;
}
