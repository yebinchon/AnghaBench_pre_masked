
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcd_conf {int nbytes; int nmajor; } ;
struct sc_pcminfo {struct sc_info* sc; struct sc_chinfo* chan; } ;
struct sc_info {scalar_t__ pos; scalar_t__ dma_size; struct tcd_conf* tcd; } ;
struct sc_chinfo {int channel; scalar_t__ run; } ;


 int FUNC_0 (int ) ;

uint32_t
FUNC_1(void *VAR_0, int VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct sc_chinfo *VAR_3;
 struct sc_info *VAR_4;
 struct tcd_conf *VAR_5;

 VAR_2 = VAR_0;
 VAR_3 = &VAR_2->chan[0];

 VAR_4 = VAR_2->sc;
 VAR_5 = VAR_4->tcd;

 VAR_4->pos += (VAR_5->nbytes * VAR_5->nmajor);
 if (VAR_4->pos >= VAR_4->dma_size)
  VAR_4->pos -= VAR_4->dma_size;

 if (VAR_3->run)
  FUNC_0(VAR_3->channel);

 return (0);
}
