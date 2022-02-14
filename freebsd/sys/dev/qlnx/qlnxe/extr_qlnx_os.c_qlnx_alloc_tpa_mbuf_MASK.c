
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct sw_rx_data {scalar_t__ map; scalar_t__ dma_addr; struct mbuf* data; } ;
struct qlnx_agg_info {struct sw_rx_data rx_buf; } ;
struct TYPE_7__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_len; } ;
struct TYPE_8__ {int rx_tag; } ;
typedef TYPE_2__ qlnx_host_t ;
typedef scalar_t__ dma_addr_t ;
typedef scalar_t__ bus_dmamap_t ;
struct TYPE_9__ {scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (int ,scalar_t__,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct sw_rx_data*,int ,int) ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_6, uint16_t VAR_7,
 struct qlnx_agg_info *VAR_8)
{
 struct mbuf *VAR_9;
        dma_addr_t VAR_10;
 bus_dmamap_t VAR_11;
 bus_dma_segment_t VAR_12[1];
 int VAR_13;
 int VAR_14;
        struct sw_rx_data *VAR_15;

 VAR_9 = FUNC_4(VAR_4, VAR_3, VAR_5, VAR_7);

        if (VAR_9 == ((void*)0)) {
                FUNC_0(VAR_6, "Failed to allocate Rx data\n");
                return -VAR_2;
        }

 VAR_9->m_len = VAR_9->m_pkthdr.len = VAR_7;

 VAR_11 = (bus_dmamap_t)0;

 VAR_14 = FUNC_1(VAR_6->rx_tag, VAR_11, VAR_9, VAR_12, &VAR_13,
   VAR_1);
 VAR_10 = VAR_12[0].ds_addr;

 if (VAR_14 || !VAR_10 || (VAR_13 != 1)) {
  FUNC_3(VAR_9);
  FUNC_0(VAR_6, "bus_dmamap_load failed[%d, 0x%016llx, %d]\n",
   VAR_14, (long long unsigned int)VAR_10, VAR_13);
  return -VAR_2;
 }

        VAR_15 = &VAR_8->rx_buf;

 FUNC_5(VAR_15, 0, sizeof (struct sw_rx_data));

        VAR_15->data = VAR_9;
        VAR_15->dma_addr = VAR_10;
        VAR_15->map = VAR_11;

 FUNC_2(VAR_6->rx_tag, VAR_11, VAR_0);

 return (0);
}
