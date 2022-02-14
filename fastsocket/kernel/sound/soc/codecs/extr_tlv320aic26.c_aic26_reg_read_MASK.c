
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
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int*,int,int*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct snd_soc_codec *VAR_2,
       unsigned int VAR_3)
{
 struct aic26 *VAR_4 = VAR_2->private_data;
 u16 *VAR_5 = VAR_2->reg_cache;
 u16 VAR_6, VAR_7;
 u8 VAR_8[2];
 int VAR_9;

 if (VAR_3 >= VAR_0) {
  FUNC_1(1);
  return 0;
 }



 VAR_6 = FUNC_0(VAR_3);
 VAR_8[0] = (VAR_6 >> 8) & 0xff;
 VAR_8[1] = VAR_6 & 0xff;
 VAR_9 = FUNC_3(VAR_4->spi, VAR_8, 2, VAR_8, 2);
 if (VAR_9) {
  FUNC_2(&VAR_4->spi->dev, "AIC26 reg read error\n");
  return -VAR_1;
 }
 VAR_7 = (VAR_8[0] << 8) | VAR_8[1];


 VAR_5[VAR_3] = VAR_7;
 return VAR_7;
}
