
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bsh; int bst; } ;
struct uart_softc {int sc_txdatasz; int sc_txbusy; TYPE_1__ sc_bas; int sc_hwmtx; int * sc_txbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_4(VAR_1->sc_hwmtx);

 for (VAR_2 = 0; VAR_2 < VAR_1->sc_txdatasz; VAR_2++) {
  FUNC_2(&VAR_1->sc_bas, VAR_1->sc_txbuf[VAR_2]);
  FUNC_3(&VAR_1->sc_bas);
 }

 VAR_1->sc_txbusy = 1;

 FUNC_5(VAR_1->sc_hwmtx);


 VAR_3 = FUNC_0(VAR_1->sc_bas.bst, VAR_1->sc_bas.bsh, VAR_0);
 VAR_3 &= ~(1 << 2);
 FUNC_1(VAR_1->sc_bas.bst, VAR_1->sc_bas.bsh, VAR_0, VAR_3);

 return (0);
}
