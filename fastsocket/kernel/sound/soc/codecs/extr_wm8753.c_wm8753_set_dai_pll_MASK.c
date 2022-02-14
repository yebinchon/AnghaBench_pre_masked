
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct _pll_div {int n; int k; int div2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct _pll_div*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_codec*,scalar_t__) ;
 int FUNC_2 (struct snd_soc_codec*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_8,
  int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 u16 VAR_12, VAR_13;
 int VAR_14;
 struct snd_soc_codec *VAR_15 = VAR_8->codec;

 if (VAR_9 < VAR_2 || VAR_9 > VAR_7)
  return -VAR_0;

 if (VAR_9 == VAR_2) {
  VAR_14 = 0;
  VAR_13 = 0x10;
  VAR_12 = FUNC_1(VAR_15, VAR_1) & 0xffef;
 } else {
  VAR_14 = 4;
  VAR_13 = 0x8;
  VAR_12 = FUNC_1(VAR_15, VAR_1) & 0xfff7;
 }

 if (!VAR_10 || !VAR_11) {

  FUNC_2(VAR_15, VAR_3 + VAR_14, 0x0026);
  FUNC_2(VAR_15, VAR_1, VAR_12);
  return 0;
 } else {
  u16 VAR_16 = 0;
  struct _pll_div VAR_17;

  FUNC_0(&VAR_17, VAR_11 * 8, VAR_10);



  VAR_16 = (VAR_17.n << 5) + ((VAR_17.k & 0x3c0000) >> 18);
  FUNC_2(VAR_15, VAR_4 + VAR_14, VAR_16);


  VAR_16 = (VAR_17.k & 0x03fe00) >> 9;
  FUNC_2(VAR_15, VAR_5 + VAR_14, VAR_16);


  VAR_16 = VAR_17.k & 0x0001ff;
  FUNC_2(VAR_15, VAR_6 + VAR_14, VAR_16);


  FUNC_2(VAR_15, VAR_3 + VAR_14, 0x0027 |
   (VAR_17.div2 << 3));
  FUNC_2(VAR_15, VAR_1, VAR_12 | VAR_13);
 }
 return 0;
}
