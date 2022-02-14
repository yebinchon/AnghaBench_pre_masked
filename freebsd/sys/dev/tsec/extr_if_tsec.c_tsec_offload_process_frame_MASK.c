
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsec_softc {int dummy; } ;
struct tsec_rx_fcb {int flags; int protocol; int vlan; } ;
struct TYPE_2__ {int csum_data; int csum_flags; int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tsec_softc*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mbuf*,int) ;
 int FUNC_4 (struct mbuf*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct tsec_softc *VAR_10, struct mbuf *VAR_11)
{
 struct tsec_rx_fcb VAR_12;
 int VAR_13 = 0;
 int VAR_14, VAR_15;

 FUNC_0(VAR_10);

 FUNC_4(VAR_11, 0, sizeof(struct tsec_rx_fcb), (caddr_t)(&VAR_12));
 VAR_15 = VAR_12.flags;
 VAR_14 = VAR_12.protocol;

 if (FUNC_1(VAR_15)) {
  VAR_13 |= VAR_1;

  if ((VAR_15 & VAR_7) == 0)
   VAR_13 |= VAR_2;
 }

 if ((VAR_14 == VAR_4 || VAR_14 == VAR_5) &&
     FUNC_2(VAR_15) &&
     (VAR_15 & VAR_8) == 0) {

  VAR_13 |= VAR_0 | VAR_3;
  VAR_11->m_pkthdr.csum_data = 0xFFFF;
 }

 VAR_11->m_pkthdr.csum_flags = VAR_13;

 if (VAR_15 & VAR_9) {
  VAR_11->m_pkthdr.ether_vtag = VAR_12.vlan;
  VAR_11->m_flags |= VAR_6;
 }

 FUNC_3(VAR_11, sizeof(struct tsec_rx_fcb));
}
