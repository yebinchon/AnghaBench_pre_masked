
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octm_softc {int sc_port; TYPE_4__* sc_ifp; int sc_dev; } ;
struct TYPE_7__ {int len; TYPE_4__* rcvif; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; int m_data; } ;
struct TYPE_6__ {int irthresh; } ;
struct TYPE_8__ {int u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_mixx_isr_t ;
struct TYPE_9__ {int (* if_input ) (TYPE_4__*,struct mbuf*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_4__*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_6)
{
 struct octm_softc *VAR_7 = VAR_6;
 cvmx_mixx_isr_t VAR_8;
 int VAR_9;

 VAR_8.u64 = FUNC_2(FUNC_0(VAR_7->sc_port));
 if (!VAR_8.s.irthresh) {
  FUNC_4(VAR_7->sc_dev, "stray interrupt.\n");
  return;
 }

 for (;;) {
  struct mbuf *VAR_10 = FUNC_7(VAR_4, VAR_3, VAR_5);
  if (VAR_10 == ((void*)0)) {
   FUNC_4(VAR_7->sc_dev, "no memory for receive mbuf.\n");
   return;
  }


  VAR_9 = FUNC_1(VAR_7->sc_port, VAR_2, VAR_10->m_data);
  if (VAR_9 > 0) {
   VAR_10->m_pkthdr.rcvif = VAR_7->sc_ifp;
   VAR_10->m_pkthdr.len = VAR_10->m_len = VAR_9;

   FUNC_5(VAR_7->sc_ifp, VAR_1, 1);

   (*VAR_7->sc_ifp->if_input)(VAR_7->sc_ifp, VAR_10);

   continue;
  }

  FUNC_6(VAR_10);

  if (VAR_9 == 0)
   break;

  FUNC_5(VAR_7->sc_ifp, VAR_0, 1);
 }


 FUNC_3(FUNC_0(VAR_7->sc_port), VAR_8.u64);
 FUNC_2(FUNC_0(VAR_7->sc_port));
}
