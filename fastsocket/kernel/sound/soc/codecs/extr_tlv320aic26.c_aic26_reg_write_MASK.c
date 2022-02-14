
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_soc_codec {int* reg_cache; struct aic26* private_data; } ;
struct aic26 {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_codec *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5)
{
 struct aic26 *VAR_6 = VAR_3->private_data;
 u16 *VAR_7 = VAR_3->reg_cache;
 u16 VAR_8;
 u8 VAR_9[4];
 int VAR_10;

 if (VAR_4 >= VAR_0) {
  FUNC_1(1);
  return -VAR_1;
 }



 VAR_8 = FUNC_0(VAR_4);
 VAR_9[0] = (VAR_8 >> 8) & 0xff;
 VAR_9[1] = VAR_8 & 0xff;
 VAR_9[2] = VAR_5 >> 8;
 VAR_9[3] = VAR_5;
 VAR_10 = FUNC_3(VAR_6->spi, VAR_9, 4);
 if (VAR_10) {
  FUNC_2(&VAR_6->spi->dev, "AIC26 reg read error\n");
  return -VAR_2;
 }


 VAR_7[VAR_4] = VAR_5;
 return 0;
}
