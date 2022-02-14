
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int tmp ;
struct spi_device {int dev; } ;
struct snd_soc_codec {unsigned int* reg_cache; unsigned int reg_cache_size; struct spi_device* control_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct spi_device*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_4, unsigned int VAR_5,
       unsigned int VAR_6)
{
 u8 *VAR_7 = VAR_4->reg_cache;
 struct spi_device *VAR_8 = VAR_4->control_data;

 if (VAR_5 >= VAR_4->reg_cache_size)
  return -VAR_2;

 VAR_5 &= VAR_0;
 VAR_5 |= VAR_1;


 if (VAR_7[VAR_5] != VAR_6) {
  u8 VAR_9[2] = { VAR_5, VAR_6 };
  if (FUNC_1(VAR_8, VAR_9, sizeof(VAR_9))) {
   FUNC_0(&VAR_8->dev, "SPI write failed\n");
   return -VAR_3;
  }

  VAR_7[VAR_5] = VAR_6;
 }

 return 0;
}
