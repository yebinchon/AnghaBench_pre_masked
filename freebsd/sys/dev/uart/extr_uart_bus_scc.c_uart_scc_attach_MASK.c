
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {struct mtx* sc_hwmtx; } ;
struct mtx {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct uart_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 device_t VAR_3;
 struct uart_softc *VAR_4;
 uintptr_t VAR_5;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_3, VAR_2, VAR_1, &VAR_5))
  return (VAR_0);
 VAR_4->sc_hwmtx = (struct mtx *)(void *)VAR_5;
 return (FUNC_3(VAR_2));
}
