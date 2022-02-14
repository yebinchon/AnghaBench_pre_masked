
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; int eee_status; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_12,
      struct elink_params *VAR_13,
      struct elink_vars *VAR_14)
{
 struct bxe_softc *VAR_15 = VAR_13->sc;
 uint16_t VAR_16 = 0, VAR_17 = 0;
 uint32_t VAR_18 = 0;
 uint8_t VAR_19 = 0;

 FUNC_1(VAR_15, VAR_12, VAR_3, VAR_4, &VAR_16);
 FUNC_1(VAR_15, VAR_12, VAR_3, VAR_5, &VAR_17);

 if (VAR_17 & 0x2) {
  VAR_18 |= VAR_6;
  if (VAR_16 & 0x2) {
   if (VAR_14->line_speed == VAR_0)
    VAR_19 = 1;
   FUNC_0(VAR_15, "EEE negotiated - 100M\n");
  }
 }
 if (VAR_17 & 0x14) {
  VAR_18 |= VAR_8;
  if (VAR_16 & 0x14) {
   if (VAR_14->line_speed == VAR_1)
    VAR_19 = 1;
   FUNC_0(VAR_15, "EEE negotiated - 1G\n");
  }
 }
 if (VAR_17 & 0x68) {
  VAR_18 |= VAR_7;
  if (VAR_16 & 0x68) {
   if (VAR_14->line_speed == VAR_2)
    VAR_19 = 1;
   FUNC_0(VAR_15, "EEE negotiated - 10G\n");
  }
 }

 VAR_14->eee_status &= ~VAR_10;
 VAR_14->eee_status |= (VAR_18 << VAR_11);

 if (VAR_19) {
  FUNC_0(VAR_15, "EEE is active\n");
  VAR_14->eee_status |= VAR_9;
 }
}
