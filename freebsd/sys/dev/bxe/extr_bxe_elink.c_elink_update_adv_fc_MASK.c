
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
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
 int VAR_10 ;
 int FUNC_2 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static void FUNC_3(struct elink_phy *VAR_11,
    struct elink_params *VAR_12,
    struct elink_vars *VAR_13,
    uint32_t VAR_14)
{
 uint16_t VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 struct bxe_softc *VAR_18 = VAR_12->sc;
 if ((VAR_14 &
      (VAR_7 |
       VAR_8)) ==
     (VAR_7 |
      VAR_8)) {

  FUNC_0(VAR_18, VAR_11,
      VAR_9,
      VAR_0,
      &VAR_15);
  FUNC_0(VAR_18, VAR_11,
      VAR_9,
      VAR_2,
      &VAR_16);
  VAR_17 = (VAR_15 &
    VAR_1) >> 8;
  VAR_17 |= (VAR_16 &
     VAR_3) >> 10;
  FUNC_1(VAR_18, "pause_result CL73 0x%x\n", VAR_17);
 } else {
  FUNC_0(VAR_18, VAR_11,
      VAR_10,
      VAR_4,
      &VAR_15);
  FUNC_0(VAR_18, VAR_11,
   VAR_10,
   VAR_6,
   &VAR_16);
  VAR_17 = (VAR_15 &
    VAR_5)>>5;
  VAR_17 |= (VAR_16 &
     VAR_5)>>7;
  FUNC_1(VAR_18, "pause_result CL37 0x%x\n", VAR_17);
 }
 FUNC_2(VAR_11, VAR_12, VAR_13, VAR_17);

}
