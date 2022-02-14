
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct camelot_pcm {int txid; int * tx_ss; int * rx_ss; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {size_t id; } ;


 scalar_t__ VAR_0 ;
 struct camelot_pcm* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct camelot_pcm *VAR_4 = &VAR_1[VAR_3->dai->cpu_dai->id];
 int VAR_5 = VAR_2->stream == VAR_0 ? 0:1;
 int VAR_6;

 VAR_6 = (VAR_5) ? VAR_4->txid + 2 : VAR_4->txid;

 if (VAR_5)
  VAR_4->rx_ss = ((void*)0);
 else
  VAR_4->tx_ss = ((void*)0);

 FUNC_0(VAR_6 + 1);
 FUNC_0(VAR_6);

 return 0;
}
