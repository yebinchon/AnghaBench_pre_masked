
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ error; int transferred; } ;
typedef TYPE_2__ xdma_transfer_status_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {struct ifnet* rcvif; int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_len; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct atse_softc {int xchan_rx; struct ifnet* atse_ifp; } ;


 int FUNC_0 (struct atse_softc*) ;
 int FUNC_1 (struct atse_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct atse_softc*,scalar_t__) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct mbuf*,int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct ifnet*,struct mbuf*) ;
 int FUNC_7 (int ,struct mbuf**,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_2, xdma_transfer_status_t *VAR_3)
{
 xdma_transfer_status_t VAR_4;
 struct atse_softc *VAR_5;
 struct ifnet *VAR_6;
 struct mbuf *VAR_7;
 int VAR_8;
 uint32_t VAR_9;

 VAR_5 = VAR_2;

 FUNC_0(VAR_5);

 VAR_6 = VAR_5->atse_ifp;

 VAR_9 = 0;
 for (;;) {
  VAR_8 = FUNC_7(VAR_5->xchan_rx, &VAR_7, &VAR_4);
  if (VAR_8 != 0) {
   break;
  }
  VAR_9++;

  if (VAR_4.error != 0) {
   FUNC_3(VAR_6, VAR_1, 1);
   FUNC_5(VAR_7);
   continue;
  }

  VAR_7->m_pkthdr.len = VAR_7->m_len = VAR_4.transferred;
  VAR_7->m_pkthdr.rcvif = VAR_6;
  FUNC_4(VAR_7, VAR_0);
  FUNC_1(VAR_5);
  (*VAR_6->if_input)(VAR_6, VAR_7);
  FUNC_0(VAR_5);
 }

 FUNC_2(VAR_5, VAR_9);

 FUNC_1(VAR_5);

 return (0);
}
