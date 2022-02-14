
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct snd_soc_codec {int* reg_cache; int reg_cache_size; struct spi_device* control_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_1)
{
 int VAR_2;
 u8 *VAR_3 = VAR_1->reg_cache;
 struct spi_device *VAR_4 = VAR_1->control_data;

 for (VAR_2 = 0; VAR_2 < VAR_1->reg_cache_size; VAR_2++) {
  int VAR_5 = FUNC_1(VAR_4, VAR_2 | VAR_0);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_4->dev, "SPI write failure\n");
   return VAR_5;
  }

  VAR_3[VAR_2] = VAR_5;
 }

 return 0;
}
