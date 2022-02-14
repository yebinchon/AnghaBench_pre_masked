
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_softc {scalar_t__ sc_nqchip; int sc_qchip; } ;
struct ubsec_q {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ubsec_q* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ubsec_softc*,struct ubsec_q*) ;

__attribute__((used)) static void
FUNC_4(struct ubsec_softc *VAR_1)
{
 struct ubsec_q *VAR_2;

 while (!FUNC_0(&VAR_1->sc_qchip)) {
  VAR_2 = FUNC_1(&VAR_1->sc_qchip);
  FUNC_2(&VAR_1->sc_qchip, VAR_0);
  FUNC_3(VAR_1, VAR_2);
 }
 VAR_1->sc_nqchip = 0;
}
