
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct aic26* private_data; } ;
struct aic26 {unsigned int mclk; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct snd_soc_dai*,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
       int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_1->codec;
 struct aic26 *VAR_6 = VAR_5->private_data;

 FUNC_0(&VAR_6->spi->dev, "aic26_set_sysclk(dai=%p, clk_id==%i,"
  " freq=%i, dir=%i)\n",
  VAR_1, VAR_2, VAR_3, VAR_4);


 if ((VAR_3 < 2000000) || (VAR_3 > 50000000))
  return -VAR_0;

 VAR_6->mclk = VAR_3;
 return 0;
}
