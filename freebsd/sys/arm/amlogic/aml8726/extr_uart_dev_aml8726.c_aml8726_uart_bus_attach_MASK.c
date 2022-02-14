
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct uart_bas {scalar_t__ rclk; } ;
struct uart_softc {TYPE_1__* sc_sysdev; int sc_dev; struct uart_bas sc_bas; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct uart_softc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_bas*) ;
 int FUNC_5 (struct uart_bas*,int ) ;
 int FUNC_6 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_16)
{
 struct uart_bas *VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;

 VAR_17 = &VAR_16->sc_bas;

 VAR_17->rclk = FUNC_0(FUNC_3(VAR_16->sc_dev));

 if (VAR_17->rclk == 0) {
  FUNC_2(VAR_16->sc_dev, "missing clocks attribute in FDT\n");
  return (VAR_14);
 }

 VAR_18 = FUNC_5(VAR_17, VAR_1);

 VAR_18 &= ~(VAR_7 | VAR_3);

 VAR_18 &= ~(VAR_8 | VAR_4);
 if (VAR_16->sc_sysdev != ((void*)0) && VAR_16->sc_sysdev->type == VAR_15)
  ;
 else
  VAR_18 |= (VAR_8 | VAR_4);


 VAR_18 |= VAR_5;

 VAR_18 |= (VAR_6 | VAR_2);

 VAR_18 |= VAR_0;
 FUNC_6(VAR_17, VAR_1, VAR_18);
 FUNC_4(VAR_17);


 VAR_19 = FUNC_5(VAR_17, VAR_11);
 VAR_19 &= ~VAR_12;
 VAR_19 |= (0 << VAR_13);
 VAR_19 &= ~VAR_9;
 VAR_19 |= (1 << VAR_10);
 FUNC_6(VAR_17, VAR_11, VAR_19);
 FUNC_4(VAR_17);

 FUNC_1(VAR_16);


 VAR_18 &= ~(VAR_8 | VAR_4);
 VAR_18 &= ~VAR_0;

 VAR_18 |= VAR_3;
 FUNC_6(VAR_17, VAR_1, VAR_18);
 FUNC_4(VAR_17);

 return (0);
}
