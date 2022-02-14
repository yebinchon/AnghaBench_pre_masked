
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_softc {int * sc_class; } ;
typedef int device_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct uart_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct uart_softc *VAR_2;
 u_int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->sc_class = &VAR_0;

 VAR_3 = FUNC_1(FUNC_0());
 return (FUNC_3(VAR_1, 0, 0, VAR_3, 0, 0, 0));
}
