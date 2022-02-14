
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct TYPE_2__ {int pre_div; int n; int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
  int VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 struct snd_soc_codec *VAR_11 = VAR_7->codec;
 u16 VAR_12;

 if (VAR_9 == 0 || VAR_10 == 0) {

  VAR_12 = FUNC_1(VAR_11, VAR_0);
  FUNC_2(VAR_11, VAR_0, VAR_12 & 0x0ff);


  VAR_12 = FUNC_1(VAR_11, VAR_5);
  FUNC_2(VAR_11, VAR_5, VAR_12 & 0x1df);
  return 0;
 }

 FUNC_0(VAR_10*4, VAR_9);

 FUNC_2(VAR_11, VAR_4, (VAR_6.pre_div << 4) | VAR_6.n);
 FUNC_2(VAR_11, VAR_1, VAR_6.k >> 18);
 FUNC_2(VAR_11, VAR_2, (VAR_6.k >> 9) & 0x1ff);
 FUNC_2(VAR_11, VAR_3, VAR_6.k & 0x1ff);
 VAR_12 = FUNC_1(VAR_11, VAR_5);
 FUNC_2(VAR_11, VAR_5, VAR_12 | 0x020);


 VAR_12 = FUNC_1(VAR_11, VAR_0);
 FUNC_2(VAR_11, VAR_0, VAR_12 | 0x100);

 return 0;
}
