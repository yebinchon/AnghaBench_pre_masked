
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct rbuf_info {struct mbuf* mbuf; int dmap; int dmat; } ;
struct rbdr {int rbdr_buff_dmat; } ;
struct nicvf {int dev; } ;
struct TYPE_4__ {int len; } ;
struct mbuf {scalar_t__ m_data; TYPE_1__ m_pkthdr; int m_len; } ;
typedef int bus_dmamap_t ;
struct TYPE_5__ {scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct mbuf*,TYPE_2__*,int*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct mbuf*,scalar_t__) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int,int ,int ,int ) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static __inline int
FUNC_7(struct nicvf *VAR_6, struct rbdr *VAR_7,
    bus_dmamap_t VAR_8, int VAR_9, uint32_t VAR_10, bus_addr_t *VAR_11)
{
 struct mbuf *VAR_12;
 struct rbuf_info *VAR_13;
 bus_dma_segment_t VAR_14[1];
 int VAR_15;
 int VAR_16;

 VAR_12 = FUNC_5(VAR_9, VAR_3, VAR_4, VAR_2);
 if (VAR_12 == ((void*)0))
  return (VAR_1);





 VAR_12->m_len = VAR_12->m_pkthdr.len = VAR_10;

 VAR_16 = FUNC_1(VAR_7->rbdr_buff_dmat, VAR_8, VAR_12, VAR_14,
     &VAR_15, VAR_0);
 if (VAR_16 != 0) {
  FUNC_2(VAR_6->dev,
      "Failed to map mbuf into DMA visible memory, err: %d\n",
      VAR_16);
  FUNC_4(VAR_12);
  FUNC_0(VAR_7->rbdr_buff_dmat, VAR_8);
  return (VAR_16);
 }
 if (VAR_15 != 1)
  FUNC_6("Unexpected number of DMA segments for RB: %d", VAR_15);




 VAR_13 = (struct rbuf_info *)VAR_12->m_data;
 FUNC_3(VAR_12, VAR_5);

 VAR_13->dmat = VAR_7->rbdr_buff_dmat;
 VAR_13->dmap = VAR_8;
 VAR_13->mbuf = VAR_12;

 *VAR_11 = VAR_14[0].ds_addr + VAR_5;

 return (0);
}
