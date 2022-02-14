
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_vars {int flow_ctrl; int mac_type; } ;
struct elink_params {int port; int feature_config_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct elink_params*,struct elink_vars*,int) ;
 int FUNC_4 (struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_params *VAR_18,
        struct elink_vars *VAR_19,
        uint8_t VAR_20, uint8_t VAR_21)
{
 elink_status_t VAR_22 = VAR_3;
 uint8_t VAR_23 = VAR_18->port;
 struct bxe_softc *VAR_24 = VAR_18->sc;
 uint32_t VAR_25;

 if (VAR_21) {
  FUNC_2(VAR_24, VAR_4 + VAR_5,
         (VAR_6 << VAR_23));
  FUNC_1(1000 * 1);
 }

 FUNC_2(VAR_24, VAR_4 + VAR_7,
        (VAR_6 << VAR_23));


 FUNC_2(VAR_24, VAR_11 + VAR_23*4, 0x1);


 if (FUNC_0(VAR_24))
  VAR_22 = FUNC_4(VAR_18, VAR_19, VAR_20);
 else
  VAR_22 = FUNC_3(VAR_18, VAR_19, VAR_20);
 FUNC_2(VAR_24, VAR_17 + VAR_23*4, 0x1);
 FUNC_2(VAR_24, VAR_16 + VAR_23*4, 0x0);
 FUNC_2(VAR_24, VAR_13 + VAR_23*4, 0x0);
 VAR_25 = 0;
 if ((VAR_18->feature_config_flags &
       VAR_0) ||
     (VAR_19->flow_ctrl & VAR_1))
  VAR_25 = 1;
 FUNC_2(VAR_24, VAR_10 + VAR_23*4, VAR_25);
 FUNC_2(VAR_24, VAR_12 + VAR_23*4, 0x0);
 FUNC_2(VAR_24, VAR_14 + VAR_23*4, 0x0);
 FUNC_2(VAR_24, VAR_15 + VAR_23*4, 0x0);
 FUNC_2(VAR_24, VAR_8 + VAR_23*4, 0x1);
 FUNC_2(VAR_24, VAR_9 + VAR_23*4, 0x1);

 VAR_19->mac_type = VAR_2;
 return VAR_22;
}
