
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
struct uart_devinfo {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct uart_softc* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char const* VAR_2 ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,struct uart_devinfo*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 const char *VAR_5, *VAR_6;
 struct uart_softc *VAR_7;
 struct uart_devinfo VAR_8;

 VAR_7 = FUNC_1(VAR_4);
 VAR_7->sc_class = ((void*)0);

 VAR_5 = FUNC_3(VAR_4);
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0))
  VAR_6 = "";
 if (!FUNC_4(VAR_5, "lom-console") || !FUNC_4(VAR_5, "su") ||
     !FUNC_4(VAR_5, "su_pnp") || !FUNC_4(VAR_6, "rsc-console") ||
     !FUNC_4(VAR_6, "rsc-control") || !FUNC_4(VAR_6, "su") ||
     !FUNC_4(VAR_6, "su16550") || !FUNC_4(VAR_6, "su16552")) {
  if ((!FUNC_4(VAR_2, "SUNW,UltraAX-MP") ||
      !FUNC_4(VAR_2, "SUNW,UltraSPARC-IIi-Engine")) &&
      FUNC_6(VAR_1, &VAR_8)) {
    FUNC_0(VAR_4);
    return (VAR_0);
  }
  VAR_7->sc_class = &VAR_3;
  return (FUNC_5(VAR_4, 0, 0, 0, 0, 0, 0));
 }

 return (VAR_0);
}
