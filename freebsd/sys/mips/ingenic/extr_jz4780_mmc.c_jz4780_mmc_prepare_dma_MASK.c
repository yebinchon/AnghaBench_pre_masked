
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_command {TYPE_2__* data; } ;
struct jz4780_mmc_softc {int sc_dma_map_err; int sc_dma_inuse; int sc_dma_ctl; int sc_dma_map; int sc_dma_tag; int sc_dma_buf_map; int sc_dma_buf_tag; TYPE_1__* sc_req; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_4__ {int len; int flags; scalar_t__ data; } ;
struct TYPE_3__ {struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,scalar_t__,int,int ,struct jz4780_mmc_softc*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_2(struct jz4780_mmc_softc *VAR_13)
{
 bus_dmasync_op_t VAR_14;
 int VAR_15;
 struct mmc_command *VAR_16;
 uint32_t VAR_17;

 VAR_16 = VAR_13->sc_req->cmd;
 if (VAR_16->data->len > VAR_9 * VAR_10)
  return (VAR_3);
 VAR_15 = FUNC_0(VAR_13->sc_dma_buf_tag, VAR_13->sc_dma_buf_map,
     VAR_16->data->data, VAR_16->data->len, VAR_12, VAR_13,
     VAR_2);
 if (VAR_15)
  return (VAR_15);
 if (VAR_13->sc_dma_map_err)
  return (VAR_13->sc_dma_map_err);

 VAR_13->sc_dma_inuse = 1;
 if (VAR_16->data->flags & VAR_11)
  VAR_14 = VAR_1;
 else
  VAR_14 = VAR_0;
 FUNC_1(VAR_13->sc_dma_buf_tag, VAR_13->sc_dma_buf_map, VAR_14);
 FUNC_1(VAR_13->sc_dma_tag, VAR_13->sc_dma_map, VAR_1);


 VAR_13->sc_dma_ctl = VAR_8 | VAR_7 | VAR_6;


 VAR_17 = (uintptr_t)VAR_16->data->data & 3;
 if (VAR_17 != 0)
  VAR_13->sc_dma_ctl |= (VAR_17 << VAR_5) | VAR_4;
 return (0);
}
