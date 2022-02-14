
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct ifnet* rcvif; scalar_t__ len; } ;
struct mbuf {TYPE_2__ m_pkthdr; scalar_t__ m_len; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_6__ {int are_rx_cons; int are_rx_ring_map; int are_rx_ring_tag; int are_rx_tag; struct are_rxdesc* are_rxdesc; } ;
struct TYPE_4__ {struct are_desc* are_rx_ring; } ;
struct are_softc {TYPE_3__ are_cdata; int are_dev; TYPE_1__ are_rdata; struct ifnet* are_ifp; } ;
struct are_rxdesc {int saved_ctl; scalar_t__ saved_ca; struct mbuf* rx_m; int rx_dmamap; } ;
struct are_desc {int are_stat; scalar_t__ are_addr; int are_devcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct are_softc*) ;
 int FUNC_3 (struct are_softc*) ;
 int VAR_3 ;
 int FUNC_4 (struct are_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct mbuf*) ;
 scalar_t__ FUNC_6 (struct are_softc*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct ifnet*,int ,int) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_11(struct are_softc *VAR_11)
{
 struct are_rxdesc *VAR_12;
 struct ifnet *VAR_13 = VAR_11->are_ifp;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 struct are_desc *VAR_18;
 struct mbuf *VAR_19;

 FUNC_3(VAR_11);

 VAR_14 = VAR_11->are_cdata.are_rx_cons;

 FUNC_7(VAR_11->are_cdata.are_rx_ring_tag,
     VAR_11->are_cdata.are_rx_ring_map,
     VAR_4 | VAR_5);

 for (VAR_15 = 0; VAR_15 < VAR_3; FUNC_1(VAR_14, VAR_3)) {
  VAR_18 = &VAR_11->are_rdata.are_rx_ring[VAR_14];
  VAR_12 = &VAR_11->are_cdata.are_rxdesc[VAR_14];
  VAR_19 = VAR_12->rx_m;

  if ((VAR_18->are_stat & VAR_1) == VAR_1)
         break;

  VAR_15++;

  VAR_16 = FUNC_0(VAR_18->are_stat);

  VAR_17 = 1;

  if (VAR_16 < 64)
   FUNC_9(VAR_13, VAR_9, 1);
  else if ((VAR_18->are_stat & VAR_2) == 0) {
   VAR_17 = 0;
   FUNC_7(VAR_11->are_cdata.are_rx_tag, VAR_12->rx_dmamap,
       VAR_4 | VAR_5);
   VAR_19 = VAR_12->rx_m;

   VAR_19->m_pkthdr.len = VAR_19->m_len = VAR_16 - VAR_8;
   FUNC_5(VAR_19);
   VAR_19->m_pkthdr.rcvif = VAR_13;
   FUNC_9(VAR_13, VAR_10, 1);

   FUNC_4(VAR_11);
   (*VAR_13->if_input)(VAR_13, VAR_19);
   FUNC_2(VAR_11);
  }

  if (VAR_17) {

   VAR_18->are_stat = VAR_12->saved_ctl;
   VAR_18->are_addr = VAR_12->saved_ca;
   VAR_18->are_devcs = 0;
  }
  else {

   VAR_18->are_stat = VAR_1;
   VAR_18->are_devcs = 0;
   if (VAR_14 == VAR_3 - 1)
    VAR_18->are_devcs |= VAR_0;
   VAR_18->are_addr = 0;
   if (FUNC_6(VAR_11, VAR_14) != 0) {
    FUNC_8(VAR_11->are_dev,
        "Failed to allocate buffer\n");
    break;
   }
  }

  FUNC_7(VAR_11->are_cdata.are_rx_ring_tag,
      VAR_11->are_cdata.are_rx_ring_map,
      VAR_4 | VAR_5);

 }

 if (VAR_15 > 0) {
  VAR_11->are_cdata.are_rx_cons = VAR_14;

  FUNC_7(VAR_11->are_cdata.are_rx_ring_tag,
      VAR_11->are_cdata.are_rx_ring_map,
      VAR_6 | VAR_7);
 }
}
