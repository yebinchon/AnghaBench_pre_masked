
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_txstats_data {int * stats_dtag; int stats_dmap; int stats; int * stats_ring_dtag; int stats_ring_dmap; int stats_ring; } ;
struct bwi_softc {struct bwi_txstats_data* sc_txstats; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct bwi_txstats_data*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bwi_softc *VAR_1)
{
 struct bwi_txstats_data *VAR_2;

 if (VAR_1->sc_txstats == ((void*)0))
  return;
 VAR_2 = VAR_1->sc_txstats;

 if (VAR_2->stats_ring_dtag != ((void*)0)) {
  FUNC_1(VAR_2->stats_ring_dtag, VAR_2->stats_ring_dmap);
  FUNC_2(VAR_2->stats_ring_dtag, VAR_2->stats_ring,
    VAR_2->stats_ring_dmap);
  FUNC_0(VAR_2->stats_ring_dtag);
 }

 if (VAR_2->stats_dtag != ((void*)0)) {
  FUNC_1(VAR_2->stats_dtag, VAR_2->stats_dmap);
  FUNC_2(VAR_2->stats_dtag, VAR_2->stats, VAR_2->stats_dmap);
  FUNC_0(VAR_2->stats_dtag);
 }

 FUNC_3(VAR_2, VAR_0);
}
