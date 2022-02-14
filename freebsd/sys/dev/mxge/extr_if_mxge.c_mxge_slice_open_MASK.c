
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_20__ {int mask; int nbufs; int cl_size; TYPE_6__* info; scalar_t__ mlen; TYPE_4__* shadow; int volatile* lanai; } ;
struct TYPE_16__ {int mask; TYPE_2__* info; int volatile* lanai; } ;
struct TYPE_14__ {int volatile* send_stop; int volatile* send_go; int volatile* lanai; } ;
struct TYPE_13__ {TYPE_5__* ifp; } ;
struct mxge_slice_state {TYPE_7__ rx_big; TYPE_8__* sc; TYPE_3__ rx_small; TYPE_1__ tx; TYPE_10__ lc; } ;
struct TYPE_21__ {int dev; TYPE_5__* ifp; scalar_t__ sram; struct mxge_slice_state* ss; } ;
typedef TYPE_8__ mxge_softc_t ;
struct TYPE_22__ {int data0; } ;
typedef TYPE_9__ mxge_cmd_t ;
typedef int mcp_kreq_ether_send_t ;
typedef int mcp_kreq_ether_recv_t ;
typedef int bus_dmamap_t ;
struct TYPE_19__ {int map; } ;
struct TYPE_18__ {scalar_t__ if_mtu; } ;
struct TYPE_17__ {int addr_low; int addr_high; } ;
struct TYPE_15__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mxge_slice_state*,int ,int) ;
 int FUNC_2 (struct mxge_slice_state*,int ,int) ;
 int FUNC_3 (TYPE_8__*,int ,TYPE_9__*) ;
 int FUNC_4 (TYPE_10__*) ;

__attribute__((used)) static int
FUNC_5(struct mxge_slice_state *VAR_10, int VAR_11, int VAR_12)
{
 mxge_softc_t *VAR_13;
 mxge_cmd_t VAR_14;
 bus_dmamap_t VAR_15;
 int VAR_16, VAR_17, VAR_18;


 VAR_13 = VAR_10->sc;
 VAR_18 = VAR_10 - VAR_13->ss;




 VAR_10->lc.ifp = VAR_13->ifp;



 VAR_16 = 0;


 if (VAR_18 == 0) {

  VAR_14.data0 = VAR_18;
  VAR_16 = FUNC_3(VAR_13, VAR_5, &VAR_14);
  VAR_10->tx.lanai =
   (volatile mcp_kreq_ether_send_t *)(VAR_13->sram + VAR_14.data0);
  VAR_10->tx.send_go = (volatile uint32_t *)
   (VAR_13->sram + VAR_7 + 64 * VAR_18);
  VAR_10->tx.send_stop = (volatile uint32_t *)
  (VAR_13->sram + VAR_8 + 64 * VAR_18);

 }

 VAR_14.data0 = VAR_18;
 VAR_16 |= FUNC_3(VAR_13,
        VAR_6, &VAR_14);
 VAR_10->rx_small.lanai =
  (volatile mcp_kreq_ether_recv_t *)(VAR_13->sram + VAR_14.data0);
 VAR_14.data0 = VAR_18;
 VAR_16 |= FUNC_3(VAR_13, VAR_4, &VAR_14);
 VAR_10->rx_big.lanai =
  (volatile mcp_kreq_ether_recv_t *)(VAR_13->sram + VAR_14.data0);

 if (VAR_16 != 0) {
  FUNC_0(VAR_13->dev,
         "failed to get ring sizes or locations\n");
  return VAR_0;
 }


 for (VAR_17 = 0; VAR_17 <= VAR_10->rx_small.mask; VAR_17++) {
  VAR_15 = VAR_10->rx_small.info[VAR_17].map;
  VAR_16 = FUNC_2(VAR_10, VAR_15, VAR_17);
  if (VAR_16) {
   FUNC_0(VAR_13->dev, "alloced %d/%d smalls\n",
          VAR_17, VAR_10->rx_small.mask + 1);
   return VAR_1;
  }
 }
 for (VAR_17 = 0; VAR_17 <= VAR_10->rx_big.mask; VAR_17++) {
  VAR_10->rx_big.shadow[VAR_17].addr_low = 0xffffffff;
  VAR_10->rx_big.shadow[VAR_17].addr_high = 0xffffffff;
 }
 VAR_10->rx_big.nbufs = VAR_11;
 VAR_10->rx_big.cl_size = VAR_12;
 VAR_10->rx_big.mlen = VAR_10->sc->ifp->if_mtu + VAR_2 +
  VAR_3 + VAR_9;
 for (VAR_17 = 0; VAR_17 <= VAR_10->rx_big.mask; VAR_17 += VAR_10->rx_big.nbufs) {
  VAR_15 = VAR_10->rx_big.info[VAR_17].map;
  VAR_16 = FUNC_1(VAR_10, VAR_15, VAR_17);
  if (VAR_16) {
   FUNC_0(VAR_13->dev, "alloced %d/%d bigs\n",
          VAR_17, VAR_10->rx_big.mask + 1);
   return VAR_1;
  }
 }
 return 0;
}
