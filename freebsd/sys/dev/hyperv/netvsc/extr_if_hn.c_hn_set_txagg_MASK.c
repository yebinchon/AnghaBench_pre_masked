
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hn_tx_ring {int hn_agg_szmax; int hn_agg_pktmax; int hn_agg_align; int hn_tx_lock; } ;
struct hn_softc {scalar_t__ hn_agg_size; int hn_rndis_agg_size; int hn_chim_szmax; int hn_rndis_agg_align; scalar_t__ hn_agg_pkts; int hn_rndis_agg_pkts; int hn_tx_ring_cnt; struct hn_tx_ring* hn_tx_ring; int hn_ifp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct hn_softc *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7;




 if (VAR_4->hn_agg_size < 0)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_4->hn_agg_size;

 if (VAR_4->hn_rndis_agg_size < VAR_5)
  VAR_5 = VAR_4->hn_rndis_agg_size;


 if (VAR_5 > (uint32_t)VAR_4->hn_chim_szmax)
  VAR_5 = VAR_4->hn_chim_szmax;

 if (VAR_5 <= 2 * FUNC_0(VAR_4->hn_rndis_agg_align)) {

  VAR_5 = 0;
  VAR_6 = 0;
  goto done;
 }


 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;




 if (VAR_4->hn_agg_pkts < 0)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_4->hn_agg_pkts;

 if (VAR_4->hn_rndis_agg_pkts < VAR_6)
  VAR_6 = VAR_4->hn_rndis_agg_pkts;

 if (VAR_6 <= 1) {

  VAR_5 = 0;
  VAR_6 = 0;
  goto done;
 }


 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

done:

 if (VAR_4->hn_rndis_agg_align > VAR_1) {

  VAR_5 = 0;
  VAR_6 = 0;
 }

 if (VAR_3) {
  FUNC_1(VAR_4->hn_ifp, "TX agg size %u, pkts %u, align %u\n",
      VAR_5, VAR_6, VAR_4->hn_rndis_agg_align);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->hn_tx_ring_cnt; ++VAR_7) {
  struct hn_tx_ring *VAR_8 = &VAR_4->hn_tx_ring[VAR_7];

  FUNC_2(&VAR_8->hn_tx_lock);
  VAR_8->hn_agg_szmax = VAR_5;
  VAR_8->hn_agg_pktmax = VAR_6;
  VAR_8->hn_agg_align = VAR_4->hn_rndis_agg_align;
  FUNC_3(&VAR_8->hn_tx_lock);
 }
}
