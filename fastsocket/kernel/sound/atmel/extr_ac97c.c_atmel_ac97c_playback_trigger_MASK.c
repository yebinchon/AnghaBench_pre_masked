
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int tx_chan; } ;
struct atmel_ac97c {int opened; TYPE_1__ dma; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 unsigned long FUNC_0 (struct atmel_ac97c*,int ) ;
 int FUNC_1 (struct atmel_ac97c*,int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct atmel_ac97c* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_5(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct atmel_ac97c *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5, VAR_1);

 switch (VAR_4) {
 case 132:
 case 131:
 case 130:
  VAR_7 = FUNC_2(VAR_5->dma.tx_chan);
  if (VAR_7)
   goto out;
  VAR_6 |= VAR_0;
  break;
 case 133:
 case 128:
 case 129:
  FUNC_3(VAR_5->dma.tx_chan);
  if (VAR_5->opened <= 1)
   VAR_6 &= ~VAR_0;
  break;
 default:
  VAR_7 = -VAR_2;
  goto out;
 }

 FUNC_1(VAR_5, VAR_1, VAR_6);
out:
 return VAR_7;
}
