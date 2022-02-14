
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_8__ {struct xl_chain_onefrag* xl_rx_chain; struct xl_chain_onefrag* xl_rx_head; } ;
struct TYPE_7__ {int xl_rx_dmaaddr; int xl_rx_dmamap; int xl_rx_tag; } ;
struct xl_softc {scalar_t__ rxcycles; TYPE_4__ xl_cdata; TYPE_3__ xl_ldata; int xl_mtag; int xl_dev; struct ifnet* xl_ifp; } ;
struct xl_chain_onefrag {TYPE_1__* xl_ptr; struct mbuf* xl_mbuf; int xl_map; struct xl_chain_onefrag* xl_next; } ;
struct TYPE_6__ {int len; int csum_flags; int csum_data; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_capenable; int if_drv_flags; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_5__ {scalar_t__ xl_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int ) ;
 int FUNC_2 (struct xl_softc*,int ,int ) ;
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
 int FUNC_3 (struct xl_softc*) ;
 int FUNC_4 (struct xl_softc*) ;
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
 int FUNC_5 (struct xl_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_11 (struct xl_softc*,struct xl_chain_onefrag*) ;
 int FUNC_12 (struct xl_softc*) ;

__attribute__((used)) static int
FUNC_13(struct xl_softc *VAR_28)
{
 struct mbuf *VAR_29;
 struct ifnet *VAR_30 = VAR_28->xl_ifp;
 struct xl_chain_onefrag *VAR_31;
 int VAR_32;
 int VAR_33 = 0;
 u_int32_t VAR_34;

 FUNC_4(VAR_28);
again:
 FUNC_6(VAR_28->xl_ldata.xl_rx_tag, VAR_28->xl_ldata.xl_rx_dmamap,
     VAR_0);
 while ((VAR_34 = FUNC_9(VAR_28->xl_cdata.xl_rx_head->xl_ptr->xl_status))) {







  VAR_31 = VAR_28->xl_cdata.xl_rx_head;
  VAR_28->xl_cdata.xl_rx_head = VAR_31->xl_next;
  VAR_32 = VAR_34 & VAR_18;
  VAR_33++;







  if (VAR_32 > VAR_14)
   VAR_34 |= (VAR_25|VAR_19);







  if (VAR_34 & VAR_25) {
   FUNC_8(VAR_30, VAR_8, 1);
   VAR_31->xl_ptr->xl_status = 0;
   FUNC_6(VAR_28->xl_ldata.xl_rx_tag,
       VAR_28->xl_ldata.xl_rx_dmamap, VAR_1);
   continue;
  }






  if (!(VAR_34 & VAR_24)) {
   FUNC_7(VAR_28->xl_dev,
       "bad receive status -- packet dropped\n");
   FUNC_8(VAR_30, VAR_8, 1);
   VAR_31->xl_ptr->xl_status = 0;
   FUNC_6(VAR_28->xl_ldata.xl_rx_tag,
       VAR_28->xl_ldata.xl_rx_dmamap, VAR_1);
   continue;
  }


  FUNC_6(VAR_28->xl_mtag, VAR_31->xl_map,
      VAR_0);
  VAR_29 = VAR_31->xl_mbuf;
  if (FUNC_11(VAR_28, VAR_31)) {
   FUNC_8(VAR_30, VAR_8, 1);
   VAR_31->xl_ptr->xl_status = 0;
   FUNC_6(VAR_28->xl_ldata.xl_rx_tag,
       VAR_28->xl_ldata.xl_rx_dmamap, VAR_1);
   continue;
  }
  FUNC_6(VAR_28->xl_ldata.xl_rx_tag,
      VAR_28->xl_ldata.xl_rx_dmamap, VAR_1);

  FUNC_8(VAR_30, VAR_9, 1);
  VAR_29->m_pkthdr.rcvif = VAR_30;
  VAR_29->m_pkthdr.len = VAR_29->m_len = VAR_32;

  if (VAR_30->if_capenable & VAR_7) {

   if (VAR_34 & VAR_17)
    VAR_29->m_pkthdr.csum_flags |= VAR_3;
   if (!(VAR_34 & VAR_16))
    VAR_29->m_pkthdr.csum_flags |= VAR_4;
   if ((VAR_34 & VAR_21 &&
        !(VAR_34 & VAR_20)) ||
       (VAR_34 & VAR_23 &&
        !(VAR_34 & VAR_22))) {
    VAR_29->m_pkthdr.csum_flags |=
     VAR_2|VAR_5;
    VAR_29->m_pkthdr.csum_data = 0xffff;
   }
  }

  FUNC_5(VAR_28);
  (*VAR_30->if_input)(VAR_30, VAR_29);
  FUNC_3(VAR_28);






  if (!(VAR_30->if_drv_flags & VAR_10))
   return (VAR_33);
 }
 if (FUNC_0(VAR_28, VAR_26) == 0 ||
  FUNC_0(VAR_28, VAR_27) & VAR_15) {
  FUNC_1(VAR_28, VAR_13, VAR_11);
  FUNC_12(VAR_28);
  FUNC_2(VAR_28, VAR_26, VAR_28->xl_ldata.xl_rx_dmaaddr);
  VAR_28->xl_cdata.xl_rx_head = &VAR_28->xl_cdata.xl_rx_chain[0];
  FUNC_1(VAR_28, VAR_13, VAR_12);
  goto again;
 }
 return (VAR_33);
}
