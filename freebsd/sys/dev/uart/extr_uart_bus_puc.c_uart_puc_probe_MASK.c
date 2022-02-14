
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int FUNC_1 (int ) ;
 struct uart_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,uintptr_t,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5)
{
 device_t VAR_6;
 struct uart_softc *VAR_7;
 uintptr_t VAR_8, VAR_9;

 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = FUNC_2(VAR_5);

 if (FUNC_0(VAR_6, VAR_5, VAR_2, &VAR_9))
  return (VAR_0);
 if (VAR_9 != VAR_3)
  return (VAR_0);

 VAR_7->sc_class = &VAR_4;

 if (FUNC_0(VAR_6, VAR_5, VAR_1, &VAR_8))
  VAR_8 = 0;
 return (FUNC_3(VAR_5, 0, 0, VAR_8, 0, 0, 0));
}
