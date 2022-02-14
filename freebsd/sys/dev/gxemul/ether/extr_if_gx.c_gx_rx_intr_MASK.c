
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ len; TYPE_2__* rcvif; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; int m_data; } ;
struct gx_softc {TYPE_2__* sc_ifp; int sc_dev; } ;
struct TYPE_5__ {int (* if_input ) (TYPE_2__*,struct mbuf*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gx_softc*) ;
 int FUNC_4 (struct gx_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 struct mbuf* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,void const*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_15)
{
 struct gx_softc *VAR_16 = VAR_15;

 FUNC_3(VAR_16);
 for (;;) {
  uint64_t VAR_17, VAR_18;
  struct mbuf *VAR_19;





  VAR_17 = FUNC_1(VAR_5);
  if (VAR_17 == VAR_6) {
   FUNC_2(VAR_2, VAR_3);
   continue;
  }
  if (VAR_17 != VAR_7)
   break;
  VAR_18 = FUNC_1(VAR_4);
  if (VAR_18 > VAR_11 - VAR_0) {
   FUNC_6(VAR_16->sc_ifp, VAR_8, 1);
   continue;
  }

  VAR_19 = FUNC_7(VAR_13, VAR_12, VAR_14);
  if (VAR_19 == ((void*)0)) {
   FUNC_5(VAR_16->sc_dev, "no memory for receive mbuf.\n");
   FUNC_6(VAR_16->sc_ifp, VAR_10, 1);
   FUNC_4(VAR_16);
   return;
  }


  VAR_19->m_data += VAR_0;

  FUNC_8(VAR_19->m_data, (const void *)(uintptr_t)FUNC_0(VAR_1), VAR_18);

  VAR_19->m_pkthdr.rcvif = VAR_16->sc_ifp;
  VAR_19->m_pkthdr.len = VAR_19->m_len = VAR_18;

  FUNC_6(VAR_16->sc_ifp, VAR_9, 1);

  FUNC_4(VAR_16);

  (*VAR_16->sc_ifp->if_input)(VAR_16->sc_ifp, VAR_19);

  FUNC_3(VAR_16);
 }
 FUNC_4(VAR_16);
}
