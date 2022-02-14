
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {scalar_t__ sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;
struct msm_uart_softc {int ier; } ;


 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_12)
{
 struct msm_uart_softc *VAR_13 = (struct msm_uart_softc *)VAR_12;
 struct uart_bas *VAR_14 = &VAR_12->sc_bas;
 uint32_t VAR_15;
 int VAR_16;

 FUNC_3(VAR_12->sc_hwmtx);


 VAR_15 = FUNC_0(VAR_14, VAR_5);

 VAR_16 = 0;


 if (VAR_15 & VAR_7) {
  VAR_13->ier &= ~VAR_7;
  FUNC_1(VAR_14, VAR_4, VAR_13->ier);
  FUNC_2(VAR_14);
  VAR_16 |= VAR_0;
 }


 if (VAR_15 & VAR_8) {

  FUNC_1(VAR_14, VAR_3, VAR_9);
  FUNC_1(VAR_14, VAR_3, VAR_6);
  FUNC_2(VAR_14);
  VAR_16 |= VAR_0;
 }


 if (VAR_15 & VAR_11) {

  FUNC_1(VAR_14, VAR_3, VAR_2);


  VAR_13->ier &= ~VAR_11;
  FUNC_1(VAR_14, VAR_4, VAR_13->ier);
  FUNC_2(VAR_14);

  if (VAR_12->sc_txbusy != 0)
   VAR_16 |= VAR_1;
 }

 if (VAR_15 & VAR_10) {

  VAR_13->ier &= ~VAR_10;
  FUNC_1(VAR_14, VAR_4, VAR_13->ier);
  FUNC_2(VAR_14);

  if (VAR_12->sc_txbusy != 0)
   VAR_16 |= VAR_1;
 }

 FUNC_4(VAR_12->sc_hwmtx);
 return (VAR_16);
}
