
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int rx; int tx; scalar_t__ mbuf_len; scalar_t__ mbuf_data_paddr; scalar_t__ mbuf_hdr_paddr; scalar_t__ mbuf_free; int * mb; int * mbuf_map; int mbuf_dmat; } ;
struct xgbe_prv_data {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_0,
        struct xgbe_ring_data *VAR_1)
{

 if (VAR_1->mbuf_map != ((void*)0))
  FUNC_0(VAR_1->mbuf_dmat, VAR_1->mbuf_map);

 if (VAR_1->mbuf_free)
  FUNC_1(VAR_1->mb);

 VAR_1->mb = ((void*)0);
 VAR_1->mbuf_free = 0;
 VAR_1->mbuf_hdr_paddr = 0;
 VAR_1->mbuf_data_paddr = 0;
 VAR_1->mbuf_len = 0;

 FUNC_2(&VAR_1->tx, 0, sizeof(VAR_1->tx));
 FUNC_2(&VAR_1->rx, 0, sizeof(VAR_1->rx));
}
