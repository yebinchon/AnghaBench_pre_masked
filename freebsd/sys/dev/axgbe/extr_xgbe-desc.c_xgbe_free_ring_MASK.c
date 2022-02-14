
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int dummy; } ;
struct xgbe_ring {unsigned int rdesc_count; int * rdesc; int * rdesc_dmat; int * rdesc_map; int * rdata; int * mbuf_dmat; int * mbuf_map; } ;
struct xgbe_prv_data {int dummy; } ;


 int VAR_0 ;
 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct xgbe_prv_data*,struct xgbe_ring_data*) ;

__attribute__((used)) static void FUNC_7(struct xgbe_prv_data *VAR_1,
      struct xgbe_ring *VAR_2)
{
 struct xgbe_ring_data *VAR_3;
 unsigned int VAR_4;

 if (!VAR_2)
  return;

 FUNC_2(VAR_2->mbuf_dmat, VAR_2->mbuf_map);
 FUNC_1(VAR_2->mbuf_dmat);

 VAR_2->mbuf_map = ((void*)0);
 VAR_2->mbuf_dmat = ((void*)0);

 if (VAR_2->rdata) {
  for (VAR_4 = 0; VAR_4 < VAR_2->rdesc_count; VAR_4++) {
   VAR_3 = FUNC_0(VAR_2, VAR_4);
   FUNC_6(VAR_1, VAR_3);
  }

  FUNC_5(VAR_2->rdata, VAR_0);
  VAR_2->rdata = ((void*)0);
 }

 FUNC_3(VAR_2->rdesc_dmat, VAR_2->rdesc_map);
 FUNC_4(VAR_2->rdesc_dmat, VAR_2->rdesc, VAR_2->rdesc_map);
 FUNC_1(VAR_2->rdesc_dmat);

 VAR_2->rdesc_map = ((void*)0);
 VAR_2->rdesc_dmat = ((void*)0);
 VAR_2->rdesc = ((void*)0);
}
