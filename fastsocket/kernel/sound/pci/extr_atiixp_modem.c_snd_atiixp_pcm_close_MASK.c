
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct atiixp_modem {int reg_lock; } ;
struct atiixp_dma {scalar_t__ opened; int * substream; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_dma ) (struct atiixp_modem*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct atiixp_modem* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct atiixp_modem*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
    struct atiixp_dma *VAR_2)
{
 struct atiixp_modem *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(!VAR_2->ops || !VAR_2->ops->enable_dma))
  return -VAR_0;
 FUNC_2(&VAR_3->reg_lock);
 VAR_2->ops->enable_dma(VAR_3, 0);
 FUNC_3(&VAR_3->reg_lock);
 VAR_2->substream = ((void*)0);
 VAR_2->opened = 0;
 return 0;
}
