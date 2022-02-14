
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_at73c213 {int lock; TYPE_2__* spi; TYPE_1__* ssc; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct snd_at73c213* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_8,
       int VAR_9)
{
 struct snd_at73c213 *VAR_10 = FUNC_2(VAR_8);
 int VAR_11 = 0;

 FUNC_3(&VAR_10->lock);

 switch (VAR_9) {
 case 129:
  FUNC_5(VAR_10->ssc->regs, VAR_3, FUNC_0(VAR_4));
  FUNC_5(VAR_10->ssc->regs, VAR_5, FUNC_0(VAR_7));
  break;
 case 128:
  FUNC_5(VAR_10->ssc->regs, VAR_5, FUNC_0(VAR_6));
  FUNC_5(VAR_10->ssc->regs, VAR_1, FUNC_0(VAR_2));
  break;
 default:
  FUNC_1(&VAR_10->spi->dev, "spurious command %x\n", VAR_9);
  VAR_11 = -VAR_0;
  break;
 }

 FUNC_4(&VAR_10->lock);

 return VAR_11;
}
