
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int u8 ;
struct spi_transfer {int* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct snd_soc_codec {unsigned int* reg_cache; int control_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_2, unsigned int VAR_3,
  unsigned int VAR_4)
{
 u8 *VAR_5 = VAR_2->reg_cache;
 int VAR_6 = 0;

 if (VAR_4 != VAR_5[VAR_3]) {
  uint8_t VAR_7[VAR_1];
  struct spi_transfer VAR_8 = {
   .tx_buf = VAR_7,
   .len = VAR_1,
  };
  struct spi_message VAR_9;

  VAR_7[0] = VAR_0 << 1;
  VAR_7[1] = VAR_3;
  VAR_7[2] = VAR_4;
  FUNC_1(&VAR_9);
  FUNC_0(&VAR_8, &VAR_9);
  VAR_6 = FUNC_2(VAR_2->control_data, &VAR_9);
  if (VAR_6 == 0)
   VAR_5[VAR_3] = VAR_4;
 }

 return VAR_6;
}
