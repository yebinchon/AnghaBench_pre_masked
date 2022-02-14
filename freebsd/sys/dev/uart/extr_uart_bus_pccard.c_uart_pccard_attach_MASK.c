
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
typedef int device_t ;


 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct uart_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->sc_class = &VAR_0;

 VAR_3 = FUNC_2(VAR_1, 0, 0, 0, 0, 0, 0);
 if (VAR_3 > 0)
  return (VAR_3);
 return (FUNC_1(VAR_1));
}
