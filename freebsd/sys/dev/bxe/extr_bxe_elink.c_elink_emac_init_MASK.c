
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_params {int port; int* mac_addr; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_5 (struct bxe_softc*,int,int) ;
 int FUNC_6 (struct bxe_softc*,struct elink_params*) ;

__attribute__((used)) static void FUNC_7(struct elink_params *VAR_9,
       struct elink_vars *VAR_10)
{

 struct bxe_softc *VAR_11 = VAR_9->sc;
 uint8_t VAR_12 = VAR_9->port;
 uint32_t VAR_13 = VAR_12 ? VAR_4 : VAR_3;
 uint32_t VAR_14;
 uint16_t VAR_15;

 FUNC_4(VAR_11, VAR_5 + VAR_6,
        (VAR_7 << VAR_12));
 FUNC_0(5);
 FUNC_4(VAR_11, VAR_5 + VAR_8,
        (VAR_7 << VAR_12));



 VAR_14 = FUNC_3(VAR_11, VAR_13 + VAR_2);
 FUNC_5(VAR_11, VAR_13 + VAR_2, (VAR_14 | VAR_0));

 VAR_15 = 200;
 do {
  VAR_14 = FUNC_3(VAR_11, VAR_13 + VAR_2);
  FUNC_2(VAR_11, "EMAC reset reg is %u\n", VAR_14);
  if (!VAR_15) {
   FUNC_1(VAR_11, "EMAC timeout!\n");
   return;
  }
  VAR_15--;
 } while (VAR_14 & VAR_0);

 FUNC_6(VAR_11, VAR_9);

 VAR_14 = ((VAR_9->mac_addr[0] << 8) |
  VAR_9->mac_addr[1]);
 FUNC_5(VAR_11, VAR_13 + VAR_1, VAR_14);

 VAR_14 = ((VAR_9->mac_addr[2] << 24) |
        (VAR_9->mac_addr[3] << 16) |
        (VAR_9->mac_addr[4] << 8) |
  VAR_9->mac_addr[5]);
 FUNC_5(VAR_11, VAR_13 + VAR_1 + 4, VAR_14);
}
