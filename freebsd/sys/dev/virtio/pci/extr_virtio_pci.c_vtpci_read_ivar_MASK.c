
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {scalar_t__ vtpci_child_dev; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;





 struct vtpci_softc* FUNC_0 (scalar_t__) ;
 uintptr_t FUNC_1 (scalar_t__) ;
 uintptr_t FUNC_2 (scalar_t__) ;
 uintptr_t FUNC_3 (scalar_t__) ;
 uintptr_t FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct vtpci_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->vtpci_child_dev != VAR_2)
  return (VAR_0);

 switch (VAR_3) {
 case 131:
 case 130:
  *VAR_4 = FUNC_2(VAR_1);
  break;
 case 128:
  *VAR_4 = FUNC_4(VAR_1);
  break;
 case 132:
  *VAR_4 = FUNC_1(VAR_1);
  break;
 case 129:
  *VAR_4 = FUNC_3(VAR_1);
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
