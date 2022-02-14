
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fxp_stats {scalar_t__ completion_status; scalar_t__ tx_pause; scalar_t__ tx_good; scalar_t__ tx_maxcols; scalar_t__ tx_latecols; scalar_t__ tx_underruns; scalar_t__ tx_lostcrs; scalar_t__ tx_deffered; scalar_t__ tx_single_collisions; scalar_t__ tx_multiple_collisions; scalar_t__ tx_total_collisions; scalar_t__ rx_good; scalar_t__ rx_crc_errors; scalar_t__ rx_alignment_errors; scalar_t__ rx_rnr_errors; scalar_t__ rx_overrun_errors; scalar_t__ rx_cdt_errors; scalar_t__ rx_shortframes; scalar_t__ rx_pause; scalar_t__ rx_controls; int rx_tco; int tx_tco; } ;
struct fxp_hwstats {int rx_tco; int tx_tco; int rx_controls; int rx_pause; int tx_pause; int rx_shortframes; int rx_cdt_errors; int rx_overrun_errors; int rx_rnr_errors; int rx_alignment_errors; int rx_crc_errors; int rx_good; int tx_total_collisions; int tx_multiple_collisions; int tx_single_collisions; int tx_deffered; int tx_lostcrs; int tx_underruns; int tx_latecols; int tx_maxcols; int tx_good; } ;
struct fxp_softc {scalar_t__ revision; int flags; int fxp_smap; int fxp_stag; scalar_t__ rx_idle_secs; struct fxp_hwstats fxp_hwstats; struct fxp_stats* fxp_stats; int ifp; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fxp_softc*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_6(struct fxp_softc *VAR_15)
{
 if_t VAR_16 = VAR_15->ifp;
 struct fxp_stats *VAR_17 = VAR_15->fxp_stats;
 struct fxp_hwstats *VAR_18;
 uint32_t *VAR_19;

 FUNC_0(VAR_15, VAR_13);

 FUNC_1(VAR_15->fxp_stag, VAR_15->fxp_smap,
     VAR_0 | VAR_1);

 if (VAR_15->revision >= VAR_6)
  VAR_19 = &VAR_17->completion_status;
 else if (VAR_15->revision >= VAR_5)
  VAR_19 = (uint32_t *)&VAR_17->tx_tco;
 else
  VAR_19 = &VAR_17->tx_pause;
 if (*VAR_19 == FUNC_2(VAR_7)) {
  VAR_18 = &VAR_15->fxp_hwstats;
  VAR_18->tx_good += FUNC_5(VAR_17->tx_good);
  VAR_18->tx_maxcols += FUNC_5(VAR_17->tx_maxcols);
  VAR_18->tx_latecols += FUNC_5(VAR_17->tx_latecols);
  VAR_18->tx_underruns += FUNC_5(VAR_17->tx_underruns);
  VAR_18->tx_lostcrs += FUNC_5(VAR_17->tx_lostcrs);
  VAR_18->tx_deffered += FUNC_5(VAR_17->tx_deffered);
  VAR_18->tx_single_collisions += FUNC_5(VAR_17->tx_single_collisions);
  VAR_18->tx_multiple_collisions +=
      FUNC_5(VAR_17->tx_multiple_collisions);
  VAR_18->tx_total_collisions += FUNC_5(VAR_17->tx_total_collisions);
  VAR_18->rx_good += FUNC_5(VAR_17->rx_good);
  VAR_18->rx_crc_errors += FUNC_5(VAR_17->rx_crc_errors);
  VAR_18->rx_alignment_errors += FUNC_5(VAR_17->rx_alignment_errors);
  VAR_18->rx_rnr_errors += FUNC_5(VAR_17->rx_rnr_errors);
  VAR_18->rx_overrun_errors += FUNC_5(VAR_17->rx_overrun_errors);
  VAR_18->rx_cdt_errors += FUNC_5(VAR_17->rx_cdt_errors);
  VAR_18->rx_shortframes += FUNC_5(VAR_17->rx_shortframes);
  VAR_18->tx_pause += FUNC_5(VAR_17->tx_pause);
  VAR_18->rx_pause += FUNC_5(VAR_17->rx_pause);
  VAR_18->rx_controls += FUNC_5(VAR_17->rx_controls);
  VAR_18->tx_tco += FUNC_4(VAR_17->tx_tco);
  VAR_18->rx_tco += FUNC_4(VAR_17->rx_tco);

  FUNC_3(VAR_16, VAR_12, FUNC_5(VAR_17->tx_good));
  FUNC_3(VAR_16, VAR_8,
      FUNC_5(VAR_17->tx_total_collisions));
  if (VAR_17->rx_good) {
   FUNC_3(VAR_16, VAR_10,
       FUNC_5(VAR_17->rx_good));
   VAR_15->rx_idle_secs = 0;
  } else if (VAR_15->flags & VAR_4) {



   VAR_15->rx_idle_secs++;
  }
  FUNC_3(VAR_16, VAR_9,
      FUNC_5(VAR_17->rx_crc_errors) +
      FUNC_5(VAR_17->rx_alignment_errors) +
      FUNC_5(VAR_17->rx_rnr_errors) +
      FUNC_5(VAR_17->rx_overrun_errors));




  if (VAR_17->tx_underruns) {
   FUNC_3(VAR_16, VAR_11,
       FUNC_5(VAR_17->tx_underruns));
   if (VAR_14 < 192)
    VAR_14 += 64;
  }
  *VAR_19 = 0;
  FUNC_1(VAR_15->fxp_stag, VAR_15->fxp_smap,
      VAR_2 | VAR_3);
 }
}
