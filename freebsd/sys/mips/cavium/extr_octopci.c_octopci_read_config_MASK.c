
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct octopci_softc {int sc_domain; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct octopci_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_11(device_t VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
    int VAR_6)
{
 struct octopci_softc *VAR_7;
 uint64_t VAR_8;
 uint32_t VAR_9;

 VAR_7 = FUNC_6(VAR_1);

 if (FUNC_9(VAR_0)) {
  if (VAR_2 == 0 && VAR_3 == 0 && VAR_4 == 0)
   return ((uint32_t)-1);

  switch (VAR_6) {
  case 4:
   return (FUNC_1(VAR_7->sc_domain, VAR_2, VAR_3, VAR_4, VAR_5));
  case 2:
   return (FUNC_0(VAR_7->sc_domain, VAR_2, VAR_3, VAR_4, VAR_5));
  case 1:
   return (FUNC_2(VAR_7->sc_domain, VAR_2, VAR_3, VAR_4, VAR_5));
  default:
   return ((uint32_t)-1);
  }
 }

 VAR_8 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);

 switch (VAR_6) {
 case 4:
  VAR_9 = FUNC_8(FUNC_4(VAR_8));
  return (VAR_9);
 case 2:
  VAR_9 = FUNC_7(FUNC_3(VAR_8));
  return (VAR_9);
 case 1:
  VAR_9 = FUNC_5(VAR_8);
  return (VAR_9);
 default:
  return ((uint32_t)-1);
 }
}
