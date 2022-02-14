
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {scalar_t__ ext_arg2; struct cas_softc* ext_arg1; } ;
struct mbuf {TYPE_1__ m_ext; } ;
struct cas_softc {struct cas_rxdsoft* sc_rxdsoft; } ;
struct cas_rxdsoft {int rxds_refcount; } ;


 int FUNC_0 (struct cas_softc*) ;
 size_t FUNC_1 (struct cas_softc*) ;
 int FUNC_2 (struct cas_softc*) ;
 int FUNC_3 (struct cas_softc*,size_t) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct mbuf *VAR_0)
{
 struct cas_rxdsoft *VAR_1;
 struct cas_softc *VAR_2;
 u_int VAR_3, VAR_4;

 VAR_2 = VAR_0->m_ext.ext_arg1;
 VAR_3 = (uintptr_t)VAR_0->m_ext.ext_arg2;
 VAR_1 = &VAR_2->sc_rxdsoft[VAR_3];
 if (FUNC_4(&VAR_1->rxds_refcount) == 0)
  return;





 if ((VAR_4 = FUNC_1(VAR_2)) == 0)
  FUNC_0(VAR_2);
 FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == 0)
  FUNC_2(VAR_2);
}
