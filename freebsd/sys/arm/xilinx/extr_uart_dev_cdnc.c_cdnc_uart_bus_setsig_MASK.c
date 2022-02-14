
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_7, int VAR_8)
{
 struct uart_bas *VAR_9 = &VAR_7->sc_bas;
 uint32_t VAR_10, VAR_11, VAR_12;

 do {
  VAR_11 = VAR_7->sc_hwsig;
  VAR_10 = VAR_11;
  if (VAR_8 & VAR_3) {
   FUNC_1(VAR_8 & VAR_5, VAR_10, VAR_5, VAR_3);
  }
  if (VAR_8 & VAR_4) {
   FUNC_1(VAR_8 & VAR_6, VAR_10, VAR_6, VAR_4);
  }
 } while (!FUNC_3(&VAR_7->sc_hwsig, VAR_11, VAR_10));
 FUNC_4(VAR_7->sc_hwmtx);
 VAR_12 = FUNC_0(VAR_9, VAR_0) &
  ~(VAR_1 | VAR_2);
 if ((VAR_10 & VAR_5) != 0)
  VAR_12 |= VAR_1;
 if ((VAR_10 & VAR_6) != 0)
  VAR_12 |= VAR_2;
 FUNC_2(VAR_9, VAR_0, VAR_12);

 FUNC_5(VAR_7->sc_hwmtx);
 return (0);
}
