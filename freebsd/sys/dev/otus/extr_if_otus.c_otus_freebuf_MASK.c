
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_tx_inactive; } ;
struct otus_data {int dummy; } ;


 int FUNC_0 (struct otus_softc*) ;
 int FUNC_1 (int *,struct otus_data*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct otus_softc *VAR_1, struct otus_data *VAR_2)
{

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->sc_tx_inactive, VAR_2, VAR_0);
}
