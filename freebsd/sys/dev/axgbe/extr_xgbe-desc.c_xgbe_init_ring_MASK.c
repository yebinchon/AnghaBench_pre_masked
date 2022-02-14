
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_desc {int dummy; } ;
struct xgbe_ring_data {int dummy; } ;
struct xgbe_ring {unsigned int rdesc_count; int mbuf_map; int mbuf_dmat; int rdata; int rdesc_dmat; int rdesc_map; int rdesc; int rdesc_paddr; } ;
struct xgbe_prv_data {int dmat; scalar_t__ coherent; } ;
typedef unsigned int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,unsigned int,unsigned int,unsigned int,int,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,unsigned int,int ,int *,int ) ;
 int FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (unsigned int,int ,int) ;
 int FUNC_8 (char*,...) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct xgbe_prv_data *VAR_8,
     struct xgbe_ring *VAR_9, unsigned int VAR_10)
{
 bus_size_t VAR_11;
 int VAR_12, VAR_13;

 FUNC_0("-->xgbe_init_ring\n");

 if (!VAR_9)
  return 0;

 VAR_13 = 0;
 if (VAR_8->coherent)
  VAR_13 = VAR_0;


 VAR_9->rdesc_count = VAR_10;
 VAR_11 = sizeof(struct xgbe_ring_desc) * VAR_10;
 VAR_12 = FUNC_1(VAR_8->dmat, 512, 0, VAR_2,
     VAR_2, ((void*)0), ((void*)0), VAR_11, 1, VAR_11, VAR_13, ((void*)0), ((void*)0),
     &VAR_9->rdesc_dmat);
 if (VAR_12 != 0) {
  FUNC_8("Unable to create the DMA tag: %d\n", VAR_12);
  return -VAR_12;
 }

 VAR_12 = FUNC_5(VAR_9->rdesc_dmat, (void **)&VAR_9->rdesc,
     VAR_1 | VAR_0, &VAR_9->rdesc_map);
 if (VAR_12 != 0) {
  FUNC_2(VAR_9->rdesc_dmat);
  FUNC_8("Unable to allocate DMA memory: %d\n", VAR_12);
  return -VAR_12;
 }
 VAR_12 = FUNC_4(VAR_9->rdesc_dmat, VAR_9->rdesc_map, VAR_9->rdesc,
     VAR_11, VAR_7, &VAR_9->rdesc_paddr, 0);
 if (VAR_12 != 0) {
  FUNC_6(VAR_9->rdesc_dmat, VAR_9->rdesc, VAR_9->rdesc_map);
  FUNC_2(VAR_9->rdesc_dmat);
  FUNC_8("Unable to load DMA memory\n");
  return -VAR_12;
 }


 VAR_9->rdata = FUNC_7(VAR_10 * sizeof(struct xgbe_ring_data),
     VAR_3, VAR_4 | VAR_5);


 VAR_12 = FUNC_1(VAR_8->dmat, 1, 0, VAR_2,
     VAR_2, ((void*)0), ((void*)0), VAR_6 * VAR_10,
     VAR_10, VAR_6, VAR_13, ((void*)0), ((void*)0),
     &VAR_9->mbuf_dmat);
 if (VAR_12 != 0)
  return -VAR_12;

 VAR_12 = FUNC_3(VAR_9->mbuf_dmat, 0, &VAR_9->mbuf_map);
 if (VAR_12 != 0)
  return -VAR_12;

 FUNC_0("<--xgbe_init_ring\n");

 return 0;
}
