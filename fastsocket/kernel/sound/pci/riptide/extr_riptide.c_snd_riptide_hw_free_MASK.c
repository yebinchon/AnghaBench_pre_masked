
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_riptide {struct cmdif* cif; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int * area; } ;
struct pcmhw {int source; int* intdec; TYPE_1__ sgdlist; int * lbuspath; } ;
struct cmdif {int dummy; } ;


 int FUNC_0 (struct cmdif*,int,int *) ;
 struct pcmhw* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_riptide* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_riptide *VAR_1 = FUNC_4(VAR_0);
 struct pcmhw *VAR_2 = FUNC_1(VAR_0);
 struct cmdif *VAR_3 = VAR_1->cif;

 if (VAR_3 && VAR_2) {
  if (VAR_2->lbuspath)
   FUNC_0(VAR_3, VAR_2->source, VAR_2->lbuspath);
  VAR_2->lbuspath = ((void*)0);
  VAR_2->source = 0xff;
  VAR_2->intdec[0] = 0xff;
  VAR_2->intdec[1] = 0xff;

  if (VAR_2->sgdlist.area) {
   FUNC_2(&VAR_2->sgdlist);
   VAR_2->sgdlist.area = ((void*)0);
  }
 }
 return FUNC_3(VAR_0);
}
