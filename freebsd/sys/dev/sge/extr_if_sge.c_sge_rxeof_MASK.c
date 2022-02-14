
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {struct sge_desc* sge_rx_ring; } ;
struct sge_chain_data {int sge_rx_cons; int sge_rx_dmamap; int sge_rx_tag; TYPE_2__* sge_rxdesc; } ;
struct sge_softc {int sge_dev; TYPE_1__ sge_ldata; struct sge_chain_data sge_cdata; struct ifnet* sge_ifp; } ;
struct sge_desc {int sge_sts_size; int sge_cmdsts; } ;
struct TYPE_6__ {int csum_flags; int csum_data; int ether_vtag; struct ifnet* rcvif; scalar_t__ len; } ;
struct mbuf {TYPE_3__ m_pkthdr; scalar_t__ m_len; int m_data; int m_flags; } ;
struct ifnet {int if_drv_flags; int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_5__ {struct mbuf* rx_m; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct sge_softc*) ;
 int FUNC_2 (struct sge_softc*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (struct sge_softc*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*,int,int ) ;
 int FUNC_9 (struct ifnet*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sge_softc*,int) ;
 scalar_t__ FUNC_12 (struct sge_softc*,int) ;
 int FUNC_13 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_14(struct sge_softc *VAR_28)
{
        struct ifnet *VAR_29;
        struct mbuf *VAR_30;
 struct sge_chain_data *VAR_31;
 struct sge_desc *VAR_32;
 uint32_t VAR_33, VAR_34;
 int VAR_35, VAR_36;

 FUNC_2(VAR_28);

 VAR_29 = VAR_28->sge_ifp;
 VAR_31 = &VAR_28->sge_cdata;

 FUNC_7(VAR_31->sge_rx_tag, VAR_31->sge_rx_dmamap,
     VAR_0 | VAR_1);
 VAR_35 = VAR_31->sge_rx_cons;
 for (VAR_36 = 0; VAR_36 < VAR_27; VAR_36++,
     FUNC_0(VAR_35, VAR_27)) {
  if ((VAR_29->if_drv_flags & VAR_13) == 0)
   break;
  VAR_32 = &VAR_28->sge_ldata.sge_rx_ring[VAR_35];
  VAR_33 = FUNC_10(VAR_32->sge_cmdsts);
  if ((VAR_33 & VAR_17) != 0)
   break;
  VAR_34 = FUNC_10(VAR_32->sge_sts_size);
  if ((VAR_34 & VAR_23) == 0 || FUNC_4(VAR_34) != 0 ||
      FUNC_5(VAR_34) != 1) {





   FUNC_11(VAR_28, VAR_35);
   FUNC_9(VAR_29, VAR_10, 1);
   continue;
  }
  VAR_30 = VAR_31->sge_rxdesc[VAR_35].rx_m;
  if (FUNC_12(VAR_28, VAR_35) != 0) {
   FUNC_11(VAR_28, VAR_35);
   FUNC_9(VAR_29, VAR_12, 1);
   continue;
  }
  if ((VAR_29->if_capenable & VAR_8) != 0) {
   if ((VAR_33 & VAR_15) != 0 &&
       (VAR_33 & VAR_16) != 0)
    VAR_30->m_pkthdr.csum_flags |=
        VAR_5 | VAR_6;
   if (((VAR_33 & VAR_18) != 0 &&
       (VAR_33 & VAR_19) != 0) ||
       ((VAR_33 & VAR_20) != 0 &&
       (VAR_33 & VAR_21) != 0)) {
    VAR_30->m_pkthdr.csum_flags |=
        VAR_4 | VAR_7;
    VAR_30->m_pkthdr.csum_data = 0xffff;
   }
  }

  if ((VAR_29->if_capenable & VAR_9) != 0 &&
      (VAR_34 & VAR_24) != 0) {
   VAR_30->m_pkthdr.ether_vtag = VAR_33 & VAR_22;
   VAR_30->m_flags |= VAR_14;
  }






  VAR_30->m_data += VAR_26;
  VAR_30->m_pkthdr.len = VAR_30->m_len = FUNC_3(VAR_34) -
      VAR_26;
  VAR_30->m_pkthdr.rcvif = VAR_29;
  FUNC_9(VAR_29, VAR_11, 1);
  FUNC_6(VAR_28);
  (*VAR_29->if_input)(VAR_29, VAR_30);
  FUNC_1(VAR_28);
 }

 if (VAR_36 > 0) {
  FUNC_7(VAR_31->sge_rx_tag, VAR_31->sge_rx_dmamap,
      VAR_2 | VAR_3);
  VAR_31->sge_rx_cons = VAR_35;
 }
}
