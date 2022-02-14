
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct atmel_ssc_info {int dir_mask; int lock; TYPE_2__* ssc; } ;
struct TYPE_6__ {size_t id; } ;
struct TYPE_5__ {int regs; } ;
struct TYPE_4__ {TYPE_3__* cpu_dai; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 struct snd_soc_pcm_runtime* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct atmel_ssc_info* VAR_5 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
        struct snd_soc_dai *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = FUNC_1(VAR_6);
 struct atmel_ssc_info *VAR_9 = &VAR_5[VAR_8->dai->cpu_dai->id];
 int VAR_10;

 FUNC_0("atmel_ssc_startup: SSC_SR=0x%u\n",
  FUNC_4(VAR_9->ssc->regs, VAR_2));

 if (VAR_6->stream == VAR_1)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_3;

 FUNC_2(&VAR_9->lock);
 if (VAR_9->dir_mask & VAR_10) {
  FUNC_3(&VAR_9->lock);
  return -VAR_0;
 }
 VAR_9->dir_mask |= VAR_10;
 FUNC_3(&VAR_9->lock);

 return 0;
}
