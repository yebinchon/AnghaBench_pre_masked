
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int ste_rx_list_map; int ste_rx_list_tag; struct ste_chain_onefrag* ste_rx_head; } ;
struct ste_softc {TYPE_3__ ste_cdata; struct ifnet* ste_ifp; } ;
struct ste_chain_onefrag {TYPE_1__* ste_ptr; struct mbuf* ste_mbuf; struct ste_chain_onefrag* ste_next; } ;
struct TYPE_5__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_capenable; int if_drv_flags; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_4__ {scalar_t__ ste_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ste_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (struct ste_softc*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct ste_softc*,struct ste_chain_onefrag*) ;
 int FUNC_7 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_8(struct ste_softc *VAR_12, int VAR_13)
{
        struct mbuf *VAR_14;
        struct ifnet *VAR_15;
 struct ste_chain_onefrag *VAR_16;
 uint32_t VAR_17;
 int VAR_18, VAR_19;

 VAR_15 = VAR_12->ste_ifp;

 FUNC_3(VAR_12->ste_cdata.ste_rx_list_tag,
     VAR_12->ste_cdata.ste_rx_list_map,
     VAR_0 | VAR_1);

 VAR_16 = VAR_12->ste_cdata.ste_rx_head;
 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++,
     VAR_16 = VAR_16->ste_next) {
  VAR_17 = FUNC_5(VAR_16->ste_ptr->ste_status);
  if ((VAR_17 & VAR_9) == 0)
   break;







  if ((VAR_15->if_drv_flags & VAR_8) == 0)
   break;






  if (VAR_17 & VAR_10) {
   FUNC_4(VAR_15, VAR_5, 1);
   VAR_16->ste_ptr->ste_status = 0;
   continue;
  }


  VAR_14 = VAR_16->ste_mbuf;
  VAR_18 = FUNC_1(VAR_17);
  if (FUNC_6(VAR_12, VAR_16) != 0) {
   FUNC_4(VAR_15, VAR_7, 1);
   VAR_16->ste_ptr->ste_status = 0;
   continue;
  }

  VAR_14->m_pkthdr.rcvif = VAR_15;
  VAR_14->m_pkthdr.len = VAR_14->m_len = VAR_18;

  FUNC_4(VAR_15, VAR_6, 1);
  FUNC_2(VAR_12);
  (*VAR_15->if_input)(VAR_15, VAR_14);
  FUNC_0(VAR_12);
 }

 if (VAR_19 > 0) {
  VAR_12->ste_cdata.ste_rx_head = VAR_16;
  FUNC_3(VAR_12->ste_cdata.ste_rx_list_tag,
      VAR_12->ste_cdata.ste_rx_list_map,
      VAR_2 | VAR_3);
 }

 return (VAR_19);
}
