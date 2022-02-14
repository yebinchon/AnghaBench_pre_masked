
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct uart_softc* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct uart_softc *VAR_4;
 device_t VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 VAR_4 = FUNC_2(VAR_3);


 if (FUNC_0(VAR_5, VAR_3, VAR_1) == VAR_0)
  return (VAR_0);


 VAR_4->sc_class = &VAR_2;

 return (FUNC_3(VAR_3, 0, 0, 0, 0, 0, 0));
}
