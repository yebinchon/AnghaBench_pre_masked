
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_txstats_data {int stats_idx; struct bwi_txstats* stats; int stats_dmap; int stats_dtag; } ;
struct bwi_txstats {int txs_flags; int txs_id; int txs_txcnt; } ;
struct bwi_softc {struct bwi_txstats_data* sc_txstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bwi_softc *VAR_5, int VAR_6)
{
 struct bwi_txstats_data *VAR_7 = VAR_5->sc_txstats;
 int VAR_8;

 FUNC_2(VAR_7->stats_dtag, VAR_7->stats_dmap, VAR_0);

 VAR_8 = VAR_7->stats_idx;
 while (VAR_8 != VAR_6) {
  const struct bwi_txstats *VAR_9 = &VAR_7->stats[VAR_8];

  if ((VAR_9->txs_flags & VAR_3) == 0) {
   int VAR_10;

   VAR_10 = FUNC_0(VAR_9->txs_txcnt,
      VAR_4);
   FUNC_1(VAR_5, FUNC_3(VAR_9->txs_id),
       VAR_9->txs_flags & VAR_2,
       VAR_10);
  }
  VAR_8 = (VAR_8 + 1) % VAR_1;
 }
 VAR_7->stats_idx = VAR_8;
}
