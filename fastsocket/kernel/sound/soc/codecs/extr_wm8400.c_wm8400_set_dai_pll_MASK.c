
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400_priv {unsigned int fll_in; unsigned int fll_out; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8400_priv* private_data; } ;
struct fll_factors {int fratio; int freq_ref; int k; int n; int outdiv; } ;
typedef int factors ;


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
 int FUNC_0 (struct wm8400_priv*,struct fll_factors*,unsigned int,unsigned int) ;
 int FUNC_1 (struct fll_factors*,int ,int) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_12, int VAR_13,
         unsigned int VAR_14, unsigned int VAR_15)
{
 struct snd_soc_codec *VAR_16 = VAR_12->codec;
 struct wm8400_priv *VAR_17 = VAR_16->private_data;
 struct fll_factors VAR_18;
 int VAR_19;
 u16 VAR_20;

 if (VAR_14 == VAR_17->fll_in && VAR_15 == VAR_17->fll_out)
  return 0;

 if (VAR_15) {
  VAR_19 = FUNC_0(VAR_17, &VAR_18, VAR_14, VAR_15);
  if (VAR_19 != 0)
   return VAR_19;
 } else {



  FUNC_1(&VAR_18, 0, sizeof(VAR_18));
 }

 VAR_17->fll_out = VAR_15;
 VAR_17->fll_in = VAR_14;


 VAR_20 = FUNC_2(VAR_16, VAR_11);
 VAR_20 &= ~VAR_4;
 FUNC_3(VAR_16, VAR_11, VAR_20);

 VAR_20 = FUNC_2(VAR_16, VAR_0);
 VAR_20 &= ~VAR_7;
 FUNC_3(VAR_16, VAR_0, VAR_20);

 if (!VAR_15)
  return 0;

 VAR_20 &= ~(VAR_9 | VAR_6);
 VAR_20 |= VAR_5 | VAR_18.fratio;
 VAR_20 |= VAR_18.freq_ref << VAR_10;
 FUNC_3(VAR_16, VAR_0, VAR_20);

 FUNC_3(VAR_16, VAR_1, VAR_18.k);
 FUNC_3(VAR_16, VAR_2, VAR_18.n);

 VAR_20 = FUNC_2(VAR_16, VAR_3);
 VAR_20 &= VAR_8;
 VAR_20 |= VAR_18.outdiv;
 FUNC_3(VAR_16, VAR_3, VAR_20);

 return 0;
}
