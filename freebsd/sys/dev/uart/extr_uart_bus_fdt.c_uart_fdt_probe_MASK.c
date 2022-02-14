
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {struct uart_class* sc_class; } ;
struct uart_class {int dummy; } ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct uart_class*) ;
 scalar_t__ FUNC_9 (struct uart_class*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_1)
{
 struct uart_softc *VAR_2;
 phandle_t VAR_3;
 pcell_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_2(VAR_1))
  return (VAR_0);

 VAR_2->sc_class = (struct uart_class *)FUNC_4(VAR_1);
 if (VAR_2->sc_class == ((void*)0))
  return (VAR_0);

 VAR_3 = FUNC_1(VAR_1);

 if ((VAR_7 = FUNC_5(VAR_3, &VAR_4)) != 0)
  return (VAR_7);
 if (FUNC_7(VAR_3, &VAR_5) != 0)
  VAR_5 = FUNC_9(VAR_2->sc_class);
 if (FUNC_6(VAR_3, &VAR_6) != 0)
  VAR_6 = FUNC_8(VAR_2->sc_class);

 return (FUNC_3(VAR_1, (int)VAR_5, (int)VAR_6, (int)VAR_4, 0, 0, 0));
}
