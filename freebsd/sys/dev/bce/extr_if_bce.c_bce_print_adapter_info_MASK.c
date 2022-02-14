
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bce_softc {int bce_flags; int link_width; int link_speed; int bus_speed_mhz; char* bce_bc_ver; int rx_pages; int tx_pages; int pg_pages; int bce_phy_flags; char* bce_mfw_ver; int bce_rx_quick_cons_trip_int; int bce_rx_quick_cons_trip; int bce_rx_ticks_int; int bce_rx_ticks; int bce_tx_quick_cons_trip_int; int bce_tx_quick_cons_trip; int bce_tx_ticks_int; int bce_tx_ticks; int bce_chipid; } ;


 int FUNC_0 (struct bce_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(struct bce_softc *VAR_14)
{
 int VAR_15 = 0;

 FUNC_2(VAR_9);

 if (VAR_12 || VAR_13) {
  FUNC_1("ASIC (0x%08X); ", VAR_14->bce_chipid);
  FUNC_4("Rev (%c%d); ", ((FUNC_0(VAR_14) & 0xf000) >>
      12) + 'A', ((FUNC_0(VAR_14) & 0x0ff0) >> 4));



  if (VAR_14->bce_flags & VAR_1) {
   FUNC_4("Bus (PCIe x%d, ", VAR_14->link_width);
   switch (VAR_14->link_speed) {
   case 1: FUNC_4("2.5Gbps); "); break;
   case 2: FUNC_4("5Gbps); "); break;
   default: FUNC_4("Unknown link speed); ");
   }
  } else {
   FUNC_4("Bus (PCI%s, %s, %dMHz); ",
       ((VAR_14->bce_flags & VAR_2) ? "-X" : ""),
       ((VAR_14->bce_flags & VAR_3) ?
       "32-bit" : "64-bit"), VAR_14->bus_speed_mhz);
  }


  FUNC_4("B/C (%s); Bufs (RX:%d;TX:%d;PG:%d); Flags (",
      VAR_14->bce_bc_ver, VAR_14->rx_pages, VAR_14->tx_pages,
      (VAR_11 == VAR_10 ? VAR_14->pg_pages: 0));

  if (VAR_11 == VAR_10) {
   FUNC_4("SPLT");
   VAR_15++;
  }

  if (VAR_14->bce_flags & VAR_8) {
   if (VAR_15 > 0) FUNC_4("|");
   FUNC_4("MSI"); VAR_15++;
  }

  if (VAR_14->bce_flags & VAR_7) {
   if (VAR_15 > 0) FUNC_4("|");
   FUNC_4("MSI-X"); VAR_15++;
  }

  if (VAR_14->bce_phy_flags & VAR_4) {
   if (VAR_15 > 0) FUNC_4("|");
   FUNC_4("2.5G"); VAR_15++;
  }

  if (VAR_14->bce_phy_flags & VAR_5) {
   if (VAR_15 > 0) FUNC_4("|");
   FUNC_4("Remote PHY(%s)",
       VAR_14->bce_phy_flags & VAR_6 ?
       "FIBER" : "TP"); VAR_15++;
  }

  if (VAR_14->bce_flags & VAR_0) {
   if (VAR_15 > 0) FUNC_4("|");
   FUNC_4("MFW); MFW (%s)\n", VAR_14->bce_mfw_ver);
  } else {
   FUNC_4(")\n");
  }

  FUNC_4("Coal (RX:%d,%d,%d,%d; TX:%d,%d,%d,%d)\n",
      VAR_14->bce_rx_quick_cons_trip_int,
      VAR_14->bce_rx_quick_cons_trip,
      VAR_14->bce_rx_ticks_int,
      VAR_14->bce_rx_ticks,
      VAR_14->bce_tx_quick_cons_trip_int,
      VAR_14->bce_tx_quick_cons_trip,
      VAR_14->bce_tx_ticks_int,
      VAR_14->bce_tx_ticks);

 }

 FUNC_3(VAR_9);
}
