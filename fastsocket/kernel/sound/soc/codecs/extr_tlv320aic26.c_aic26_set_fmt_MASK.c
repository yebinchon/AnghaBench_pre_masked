
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct aic26* private_data; } ;
struct aic26 {int master; TYPE_1__* spi; int datfm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 unsigned int VAR_5 ;


 unsigned int VAR_6 ;

 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_7, unsigned int VAR_8)
{
 struct snd_soc_codec *VAR_9 = VAR_7->codec;
 struct aic26 *VAR_10 = VAR_9->private_data;

 FUNC_0(&VAR_10->spi->dev, "aic26_set_fmt(dai=%p, fmt==%i)\n",
  VAR_7, VAR_8);


 switch (VAR_8 & VAR_6) {
 case 133: VAR_10->master = 1; break;
 case 132: VAR_10->master = 0; break;
 default:
  FUNC_0(&VAR_10->spi->dev, "bad master\n"); return -VAR_4;
 }


 switch (VAR_8 & VAR_5) {
 case 130: VAR_10->datfm = VAR_1; break;
 case 131: VAR_10->datfm = VAR_0; break;
 case 128: VAR_10->datfm = VAR_3; break;
 case 129: VAR_10->datfm = VAR_2; break;
 default:
  FUNC_0(&VAR_10->spi->dev, "bad format\n"); return -VAR_4;
 }

 return 0;
}
