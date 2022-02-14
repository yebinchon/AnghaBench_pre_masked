
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcd_conf {int nbytes; int nmajor; int smod; int soff; int ssize; int dsize; scalar_t__ dlast_sga; scalar_t__ slast; scalar_t__ doff; scalar_t__ esg; scalar_t__ dmod; scalar_t__ daddr; int saddr; struct sc_pcminfo* ih_user; int ih; int channel; } ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {struct tcd_conf* tcd; TYPE_1__* edma_sc; int * res; int buf_base_phys; int edma_chnum; } ;
struct TYPE_2__ {int (* dma_setup ) (TYPE_1__*,struct tcd_conf*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tcd_conf* FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct tcd_conf*) ;

__attribute__((used)) static int
FUNC_3(struct sc_pcminfo *VAR_5)
{
 struct tcd_conf *VAR_6;
 struct sc_info *VAR_7;

 VAR_7 = VAR_5->sc;

 VAR_6 = FUNC_0(sizeof(struct tcd_conf), VAR_1, VAR_2 | VAR_3);
 VAR_6->channel = VAR_7->edma_chnum;
 VAR_6->ih = VAR_4;
 VAR_6->ih_user = VAR_5;
 VAR_6->saddr = VAR_7->buf_base_phys;
 VAR_6->daddr = FUNC_1(VAR_7->res[0]) + VAR_0;





 VAR_6->nbytes = 64;

 VAR_6->nmajor = 512;
 VAR_6->smod = 17;
 VAR_6->dmod = 0;
 VAR_6->esg = 0;
 VAR_6->soff = 0x4;
 VAR_6->doff = 0;
 VAR_6->ssize = 0x2;
 VAR_6->dsize = 0x2;
 VAR_6->slast = 0;
 VAR_6->dlast_sga = 0;

 VAR_7->tcd = VAR_6;

 VAR_7->edma_sc->dma_setup(VAR_7->edma_sc, VAR_7->tcd);

 return (0);
}
