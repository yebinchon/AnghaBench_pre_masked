
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdma_transfer_status_t ;
typedef int xdma_channel_t ;
struct xdma_request {scalar_t__ block_len; } ;
struct sc_pcminfo {struct sc_chinfo* chan; struct aic_softc* sc; } ;
struct sc_chinfo {int channel; scalar_t__ run; int buffer; } ;
struct aic_softc {int pos; int * xchan; struct xdma_request req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, xdma_transfer_status_t *VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct xdma_request *VAR_3;
 xdma_channel_t *VAR_4;
 struct sc_chinfo *VAR_5;
 struct aic_softc *VAR_6;
 int VAR_7;

 VAR_2 = VAR_0;
 VAR_6 = VAR_2->sc;
 VAR_5 = &VAR_2->chan[0];
 VAR_3 = &VAR_6->req;

 VAR_4 = VAR_6->xchan;

 VAR_7 = FUNC_1(VAR_5->buffer);

 VAR_6->pos += VAR_3->block_len;
 if (VAR_6->pos >= VAR_7)
  VAR_6->pos -= VAR_7;

 if (VAR_5->run)
  FUNC_0(VAR_5->channel);

 return (0);
}
