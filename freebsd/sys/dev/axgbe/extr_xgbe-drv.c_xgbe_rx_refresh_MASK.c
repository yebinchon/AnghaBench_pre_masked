
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int rdata_paddr; } ;
struct xgbe_ring {scalar_t__ dirty; scalar_t__ cur; } ;
struct xgbe_desc_if {scalar_t__ (* map_rx_buffer ) (struct xgbe_prv_data*,struct xgbe_ring*,struct xgbe_ring_data*) ;int (* unmap_rdata ) (struct xgbe_prv_data*,struct xgbe_ring_data*) ;} ;
struct xgbe_hw_if {int (* rx_desc_reset ) (struct xgbe_prv_data*,struct xgbe_ring_data*,scalar_t__) ;} ;
struct xgbe_prv_data {struct xgbe_desc_if desc_if; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,scalar_t__) ;
 int FUNC_1 (struct xgbe_channel*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xgbe_prv_data*,struct xgbe_ring_data*) ;
 scalar_t__ FUNC_5 (struct xgbe_prv_data*,struct xgbe_ring*,struct xgbe_ring_data*) ;
 int FUNC_6 (struct xgbe_prv_data*,struct xgbe_ring_data*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct xgbe_channel *VAR_2)
{
 struct xgbe_prv_data *VAR_3 = VAR_2->pdata;
 struct xgbe_hw_if *VAR_4 = &VAR_3->hw_if;
 struct xgbe_desc_if *VAR_5 = &VAR_3->desc_if;
 struct xgbe_ring *VAR_6 = VAR_2->rx_ring;
 struct xgbe_ring_data *VAR_7;

 while (VAR_6->dirty != VAR_6->cur) {
  VAR_7 = FUNC_0(VAR_6, VAR_6->dirty);


  VAR_5->unmap_rdata(VAR_3, VAR_7);

  if (VAR_5->map_rx_buffer(VAR_3, VAR_6, VAR_7))
   break;

  VAR_4->rx_desc_reset(VAR_3, VAR_7, VAR_6->dirty);

  VAR_6->dirty++;
 }


 FUNC_2(VAR_1);



 VAR_7 = FUNC_0(VAR_6, VAR_6->dirty - 1);
 FUNC_1(VAR_2, VAR_0,
     FUNC_3(VAR_7->rdata_paddr));
}
