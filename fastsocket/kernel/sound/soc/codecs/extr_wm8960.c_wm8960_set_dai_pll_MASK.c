
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct _pll_div {int pre_div; int n; int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int,struct _pll_div*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_6,
  int VAR_7, unsigned int VAR_8, unsigned int VAR_9)
{
 struct snd_soc_codec *VAR_10 = VAR_6->codec;
 u16 VAR_11;
 static struct _pll_div VAR_12;
 int VAR_13;

 if (VAR_8 && VAR_9) {
  VAR_13 = FUNC_1(VAR_8, VAR_9, &VAR_12);
  if (VAR_13 != 0)
   return VAR_13;
 }



 FUNC_3(VAR_10, VAR_0,
       FUNC_2(VAR_10, VAR_0) & ~1);
 FUNC_3(VAR_10, VAR_5,
       FUNC_2(VAR_10, VAR_5) & ~1);

 if (!VAR_8 || !VAR_9)
  return 0;

 VAR_11 = FUNC_2(VAR_10, VAR_1) & ~0x3f;
 VAR_11 |= VAR_12.pre_div << 4;
 VAR_11 |= VAR_12.n;

 if (VAR_12.k) {
  VAR_11 |= 0x20;

  FUNC_3(VAR_10, VAR_2, (VAR_12.k >> 18) & 0x3f);
  FUNC_3(VAR_10, VAR_3, (VAR_12.k >> 9) & 0x1ff);
  FUNC_3(VAR_10, VAR_4, VAR_12.k & 0x1ff);
 }
 FUNC_3(VAR_10, VAR_1, VAR_11);


 FUNC_3(VAR_10, VAR_5,
       FUNC_2(VAR_10, VAR_5) | 1);
 FUNC_0(250);
 FUNC_3(VAR_10, VAR_0,
       FUNC_2(VAR_10, VAR_0) | 1);

 return 0;
}
