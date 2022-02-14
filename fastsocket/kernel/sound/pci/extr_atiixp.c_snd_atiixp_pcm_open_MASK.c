
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int formats; int rates; } ;
struct snd_pcm_runtime {struct atiixp_dma* private_data; TYPE_3__ hw; } ;
struct atiixp_dma {int opened; int ac97_pcm_type; TYPE_2__* ops; struct snd_pcm_substream* substream; } ;
struct atiixp {int reg_lock; TYPE_1__** pcms; } ;
struct TYPE_5__ {int (* enable_dma ) (struct atiixp*,int) ;} ;
struct TYPE_4__ {int rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;
 struct atiixp* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct atiixp*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
          struct atiixp_dma *VAR_6, int VAR_7)
{
 struct atiixp *VAR_8 = FUNC_3(VAR_5);
 struct snd_pcm_runtime *VAR_9 = VAR_5->runtime;
 int VAR_10;

 if (FUNC_0(!VAR_6->ops || !VAR_6->ops->enable_dma))
  return -VAR_1;

 if (VAR_6->opened)
  return -VAR_0;
 VAR_6->substream = VAR_5;
 VAR_9->hw = VAR_4;
 VAR_6->ac97_pcm_type = VAR_7;
 if (VAR_7 >= 0) {
  VAR_9->hw.rates = VAR_8->pcms[VAR_7]->rates;
  FUNC_2(VAR_9);
 } else {

  VAR_9->hw.formats = VAR_2;
 }
 if ((VAR_10 = FUNC_1(VAR_9, VAR_3)) < 0)
  return VAR_10;
 VAR_9->private_data = VAR_6;


 FUNC_4(&VAR_8->reg_lock);
 VAR_6->ops->enable_dma(VAR_8, 1);
 FUNC_5(&VAR_8->reg_lock);
 VAR_6->opened = 1;

 return 0;
}
