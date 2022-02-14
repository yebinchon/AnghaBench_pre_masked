
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1 {int tos_link; scalar_t__ port; TYPE_1__* card_capabilities; scalar_t__ audigy; } ;
struct TYPE_2__ {scalar_t__ ca0108_chip; scalar_t__ ca0151_chip; scalar_t__ i2c_adc; scalar_t__ emu_model; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_emu10k1 *VAR_6)
{



 FUNC_1(FUNC_0(VAR_6->port + VAR_1) | VAR_2, VAR_6->port + VAR_1);


 if (VAR_6->card_capabilities->emu_model) {
  ;
 } else if (VAR_6->card_capabilities->i2c_adc) {
  ;
 } else if (VAR_6->audigy) {
  FUNC_1(FUNC_0(VAR_6->port + VAR_0) & ~0x44, VAR_6->port + VAR_0);

  if (VAR_6->card_capabilities->ca0151_chip) {



   FUNC_1(FUNC_0(VAR_6->port + VAR_0) | 0x0040, VAR_6->port + VAR_0);
  } else if (VAR_6->card_capabilities->ca0108_chip) {

   FUNC_1(FUNC_0(VAR_6->port + VAR_0) | 0x0060, VAR_6->port + VAR_0);
  } else {

   FUNC_1(FUNC_0(VAR_6->port + VAR_0) | 0x0080, VAR_6->port + VAR_0);
  }
 }
 FUNC_2(VAR_6, VAR_5);
}
