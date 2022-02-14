
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ ppsparam; } ;
struct uart_softc {int sc_ttypend; scalar_t__ sc_opened; TYPE_2__ sc_pps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct uart_softc*,int) ;
 int FUNC_3 (struct uart_softc*,int ) ;

__attribute__((used)) static __inline int
FUNC_4(void *VAR_4)
{
 struct uart_softc *VAR_5 = VAR_4;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_5);





 if (VAR_5->sc_pps.ppsparam.mode & VAR_0) {
  FUNC_2(VAR_5, VAR_8);
 }
 do {
  VAR_7 = VAR_5->sc_ttypend;
  VAR_6 = VAR_7 & ~VAR_3;
  VAR_6 |= VAR_8 & VAR_2;
 } while (!FUNC_1(&VAR_5->sc_ttypend, VAR_7, VAR_6));

 if (VAR_5->sc_opened)
  FUNC_3(VAR_5, VAR_1);
 return (1);
}
