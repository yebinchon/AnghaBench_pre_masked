
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {int * sc_xfer; int sc_tx_pending; } ;
struct upgt_data {int dummy; } ;


 int FUNC_0 (int *,struct upgt_data*,int ) ;
 int FUNC_1 (struct upgt_softc*) ;
 size_t VAR_0 ;
 int FUNC_2 (struct upgt_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct upgt_softc *VAR_3, struct upgt_data *VAR_4)
{

 FUNC_1(VAR_3);

 FUNC_0(&VAR_3->sc_tx_pending, VAR_4, VAR_1);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(VAR_3->sc_xfer[VAR_0]);
}
