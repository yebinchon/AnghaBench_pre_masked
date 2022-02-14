
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8900_priv {unsigned int fll_in; unsigned int fll_out; } ;
struct snd_soc_codec {struct wm8900_priv* private_data; } ;
struct _fll_div {unsigned int fll_ratio; int n; int fllclk_div; int k; scalar_t__ fll_slow_lock_ref; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_0 (struct _fll_div*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_12,
 int VAR_13, unsigned int VAR_14, unsigned int VAR_15)
{
 struct wm8900_priv *VAR_16 = VAR_12->private_data;
 struct _fll_div VAR_17;
 unsigned int VAR_18;

 if (VAR_16->fll_in == VAR_14 && VAR_16->fll_out == VAR_15)
  return 0;


 VAR_18 = FUNC_1(VAR_12, VAR_10);
 FUNC_2(VAR_12, VAR_10,
       VAR_18 & (~VAR_11));


 if (!VAR_14 || !VAR_15) {
  VAR_18 = FUNC_1(VAR_12, VAR_0);
  FUNC_2(VAR_12, VAR_0,
        VAR_18 & (~VAR_1));

  VAR_18 = FUNC_1(VAR_12, VAR_2);
  FUNC_2(VAR_12, VAR_2,
        VAR_18 & (~VAR_3));

  VAR_16->fll_in = VAR_14;
  VAR_16->fll_out = VAR_15;

  return 0;
 }

 if (FUNC_0(&VAR_17, VAR_14, VAR_15) != 0)
  goto reenable;

 VAR_16->fll_in = VAR_14;
 VAR_16->fll_out = VAR_15;



 FUNC_2(VAR_12, VAR_2,
       VAR_17.fll_ratio | VAR_3);

 FUNC_2(VAR_12, VAR_6, VAR_17.n >> 5);
 FUNC_2(VAR_12, VAR_7,
       (VAR_17.fllclk_div << 6) | (VAR_17.n & 0x1f));

 if (VAR_17.k) {
  FUNC_2(VAR_12, VAR_4,
        (VAR_17.k >> 8) | 0x100);
  FUNC_2(VAR_12, VAR_5, VAR_17.k & 0xff);
 } else
  FUNC_2(VAR_12, VAR_4, 0);

 if (VAR_17.fll_slow_lock_ref)
  FUNC_2(VAR_12, VAR_8,
        VAR_9);
 else
  FUNC_2(VAR_12, VAR_8, 0);

 VAR_18 = FUNC_1(VAR_12, VAR_10);
 FUNC_2(VAR_12, VAR_10,
       VAR_18 | VAR_11);

reenable:
 VAR_18 = FUNC_1(VAR_12, VAR_0);
 FUNC_2(VAR_12, VAR_0,
       VAR_18 | VAR_1);

 return 0;
}
