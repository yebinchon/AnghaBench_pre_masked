
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 uintptr_t VAR_6 ;
 int FUNC_1 (int ) ;
 struct uart_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,uintptr_t,int ,uintptr_t,int ,uintptr_t,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_10)
{
 device_t VAR_11;
 struct uart_softc *VAR_12;
 uintptr_t VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = FUNC_2(VAR_10);

 if (FUNC_0(VAR_11, VAR_10, VAR_4, &VAR_15) ||
     FUNC_0(VAR_11, VAR_10, VAR_2, &VAR_14))
  return (VAR_0);
 if (VAR_15 != VAR_6)
  return (VAR_0);
 switch (VAR_14) {
 case 130:
  VAR_12->sc_class = &VAR_7;
  break;
 case 129:
  VAR_12->sc_class = &VAR_8;
  break;
 case 128:
  VAR_12->sc_class = &VAR_9;
  break;
 default:
  return (VAR_0);
 }
 if (FUNC_0(VAR_11, VAR_10, VAR_1, &VAR_13) ||
     FUNC_0(VAR_11, VAR_10, VAR_3, &VAR_14) ||
     FUNC_0(VAR_11, VAR_10, VAR_5, &VAR_16))
  return (VAR_0);

 return (FUNC_3(VAR_10, VAR_16, 0, VAR_14, 0, VAR_13, 0));
}
