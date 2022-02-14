
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct iwn_softc {int sc_xmit_queue; } ;


 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (int *,struct mbuf*) ;

__attribute__((used)) static int
FUNC_2(struct iwn_softc *VAR_0, struct mbuf *VAR_1)
{

 FUNC_0(VAR_0);
 return (FUNC_1(&VAR_0->sc_xmit_queue, VAR_1));
}
