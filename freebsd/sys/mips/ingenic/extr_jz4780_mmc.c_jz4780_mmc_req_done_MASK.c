
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int (* done ) (struct mmc_request*) ;struct mmc_command* cmd; } ;
struct mmc_command {scalar_t__ error; TYPE_1__* data; } ;
struct jz4780_mmc_softc {int sc_dma_inuse; scalar_t__ sc_intr_seen; scalar_t__ sc_intr_wait; scalar_t__ sc_dma_map_err; scalar_t__ sc_resid; struct mmc_request* sc_req; int sc_timeoutc; int sc_dma_buf_map; int sc_dma_buf_tag; int sc_dma_map; int sc_dma_tag; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct jz4780_mmc_softc*) ;
 int FUNC_4 (struct mmc_request*) ;

__attribute__((used)) static void
FUNC_5(struct jz4780_mmc_softc *VAR_4)
{
 struct mmc_command *VAR_5;
 struct mmc_request *VAR_6;
 bus_dmasync_op_t VAR_7;

 VAR_5 = VAR_4->sc_req->cmd;

 if (VAR_5->error != VAR_3)
  FUNC_3(VAR_4);

 if (VAR_4->sc_dma_inuse == 1) {
  if (VAR_5->data->flags & VAR_2)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;
  FUNC_0(VAR_4->sc_dma_buf_tag, VAR_4->sc_dma_buf_map,
      VAR_7);
  FUNC_0(VAR_4->sc_dma_tag, VAR_4->sc_dma_map,
      VAR_1);
  FUNC_1(VAR_4->sc_dma_buf_tag, VAR_4->sc_dma_buf_map);
 }
 VAR_6 = VAR_4->sc_req;
 FUNC_2(&VAR_4->sc_timeoutc);
 VAR_4->sc_req = ((void*)0);
 VAR_4->sc_resid = 0;
 VAR_4->sc_dma_inuse = 0;
 VAR_4->sc_dma_map_err = 0;
 VAR_4->sc_intr_wait = 0;
 VAR_4->sc_intr_seen = 0;
 VAR_6->done(VAR_6);
}
