
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int lane_config; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(struct elink_params *VAR_10,
     struct elink_phy *VAR_11)
{
 struct bxe_softc *VAR_12 = VAR_10->sc;



 uint16_t VAR_13, VAR_14;

 VAR_13 = ((VAR_10->lane_config &
    VAR_6) >>
   VAR_7);
 VAR_14 = ((VAR_10->lane_config &
    VAR_8) >>
   VAR_9);

 if (VAR_13 != 0x1b) {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_1,
      (VAR_13 |
       VAR_2 |
       VAR_3));
 } else {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_1, 0);
 }

 if (VAR_14 != 0x1b) {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_4,
      (VAR_14 |
       VAR_5));
 } else {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_4, 0);
 }
}
