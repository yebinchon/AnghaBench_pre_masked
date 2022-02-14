
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct octopci_softc {int sc_domain; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct octopci_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(device_t VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    u_int VAR_5, uint32_t VAR_6, int VAR_7)
{
 struct octopci_softc *VAR_8;
 uint64_t VAR_9;

 VAR_8 = FUNC_6(VAR_1);

 if (FUNC_9(VAR_0)) {
  switch (VAR_7) {
  case 4:
   FUNC_1(VAR_8->sc_domain, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   return;
  case 2:
   FUNC_0(VAR_8->sc_domain, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   return;
  case 1:
   FUNC_2(VAR_8->sc_domain, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   return;
  default:
   return;
  }
 }

 VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);

 switch (VAR_7) {
 case 4:
  FUNC_4(VAR_9, FUNC_8(VAR_6));
  return;
 case 2:
  FUNC_3(VAR_9, FUNC_7(VAR_6));
  return;
 case 1:
  FUNC_5(VAR_9, VAR_6);
  return;
 default:
  return;
 }
}
