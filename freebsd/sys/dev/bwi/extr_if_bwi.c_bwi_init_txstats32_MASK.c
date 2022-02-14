
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_txstats_data {int stats_paddr; int stats_ring_paddr; int stats_ctrl_base; int stats_ring_dmap; int stats_ring_dtag; int stats_ring; scalar_t__ stats_idx; int stats_dmap; int stats_dtag; int stats; } ;
struct bwi_txstats {int dummy; } ;
struct bwi_softc {struct bwi_txstats_data* sc_txstats; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ,int ,int) ;
 int FUNC_2 (struct bwi_softc*,int ,int,int,int,int,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bwi_softc *VAR_2)
{
 struct bwi_txstats_data *VAR_3 = VAR_2->sc_txstats;
 bus_addr_t VAR_4;
 int VAR_5;

 FUNC_3(VAR_3->stats, VAR_1 * sizeof(struct bwi_txstats));
 FUNC_0(VAR_3->stats_dtag, VAR_3->stats_dmap, VAR_0);

 VAR_3->stats_idx = 0;

 VAR_4 = VAR_3->stats_paddr;
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  FUNC_2(VAR_2, VAR_3->stats_ring, VAR_1, VAR_5,
     VAR_4, sizeof(struct bwi_txstats), 0);
  VAR_4 += sizeof(struct bwi_txstats);
 }
 FUNC_0(VAR_3->stats_ring_dtag, VAR_3->stats_ring_dmap,
   VAR_0);

 FUNC_1(VAR_2, VAR_3->stats_ctrl_base,
          VAR_3->stats_ring_paddr, 0, VAR_1);
 return 0;
}
