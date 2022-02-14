
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct hn_softc {scalar_t__ hn_chim_szmax; int hn_caps; int hn_tx_ring_cnt; TYPE_1__* hn_tx_ring; int hn_ifp; } ;
struct TYPE_2__ {int hn_tx_flags; int hn_csum_assist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct hn_softc*,scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct hn_softc *VAR_16)
{
 uint64_t VAR_17;
 int VAR_18;

 FUNC_0(VAR_16, VAR_16->hn_chim_szmax);
 if (VAR_15 > 0 &&
     VAR_15 < VAR_16->hn_chim_szmax)
  FUNC_0(VAR_16, VAR_15);

 VAR_17 = 0;
 if (VAR_16->hn_caps & VAR_6)
  VAR_17 |= VAR_0;
 if (VAR_16->hn_caps & VAR_7)
  VAR_17 |= VAR_3;
 if ((VAR_16->hn_caps & VAR_9) && VAR_13)
  VAR_17 |= VAR_4;
 if (VAR_16->hn_caps & VAR_8)
  VAR_17 |= VAR_1;
 if ((VAR_16->hn_caps & VAR_10) && VAR_14)
  VAR_17 |= VAR_2;
 for (VAR_18 = 0; VAR_18 < VAR_16->hn_tx_ring_cnt; ++VAR_18)
  VAR_16->hn_tx_ring[VAR_18].hn_csum_assist = VAR_17;

 if (VAR_16->hn_caps & VAR_5) {



  if (VAR_12)
   FUNC_1(VAR_16->hn_ifp, "support HASHVAL pktinfo\n");
  for (VAR_18 = 0; VAR_18 < VAR_16->hn_tx_ring_cnt; ++VAR_18)
   VAR_16->hn_tx_ring[VAR_18].hn_tx_flags |= VAR_11;
 }
}
