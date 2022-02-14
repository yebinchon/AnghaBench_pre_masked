
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
struct TYPE_6__ {int fv_rx_cons; int fv_rx_ring_map; int fv_rx_ring_tag; int fv_rx_tag; struct fv_rxdesc* fv_rxdesc; } ;
struct TYPE_4__ {struct fv_desc* fv_rx_ring; } ;
struct fv_softc {TYPE_3__ fv_cdata; int fv_dev; TYPE_1__ fv_rdata; struct ifnet* fv_ifp; } ;
struct fv_rxdesc {int saved_ctl; scalar_t__ saved_ca; struct mbuf* rx_m; int rx_dmamap; } ;
struct fv_desc {int fv_stat; scalar_t__ fv_addr; int fv_devcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct fv_softc*) ;
 int FUNC_3 (struct fv_softc*) ;
 int VAR_10 ;
 int FUNC_4 (struct fv_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct mbuf*) ;
 scalar_t__ FUNC_8 (struct fv_softc*,int) ;
 int FUNC_9 (struct ifnet*,int ,int) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_11(struct fv_softc *VAR_13)
{
 struct fv_rxdesc *VAR_14;
 struct ifnet *VAR_15 = VAR_13->fv_ifp;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 struct fv_desc *VAR_20;
 struct mbuf *VAR_21;

 FUNC_3(VAR_13);

 VAR_16 = VAR_13->fv_cdata.fv_rx_cons;

 FUNC_5(VAR_13->fv_cdata.fv_rx_ring_tag,
     VAR_13->fv_cdata.fv_rx_ring_map,
     VAR_5 | VAR_6);

 for (VAR_17 = 0; VAR_17 < VAR_10; FUNC_1(VAR_16, VAR_10)) {
  VAR_20 = &VAR_13->fv_rdata.fv_rx_ring[VAR_16];
  VAR_14 = &VAR_13->fv_cdata.fv_rxdesc[VAR_16];
  VAR_21 = VAR_14->rx_m;

  if ((VAR_20->fv_stat & VAR_2) == VAR_2)
         break;

  VAR_17++;

  if (VAR_20->fv_stat & (VAR_1 | VAR_4)) {
   FUNC_6(VAR_13->fv_dev,
       "Receive Descriptor error %x\n", VAR_20->fv_stat);
   FUNC_9(VAR_15, VAR_11, 1);
   VAR_18 = 0;
  } else {
   VAR_18 = FUNC_0(VAR_20->fv_stat);
  }


  VAR_19 = 1;

  if (VAR_18 < 64)
   FUNC_9(VAR_15, VAR_11, 1);
  else if ((VAR_20->fv_stat & VAR_3) == 0) {
   VAR_19 = 0;
   FUNC_5(VAR_13->fv_cdata.fv_rx_tag, VAR_14->rx_dmamap,
       VAR_5 | VAR_6);
   VAR_21 = VAR_14->rx_m;

   VAR_21->m_pkthdr.len = VAR_21->m_len = VAR_18 - VAR_9;

   FUNC_7(VAR_21);
   VAR_21->m_pkthdr.rcvif = VAR_15;
   FUNC_9(VAR_15, VAR_12, 1);

   FUNC_4(VAR_13);
   (*VAR_15->if_input)(VAR_15, VAR_21);
   FUNC_2(VAR_13);
  }

  if (VAR_19) {

   VAR_20->fv_stat = VAR_14->saved_ctl;
   VAR_20->fv_addr = VAR_14->saved_ca;
   VAR_20->fv_devcs = 0;
  }
  else {

   VAR_20->fv_stat = VAR_2;
   VAR_20->fv_devcs = 0;
   if (VAR_16 == VAR_10 - 1)
    VAR_20->fv_devcs |= VAR_0;
   VAR_20->fv_addr = 0;
   if (FUNC_8(VAR_13, VAR_16) != 0) {
    FUNC_6(VAR_13->fv_dev,
        "Failed to allocate buffer\n");
    break;
   }
  }

  FUNC_5(VAR_13->fv_cdata.fv_rx_ring_tag,
      VAR_13->fv_cdata.fv_rx_ring_map,
      VAR_5 | VAR_6);

 }

 if (VAR_17 > 0) {
  VAR_13->fv_cdata.fv_rx_cons = VAR_16;

  FUNC_5(VAR_13->fv_cdata.fv_rx_ring_tag,
      VAR_13->fv_cdata.fv_rx_ring_map,
      VAR_7 | VAR_8);
 }
}
