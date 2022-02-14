
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_pcminfo {struct aic_softc* sc; struct sc_chinfo* chan; } ;
struct sc_chinfo {int buffer; } ;
struct TYPE_2__ {int src_width; int dst_width; int block_num; int block_len; int dst_addr; int src_addr; int direction; int req_type; int operation; } ;
struct aic_softc {int xchan; int dev; TYPE_1__ req; int aic_fifo_paddr; int buf_base_phys; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct sc_pcminfo *VAR_5)
{
 struct aic_softc *VAR_6;
 struct sc_chinfo *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = &VAR_5->chan[0];
 VAR_6 = VAR_5->sc;

 VAR_8 = FUNC_4(VAR_7->buffer);

 FUNC_0(VAR_8 & VAR_0, ("16-bit audio supported only."));

 VAR_6->req.operation = VAR_2;
 VAR_6->req.req_type = VAR_4;
 VAR_6->req.direction = VAR_3;
 VAR_6->req.src_addr = VAR_6->buf_base_phys;
 VAR_6->req.dst_addr = VAR_6->aic_fifo_paddr;
 VAR_6->req.src_width = 2;
 VAR_6->req.dst_width = 2;
 VAR_6->req.block_len = FUNC_3(VAR_7->buffer);
 VAR_6->req.block_num = FUNC_2(VAR_7->buffer);

 VAR_9 = FUNC_6(VAR_6->xchan, &VAR_6->req);
 if (VAR_9 != 0) {
  FUNC_1(VAR_6->dev, "Can't configure virtual channel\n");
  return (-1);
 }

 FUNC_5(VAR_6->xchan, VAR_1);

 return (0);
}
