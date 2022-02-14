
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_state {unsigned int in; unsigned int out; } ;
struct wm8580_priv {struct pll_state b; struct pll_state a; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8580_priv* private_data; } ;
struct _pll_div {int k; int n; int prescale; int postscale; int freqmode; } ;
typedef int pll_div ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct _pll_div*,int ,int) ;
 int FUNC_1 (struct _pll_div*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct snd_soc_codec*,scalar_t__) ;
 int FUNC_3 (struct snd_soc_codec*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_8,
  int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 int VAR_12;
 struct snd_soc_codec *VAR_13 = VAR_8->codec;
 struct wm8580_priv *VAR_14 = VAR_13->private_data;
 struct pll_state *VAR_15;
 struct _pll_div VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;




 FUNC_0(&VAR_16, 0, sizeof(VAR_16));

 switch (VAR_9) {
 case 129:
  VAR_15 = &VAR_14->a;
  VAR_12 = 0;
  VAR_18 = VAR_6;
  break;
 case 128:
  VAR_15 = &VAR_14->b;
  VAR_12 = 4;
  VAR_18 = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_10 && VAR_11) {
  VAR_19 = FUNC_1(&VAR_16, VAR_11, VAR_10);
  if (VAR_19 != 0)
   return VAR_19;
 }

 VAR_15->in = VAR_10;
 VAR_15->out = VAR_11;




 VAR_17 = FUNC_2(VAR_13, VAR_5);
 FUNC_3(VAR_13, VAR_5, VAR_17 | VAR_18);

 if (!VAR_10 || !VAR_11)
  return 0;

 FUNC_3(VAR_13, VAR_1 + VAR_12, VAR_16.k & 0x1ff);
 FUNC_3(VAR_13, VAR_2 + VAR_12, (VAR_16.k >> 9) & 0x1ff);
 FUNC_3(VAR_13, VAR_3 + VAR_12,
       (VAR_16.k >> 18 & 0xf) | (VAR_16.n << 4));

 VAR_17 = FUNC_2(VAR_13, VAR_4 + VAR_12);
 VAR_17 &= ~0x1b;
 VAR_17 |= VAR_16.prescale | VAR_16.postscale << 1 |
  VAR_16.freqmode << 3;

 FUNC_3(VAR_13, VAR_4 + VAR_12, VAR_17);


 VAR_17 = FUNC_2(VAR_13, VAR_5);
 FUNC_3(VAR_13, VAR_5, VAR_17 & ~VAR_18);

 return 0;
}
