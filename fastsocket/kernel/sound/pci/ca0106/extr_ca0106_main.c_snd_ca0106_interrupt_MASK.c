
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_ca0106_channel {TYPE_1__* epcm; scalar_t__ use; } ;
struct TYPE_5__ {unsigned int ipr_tx; unsigned int ipr_rx; int tx_enable; int rx_enable; int (* interrupt_disable ) (TYPE_2__*,int) ;int (* interrupt ) (TYPE_2__*,unsigned int) ;scalar_t__ dev_id; } ;
struct snd_ca0106 {scalar_t__ port; TYPE_2__ midi; struct snd_ca0106_channel* capture_channels; struct snd_ca0106_channel* playback_channels; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int substream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 unsigned int FUNC_2 (struct snd_ca0106*,int ,int ) ;
 int FUNC_3 (struct snd_ca0106*,int ,int ,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 unsigned int VAR_6;

 struct snd_ca0106 *VAR_7 = VAR_5;
 int VAR_8;
 int VAR_9;
        unsigned int VAR_10;
 struct snd_ca0106_channel *VAR_11;

 VAR_6 = FUNC_0(VAR_7->port + VAR_1);
 if (! VAR_6)
  return VAR_3;

        VAR_10 = FUNC_2(VAR_7, VAR_0, 0);






        VAR_9 = 0x11;
 for(VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_11 = &(VAR_7->playback_channels[VAR_8]);
  if (VAR_10 & VAR_9) {

   if(VAR_11->use) {
    FUNC_4(VAR_11->epcm->substream);

                        }
  }


  VAR_9 <<= 1;
 }
        VAR_9 = 0x110000;
 for(VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_11 = &(VAR_7->capture_channels[VAR_8]);
  if (VAR_10 & VAR_9) {

   if(VAR_11->use) {
    FUNC_4(VAR_11->epcm->substream);

                        }
  }


  VAR_9 <<= 1;
 }

        FUNC_3(VAR_7, VAR_0, 0, VAR_10);

 if (VAR_7->midi.dev_id &&
     (VAR_6 & (VAR_7->midi.ipr_tx|VAR_7->midi.ipr_rx))) {
  if (VAR_7->midi.interrupt)
   VAR_7->midi.interrupt(&VAR_7->midi, VAR_6);
  else
   VAR_7->midi.interrupt_disable(&VAR_7->midi, VAR_7->midi.tx_enable | VAR_7->midi.rx_enable);
 }


 FUNC_1(VAR_6, VAR_7->port+VAR_1);

 return VAR_2;
}
