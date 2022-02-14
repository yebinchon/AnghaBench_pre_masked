
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_irid; } ;
typedef int device_t ;


 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct uart_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);





 if (FUNC_3(VAR_0) > 0) {
  VAR_2 = 1;
  if (FUNC_2(VAR_0, &VAR_2) == 0) {
   VAR_1->sc_irid = 1;
   FUNC_1(VAR_0, "Using %d MSI message\n", VAR_2);
  }
 }

 return (FUNC_4(VAR_0));
}
