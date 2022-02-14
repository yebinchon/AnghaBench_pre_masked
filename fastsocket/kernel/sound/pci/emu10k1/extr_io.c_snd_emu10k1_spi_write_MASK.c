
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1 {int spi_lock; TYPE_1__* card_capabilities; } ;
struct TYPE_2__ {scalar_t__ ca0108_chip; } ;


 unsigned int FUNC_0 (struct snd_emu10k1*,unsigned int,int ) ;
 int FUNC_1 (struct snd_emu10k1*,unsigned int,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

int FUNC_5(struct snd_emu10k1 * VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6, VAR_7;
 int VAR_8 = 0;


 FUNC_2(&VAR_0->spi_lock);
 if (VAR_0->card_capabilities->ca0108_chip)
  VAR_4 = 0x3c;
 else {


  VAR_8 = 1;
  goto spi_write_exit;
 }
 if (VAR_1 > 0xffff) {

  VAR_8 = 1;
  goto spi_write_exit;
 }

 VAR_5 = FUNC_0(VAR_0, VAR_4, 0);
 VAR_2 = (VAR_5 & ~0x3ffff) | 0x20000;
 VAR_3 = VAR_2 | 0x10000;
 FUNC_1(VAR_0, VAR_4, 0, VAR_2 | VAR_1);
 VAR_5 = FUNC_0(VAR_0, VAR_4, 0);
 FUNC_1(VAR_0, VAR_4, 0, VAR_3 | VAR_1);
 VAR_7 = 1;

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  FUNC_4(10);
  VAR_5 = FUNC_0(VAR_0, VAR_4, 0);
  if (!(VAR_5 & 0x10000)) {
   VAR_7 = 0;
   break;
  }
 }
 if (VAR_7) {

  VAR_8 = 1;
  goto spi_write_exit;
 }
 FUNC_1(VAR_0, VAR_4, 0, VAR_2 | VAR_1);
 VAR_5 = FUNC_0(VAR_0, VAR_4, 0);
 VAR_8 = 0;
spi_write_exit:
 FUNC_3(&VAR_0->spi_lock);
 return VAR_8;
}
