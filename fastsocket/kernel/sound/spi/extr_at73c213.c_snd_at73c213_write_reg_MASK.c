
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct spi_transfer {int len; size_t* tx_buf; int rx_buf; int cs_change; } ;
struct spi_message {int dummy; } ;
struct snd_at73c213 {size_t* spi_wbuffer; size_t* reg_image; int spi; int spi_rbuffer; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static int
FUNC_3(struct snd_at73c213 *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct spi_message VAR_3;
 struct spi_transfer VAR_4 = {
  .len = 2,
  .cs_change = 0,
 };
 int VAR_5;

 FUNC_1(&VAR_3);

 VAR_0->spi_wbuffer[0] = VAR_1;
 VAR_0->spi_wbuffer[1] = VAR_2;

 VAR_4.tx_buf = VAR_0->spi_wbuffer;
 VAR_4.rx_buf = VAR_0->spi_rbuffer;
 FUNC_0(&VAR_4, &VAR_3);

 VAR_5 = FUNC_2(VAR_0->spi, &VAR_3);

 if (!VAR_5)
  VAR_0->reg_image[VAR_1] = VAR_2;

 return VAR_5;
}
