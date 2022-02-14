
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int bsh; int bst; } ;
struct uart_softc {scalar_t__ sc_txbusy; int sc_hwmtx; TYPE_1__ sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_2(VAR_4->sc_hwmtx);
 VAR_5 = FUNC_0(VAR_4->sc_bas.bst, VAR_4->sc_bas.bsh, VAR_3);
 FUNC_1(VAR_4->sc_bas.bst, VAR_4->sc_bas.bsh, VAR_3, VAR_5);

 VAR_6 = (1 << 2);
 VAR_7 = (1 << 0);

 VAR_9 = 0;
 if ((VAR_5 & VAR_6) > 0) {
  if (VAR_4->sc_txbusy != 0)
   VAR_9 |= VAR_1;


  VAR_8 = FUNC_0(VAR_4->sc_bas.bst, VAR_4->sc_bas.bsh,
      VAR_2);
  VAR_8 |= (1 << 2);
  FUNC_1(VAR_4->sc_bas.bst, VAR_4->sc_bas.bsh,
      VAR_2, VAR_8);
 }

 if ((VAR_5 & VAR_7) > 0) {
  VAR_9 |= VAR_0;
 }

 FUNC_3(VAR_4->sc_hwmtx);
 return (VAR_9);
}
