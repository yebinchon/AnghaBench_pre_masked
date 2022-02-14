
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int chan; } ;
struct atmel_abdac {int sample_clk; TYPE_1__ dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_abdac*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct atmel_abdac* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct atmel_abdac *VAR_6 = FUNC_6(VAR_4);
 int VAR_7 = 0;

 switch (VAR_5) {
 case 132:
 case 131:
 case 130:
  FUNC_2(VAR_6->sample_clk);
  VAR_7 = FUNC_4(VAR_6->dma.chan);
  if (VAR_7)
   goto out;
  FUNC_3(VAR_6, VAR_0, FUNC_0(VAR_3));
  break;
 case 133:
 case 128:
 case 129:
  FUNC_5(VAR_6->dma.chan);
  FUNC_3(VAR_6, VAR_1, 0);
  FUNC_3(VAR_6, VAR_0, 0);
  FUNC_1(VAR_6->sample_clk);
  break;
 default:
  VAR_7 = -VAR_2;
  break;
 }
out:
 return VAR_7;
}
