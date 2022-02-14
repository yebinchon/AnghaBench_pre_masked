
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpsw_softc {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int const FUNC_2 (int*) ;



 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int VAR_0 ;
 int FUNC_8 (struct cpsw_softc*,int,int*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(struct cpsw_softc *VAR_1) {
 int VAR_2;
 uint32_t VAR_3[3];
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_8(VAR_1, VAR_2, VAR_3);
  switch (FUNC_2(VAR_3)) {
  case 129:
   FUNC_9("ALE[%4u] %08x %08x %08x ", VAR_2, VAR_3[2],
    VAR_3[1], VAR_3[0]);
   FUNC_9("type: %u ", FUNC_2(VAR_3));
   FUNC_9("vlan: %u ", FUNC_3(VAR_3));
   FUNC_9("untag: %u ", FUNC_7(VAR_3));
   FUNC_9("reg flood: %u ", FUNC_5(VAR_3));
   FUNC_9("unreg flood: %u ", FUNC_6(VAR_3));
   FUNC_9("members: %u ", FUNC_4(VAR_3));
   FUNC_9("\n");
   break;
  case 130:
  case 128:
   FUNC_9("ALE[%4u] %08x %08x %08x ", VAR_2, VAR_3[2],
    VAR_3[1], VAR_3[0]);
   FUNC_9("type: %u ", FUNC_2(VAR_3));
   FUNC_9("mac: %02x:%02x:%02x:%02x:%02x:%02x ",
    (VAR_3[1] >> 8) & 0xFF,
    (VAR_3[1] >> 0) & 0xFF,
    (VAR_3[0] >>24) & 0xFF,
    (VAR_3[0] >>16) & 0xFF,
    (VAR_3[0] >> 8) & 0xFF,
    (VAR_3[0] >> 0) & 0xFF);
   FUNC_9(FUNC_0(VAR_3) ? "mcast " : "ucast ");
   if (FUNC_2(VAR_3) == 128)
    FUNC_9("vlan: %u ", FUNC_3(VAR_3));
   FUNC_9("port: %u ", FUNC_1(VAR_3));
   FUNC_9("\n");
   break;
  }
 }
 FUNC_9("\n");
}
