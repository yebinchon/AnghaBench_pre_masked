
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_rssprm_toeplitz {int* rss_ind; } ;
struct hn_softc {int hn_rx_ring_inuse; int hn_ifp; struct ndis_rssprm_toeplitz hn_rss; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct hn_softc *VAR_1)
{
 struct ndis_rssprm_toeplitz *VAR_2 = &VAR_1->hn_rss;
 int VAR_3, VAR_4;

 VAR_4 = VAR_1->hn_rx_ring_inuse;
 FUNC_0(VAR_4 > 1, ("invalid # of channels %d", VAR_4));





 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_2->rss_ind[VAR_3] >= VAR_4) {
   FUNC_1(VAR_1->hn_ifp,
       "RSS indirect table %d fixup: %u -> %d\n",
       VAR_3, VAR_2->rss_ind[VAR_3], VAR_4 - 1);
   VAR_2->rss_ind[VAR_3] = VAR_4 - 1;
  }
 }
}
