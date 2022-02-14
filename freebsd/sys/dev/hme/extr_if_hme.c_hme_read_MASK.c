
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {scalar_t__ len; struct ifnet* rcvif; } ;
struct mbuf {scalar_t__ m_len; TYPE_3__ m_pkthdr; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_5__ {TYPE_1__* rb_rxdesc; } ;
struct hme_softc {TYPE_2__ sc_rb; int sc_dev; struct ifnet* sc_ifp; } ;
struct ether_header {int dummy; } ;
struct TYPE_4__ {struct mbuf* hrx_m; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hme_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct hme_softc*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct hme_softc*,int,int ) ;
 int FUNC_5 (struct hme_softc*,int) ;
 int FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (struct mbuf*,scalar_t__) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct hme_softc *VAR_7, int VAR_8, int VAR_9, u_int32_t VAR_10)
{
 struct ifnet *VAR_11 = VAR_7->sc_ifp;
 struct mbuf *VAR_12;

 if (VAR_9 <= sizeof(struct ether_header) ||
     VAR_9 > VAR_0) {




  FUNC_7(VAR_11, VAR_3, 1);
  FUNC_5(VAR_7, VAR_8);
  return;
 }

 VAR_12 = VAR_7->sc_rb.rb_rxdesc[VAR_8].hrx_m;
 FUNC_0(VAR_6, "hme_read: len %d", VAR_9);

 if (FUNC_4(VAR_7, VAR_8, 0) != 0) {





  FUNC_7(VAR_11, VAR_5, 1);
  FUNC_5(VAR_7, VAR_8);
  return;
 }

 FUNC_7(VAR_11, VAR_4, 1);

 VAR_12->m_pkthdr.rcvif = VAR_11;
 VAR_12->m_pkthdr.len = VAR_12->m_len = VAR_9 + VAR_1;
 FUNC_8(VAR_12, VAR_1);

 if (VAR_11->if_capenable & VAR_2)
  FUNC_6(VAR_12, VAR_10);

 FUNC_2(VAR_7);
 (*VAR_11->if_input)(VAR_11, VAR_12);
 FUNC_1(VAR_7);
}
