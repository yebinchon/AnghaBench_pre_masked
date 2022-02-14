
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {char* tx_buf; char* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct snd_soc_codec {int control_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_soc_codec *VAR_4,
      unsigned int VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 int VAR_8;

 struct spi_transfer VAR_9 = {
  .tx_buf = VAR_6,
  .rx_buf = VAR_7,
  .len = VAR_1,
 };
 struct spi_message VAR_10;

 VAR_6[0] = (VAR_0 << 1) | VAR_2;
 VAR_6[1] = VAR_5;
 VAR_6[2] = 0;

 FUNC_1(&VAR_10);
 FUNC_0(&VAR_9, &VAR_10);
 VAR_8 = FUNC_2(VAR_4->control_data, &VAR_10);
 if (VAR_8 == 0)
  return VAR_7[2];
 else
  return -VAR_3;
}
