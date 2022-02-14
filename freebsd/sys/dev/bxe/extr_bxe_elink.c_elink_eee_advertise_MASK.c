
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int eee_status; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static elink_status_t FUNC_3(struct elink_phy *VAR_8,
      struct elink_params *VAR_9,
      struct elink_vars *VAR_10, uint8_t VAR_11)
{
 struct bxe_softc *VAR_12 = VAR_9->sc;
 uint16_t VAR_13 = 0;


 FUNC_1(VAR_12, VAR_3 + (VAR_9->port << 2), 0xfc20);

 if (VAR_11 & VAR_4) {
  FUNC_0(VAR_12, "Advertise 10GBase-T EEE\n");
  VAR_13 |= 0x8;
 }
 if (VAR_11 & VAR_5) {
  FUNC_0(VAR_12, "Advertise 1GBase-T EEE\n");
  VAR_13 |= 0x4;
 }

 FUNC_2(VAR_12, VAR_8, VAR_1, VAR_2, VAR_13);

 VAR_10->eee_status &= ~VAR_6;
 VAR_10->eee_status |= (VAR_11 << VAR_7);

 return VAR_0;
}
