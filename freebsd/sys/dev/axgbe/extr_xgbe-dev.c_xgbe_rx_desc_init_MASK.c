
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int rdata_paddr; } ;
struct xgbe_ring {unsigned int cur; unsigned int rdesc_count; int rdesc_map; int rdesc_dmat; } ;
struct xgbe_prv_data {int dummy; } ;
struct xgbe_channel {struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,unsigned int) ;
 int FUNC_2 (struct xgbe_channel*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xgbe_prv_data*,struct xgbe_ring_data*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct xgbe_channel *VAR_6)
{
 struct xgbe_prv_data *VAR_7 = VAR_6->pdata;
 struct xgbe_ring *VAR_8 = VAR_6->rx_ring;
 struct xgbe_ring_data *VAR_9;
 unsigned int VAR_10 = VAR_8->cur;
 unsigned int VAR_11;

 FUNC_0("-->rx_desc_init\n");


 for (VAR_11 = 0; VAR_11 < VAR_8->rdesc_count; VAR_11++) {
  VAR_9 = FUNC_1(VAR_8, VAR_11);


  FUNC_6(VAR_7, VAR_9, VAR_11);
 }

 FUNC_3(VAR_8->rdesc_dmat, VAR_8->rdesc_map,
     VAR_0 | VAR_1);


 FUNC_2(VAR_6, VAR_4, VAR_8->rdesc_count - 1);


 VAR_9 = FUNC_1(VAR_8, VAR_10);
 FUNC_2(VAR_6, VAR_2,
     FUNC_5(VAR_9->rdata_paddr));
 FUNC_2(VAR_6, VAR_3,
     FUNC_4(VAR_9->rdata_paddr));


 VAR_9 = FUNC_1(VAR_8, VAR_10 + VAR_8->rdesc_count - 1);
 FUNC_2(VAR_6, VAR_5,
     FUNC_4(VAR_9->rdata_paddr));

 FUNC_0("<--rx_desc_init\n");
}
