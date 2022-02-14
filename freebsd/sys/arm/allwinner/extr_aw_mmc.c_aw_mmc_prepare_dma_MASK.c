
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_command {TYPE_5__* data; } ;
struct aw_mmc_softc {int aw_dma_map_err; int aw_dma_desc_phys; int aw_dma_map; int aw_dma_tag; int aw_dma_buf_map; int aw_dma_buf_tag; TYPE_4__* aw_mmc_conf; TYPE_3__* aw_req; TYPE_2__* ccb; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_10__ {int len; int flags; int data; } ;
struct TYPE_9__ {int dma_xferlen; } ;
struct TYPE_8__ {struct mmc_command* cmd; } ;
struct TYPE_6__ {struct mmc_command cmd; } ;
struct TYPE_7__ {TYPE_1__ mmcio; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct aw_mmc_softc*,int ) ;
 int FUNC_1 (struct aw_mmc_softc*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,int ,int ,int,int ,struct aw_mmc_softc*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct aw_mmc_softc *VAR_20)
{
 bus_dmasync_op_t VAR_21;
 int VAR_22;
 struct mmc_command *VAR_23;
 uint32_t VAR_24;




 VAR_23 = VAR_20->aw_req->cmd;

 if (VAR_23->data->len > (VAR_20->aw_mmc_conf->dma_xferlen * VAR_6))
  return (VAR_17);
 VAR_22 = FUNC_2(VAR_20->aw_dma_buf_tag, VAR_20->aw_dma_buf_map,
     VAR_23->data->data, VAR_23->data->len, VAR_19, VAR_20, 0);
 if (VAR_22)
  return (VAR_22);
 if (VAR_20->aw_dma_map_err)
  return (VAR_20->aw_dma_map_err);

 if (VAR_23->data->flags & VAR_18)
  VAR_21 = VAR_16;
 else
  VAR_21 = VAR_15;
 FUNC_3(VAR_20->aw_dma_buf_tag, VAR_20->aw_dma_buf_map, VAR_21);
 FUNC_3(VAR_20->aw_dma_tag, VAR_20->aw_dma_map, VAR_16);


 VAR_24 = FUNC_0(VAR_20, VAR_8);
 VAR_24 &= ~VAR_11;
 VAR_24 |= VAR_9;
 FUNC_1(VAR_20, VAR_8, VAR_24);


 VAR_24 |= VAR_10;
 FUNC_1(VAR_20, VAR_8, VAR_24);

 FUNC_1(VAR_20, VAR_1, VAR_4);
 FUNC_1(VAR_20, VAR_1,
     VAR_3 | VAR_2);


 VAR_24 = FUNC_0(VAR_20, VAR_12);
 if (VAR_23->data->flags & VAR_18)
  VAR_24 |= VAR_14;
 else
  VAR_24 |= VAR_13;
 FUNC_1(VAR_20, VAR_12, VAR_24);


 FUNC_1(VAR_20, VAR_0, VAR_20->aw_dma_desc_phys);


 FUNC_1(VAR_20, VAR_7, VAR_5);

 return (0);
}
