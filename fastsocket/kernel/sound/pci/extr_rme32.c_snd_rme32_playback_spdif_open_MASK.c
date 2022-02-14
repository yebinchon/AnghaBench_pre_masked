
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_9__ {int rates; int rate_max; int rate_min; } ;
struct snd_pcm_runtime {TYPE_4__ hw; } ;
struct rme32 {int rcreg; TYPE_3__* spdif_ctl; int card; int wcreg_spdif; int wcreg_spdif_stream; TYPE_1__* pci; scalar_t__ fullduplex_mode; int lock; struct snd_pcm_substream* playback_substream; scalar_t__ iobase; int wcreg; } ;
struct TYPE_8__ {int id; TYPE_2__* vd; } ;
struct TYPE_7__ {int access; } ;
struct TYPE_6__ {scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct rme32* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct rme32*,int*) ;
 int FUNC_5 (struct rme32*,struct snd_pcm_runtime*) ;
 TYPE_4__ VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_13)
{
 int VAR_14, VAR_15;
 struct rme32 *VAR_16 = FUNC_3(VAR_13);
 struct snd_pcm_runtime *VAR_17 = VAR_13->runtime;

 FUNC_2(VAR_13);

 FUNC_6(&VAR_16->lock);
 if (VAR_16->playback_substream != ((void*)0)) {
  FUNC_7(&VAR_16->lock);
  return -VAR_0;
 }
 VAR_16->wcreg &= ~VAR_4;
 FUNC_8(VAR_16->wcreg, VAR_16->iobase + VAR_2);
 VAR_16->playback_substream = VAR_13;
 FUNC_7(&VAR_16->lock);

 if (VAR_16->fullduplex_mode)
  VAR_17->hw = VAR_11;
 else
  VAR_17->hw = VAR_12;
 if (VAR_16->pci->device == VAR_1) {
  VAR_17->hw.rates |= VAR_8 | VAR_9 | VAR_10;
  VAR_17->hw.rate_max = 96000;
 }
 if ((VAR_16->rcreg & VAR_3) &&
     (VAR_14 = FUNC_4(VAR_16, &VAR_15)) > 0) {

  VAR_17->hw.rates = FUNC_1(VAR_14);
  VAR_17->hw.rate_min = VAR_14;
  VAR_17->hw.rate_max = VAR_14;
 }

 FUNC_5(VAR_16, VAR_17);

 VAR_16->wcreg_spdif_stream = VAR_16->wcreg_spdif;
 VAR_16->spdif_ctl->vd[0].access &= ~VAR_5;
 FUNC_0(VAR_16->card, VAR_7 |
         VAR_6, &VAR_16->spdif_ctl->id);
 return 0;
}
