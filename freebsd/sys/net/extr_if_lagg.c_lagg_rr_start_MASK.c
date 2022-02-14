
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct lagg_softc {scalar_t__ sc_bkt_count; scalar_t__ sc_bkt; int sc_ports; int sc_count; int sc_seq; } ;
struct lagg_port {int lp_ifp; } ;


 struct lagg_port* FUNC_0 (int *) ;
 struct lagg_port* FUNC_1 (struct lagg_port*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (int ,struct mbuf*) ;
 struct lagg_port* FUNC_6 (struct lagg_softc*,struct lagg_port*) ;
 int VAR_1 ;
 int FUNC_7 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_8(struct lagg_softc *VAR_2, struct mbuf *VAR_3)
{
 struct lagg_port *VAR_4;
 uint32_t VAR_5;

 if (VAR_2->sc_bkt_count == 0 && VAR_2->sc_bkt > 0)
  VAR_2->sc_bkt_count = VAR_2->sc_bkt;

 if (VAR_2->sc_bkt > 0) {
  FUNC_4(&VAR_2->sc_bkt_count, 1);
 if (FUNC_2(&VAR_2->sc_bkt_count, 0, VAR_2->sc_bkt))
  VAR_5 = FUNC_3(&VAR_2->sc_seq, 1);
 else
  VAR_5 = VAR_2->sc_seq;
 } else
  VAR_5 = FUNC_3(&VAR_2->sc_seq, 1);

 VAR_5 %= VAR_2->sc_count;
 VAR_4 = FUNC_0(&VAR_2->sc_ports);

 while (VAR_5--)
  VAR_4 = FUNC_1(VAR_4, VAR_1);





 if ((VAR_4 = FUNC_6(VAR_2, VAR_4)) == ((void*)0)) {
  FUNC_7(VAR_3);
  return (VAR_0);
 }


 return (FUNC_5(VAR_4->lp_ifp, VAR_3));
}
