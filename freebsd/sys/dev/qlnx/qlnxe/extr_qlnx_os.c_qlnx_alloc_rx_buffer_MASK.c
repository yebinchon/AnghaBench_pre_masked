
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct sw_rx_data {scalar_t__ map; scalar_t__ dma_addr; struct mbuf* data; } ;
struct qlnx_rx_queue {size_t sw_rx_prod; int rx_bd_ring; struct sw_rx_data* sw_rx_ring; int rx_buf_size; } ;
struct TYPE_8__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_len; } ;
struct TYPE_9__ {void* lo; void* hi; } ;
struct eth_rx_bd {TYPE_2__ addr; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_10__ {int rx_tag; struct ecore_dev cdev; } ;
typedef TYPE_3__ qlnx_host_t ;
typedef scalar_t__ dma_addr_t ;
typedef scalar_t__ bus_dmamap_t ;
struct TYPE_11__ {scalar_t__ ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,struct mbuf*,TYPE_4__*,int*,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct mbuf*) ;
 struct mbuf* FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(qlnx_host_t *VAR_7, struct qlnx_rx_queue *VAR_8)
{
        register struct mbuf *VAR_9;
        uint16_t VAR_10;
        struct sw_rx_data *VAR_11;
        struct eth_rx_bd *VAR_12;
        dma_addr_t VAR_13;
 bus_dmamap_t VAR_14;
 bus_dma_segment_t VAR_15[1];
 int VAR_16;
 int VAR_17;
 struct ecore_dev *VAR_18;

 VAR_18 = &VAR_7->cdev;

        VAR_10 = VAR_8->rx_buf_size;

 VAR_9 = FUNC_8(VAR_4, VAR_3, VAR_5, VAR_10);

        if (VAR_9 == ((void*)0)) {
                FUNC_0(VAR_7, "Failed to allocate Rx data\n");
                return -VAR_2;
        }

 VAR_9->m_len = VAR_9->m_pkthdr.len = VAR_10;

 VAR_14 = (bus_dmamap_t)0;

 VAR_17 = FUNC_3(VAR_7->rx_tag, VAR_14, VAR_9, VAR_15, &VAR_16,
   VAR_1);
 VAR_13 = VAR_15[0].ds_addr;

 if (VAR_17 || !VAR_13 || (VAR_16 != 1)) {
  FUNC_7(VAR_9);
  FUNC_0(VAR_7, "bus_dmamap_load failed[%d, 0x%016llx, %d]\n",
                           VAR_17, (long long unsigned int)VAR_13, VAR_16);
  return -VAR_2;
 }

        VAR_11 = &VAR_8->sw_rx_ring[VAR_8->sw_rx_prod];
        VAR_11->data = VAR_9;
        VAR_11->dma_addr = VAR_13;
        VAR_11->map = VAR_14;


        VAR_12 = (struct eth_rx_bd *)FUNC_5(&VAR_8->rx_bd_ring);
        VAR_12->addr.hi = FUNC_6(FUNC_1(VAR_13));
        VAR_12->addr.lo = FUNC_6(FUNC_2(VAR_13));
 FUNC_4(VAR_7->rx_tag, VAR_14, VAR_0);

        VAR_8->sw_rx_prod = (VAR_8->sw_rx_prod + 1) & (VAR_6 - 1);

        return 0;
}
