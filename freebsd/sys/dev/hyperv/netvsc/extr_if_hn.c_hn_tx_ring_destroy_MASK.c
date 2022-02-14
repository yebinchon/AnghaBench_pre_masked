
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {int hn_txdesc_cnt; int hn_tx_lock; int hn_txlist_spin; int * hn_mbuf_br; int * hn_txdesc; int * hn_txdesc_br; int * hn_tx_rndis_dtag; int * hn_tx_data_dtag; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hn_tx_ring*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct hn_tx_ring *VAR_1)
{
 int VAR_2;

 if (VAR_1->hn_txdesc == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1->hn_txdesc_cnt; ++VAR_2)
  FUNC_4(VAR_1, &VAR_1->hn_txdesc[VAR_2]);
 for (VAR_2 = 0; VAR_2 < VAR_1->hn_txdesc_cnt; ++VAR_2)
  FUNC_3(&VAR_1->hn_txdesc[VAR_2]);

 if (VAR_1->hn_tx_data_dtag != ((void*)0))
  FUNC_1(VAR_1->hn_tx_data_dtag);
 if (VAR_1->hn_tx_rndis_dtag != ((void*)0))
  FUNC_1(VAR_1->hn_tx_rndis_dtag);





 FUNC_2(VAR_1->hn_txdesc, VAR_0);
 VAR_1->hn_txdesc = ((void*)0);

 if (VAR_1->hn_mbuf_br != ((void*)0))
  FUNC_0(VAR_1->hn_mbuf_br, VAR_0);


 FUNC_5(&VAR_1->hn_txlist_spin);

 FUNC_5(&VAR_1->hn_tx_lock);
}
