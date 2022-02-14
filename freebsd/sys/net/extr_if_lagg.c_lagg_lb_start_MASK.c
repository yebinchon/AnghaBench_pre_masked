
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct lagg_softc {int sc_opts; size_t flowid_shift; size_t sc_count; int sc_flags; scalar_t__ sc_psc; } ;
struct lagg_port {int lp_ifp; } ;
struct lagg_lb {struct lagg_port** lb_ports; int lb_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct mbuf*) ;
 struct lagg_port* FUNC_2 (struct lagg_softc*,struct lagg_port*) ;
 size_t FUNC_3 (int ,struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_5(struct lagg_softc *VAR_3, struct mbuf *VAR_4)
{
 struct lagg_lb *VAR_5 = (struct lagg_lb *)VAR_3->sc_psc;
 struct lagg_port *VAR_6 = ((void*)0);
 uint32_t VAR_7 = 0;

 if ((VAR_3->sc_opts & VAR_1) &&
     FUNC_0(VAR_4) != VAR_2)
  VAR_7 = VAR_4->m_pkthdr.flowid >> VAR_3->flowid_shift;
 else
  VAR_7 = FUNC_3(VAR_3->sc_flags, VAR_4, VAR_5->lb_key);
 VAR_7 %= VAR_3->sc_count;
 VAR_6 = VAR_5->lb_ports[VAR_7];





 if ((VAR_6 = FUNC_2(VAR_3, VAR_6)) == ((void*)0)) {
  FUNC_4(VAR_4);
  return (VAR_0);
 }


 return (FUNC_1(VAR_6->lp_ifp, VAR_4));
}
