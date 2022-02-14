
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ehci_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ehci_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

uint16_t
FUNC_2(struct ehci_softc *VAR_6, uint16_t VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = FUNC_1(VAR_6, FUNC_0(VAR_7));
 VAR_8 = (VAR_8 >> VAR_1) & VAR_0;

 if (VAR_8 == VAR_2)
  return (VAR_4);
 if (VAR_8 == VAR_3)
  return (VAR_5);
 return (0);
}
