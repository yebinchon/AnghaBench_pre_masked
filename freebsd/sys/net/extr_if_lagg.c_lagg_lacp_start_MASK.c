
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct lagg_softc {int dummy; } ;
struct lagg_port {int lp_ifp; } ;


 int VAR_0 ;
 struct lagg_port* FUNC_0 (struct lagg_softc*,struct mbuf*) ;
 int FUNC_1 (int ,struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_3(struct lagg_softc *VAR_1, struct mbuf *VAR_2)
{
 struct lagg_port *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_2);
  return (VAR_0);
 }


 return (FUNC_1(VAR_3->lp_ifp, VAR_2));
}
