
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int rdata_paddr; } ;
struct xgbe_ring {int cur; int rdesc_count; } ;
struct xgbe_channel {struct xgbe_ring* tx_ring; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,int) ;
 int FUNC_2 (struct xgbe_channel*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xgbe_ring_data*) ;

__attribute__((used)) static void FUNC_6(struct xgbe_channel *VAR_3)
{
 struct xgbe_ring *VAR_4 = VAR_3->tx_ring;
 struct xgbe_ring_data *VAR_5;
 int VAR_6;
 int VAR_7 = VAR_4->cur;

 FUNC_0("-->tx_desc_init\n");


 for (VAR_6 = 0; VAR_6 < VAR_4->rdesc_count; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_6);


  FUNC_5(VAR_5);
 }


 FUNC_2(VAR_3, VAR_2, VAR_4->rdesc_count - 1);


 VAR_5 = FUNC_1(VAR_4, VAR_7);
 FUNC_2(VAR_3, VAR_0,
     FUNC_4(VAR_5->rdata_paddr));
 FUNC_2(VAR_3, VAR_1,
     FUNC_3(VAR_5->rdata_paddr));

 FUNC_0("<--tx_desc_init\n");
}
