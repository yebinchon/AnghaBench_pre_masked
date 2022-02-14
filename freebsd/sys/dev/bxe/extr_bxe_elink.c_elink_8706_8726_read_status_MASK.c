
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; int fault_detected; int duplex; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int,int) ;
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
 int VAR_12 ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_4 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_5 (struct bxe_softc*,struct elink_phy*,int ,int ) ;

__attribute__((used)) static uint8_t FUNC_6(struct elink_phy *VAR_13,
          struct elink_params *VAR_14,
          struct elink_vars *VAR_15)
{
 uint8_t VAR_16 = 0;
 uint16_t VAR_17, VAR_18, VAR_19, VAR_20;
 struct bxe_softc *VAR_21 = VAR_14->sc;
 FUNC_0(VAR_21, "XGXS 8706/8726\n");

 FUNC_3(VAR_21, VAR_13,
   VAR_7, VAR_8, &VAR_18);

 FUNC_5(VAR_21, VAR_13, VAR_11,
        VAR_10);


 FUNC_3(VAR_21, VAR_13,
   VAR_7, VAR_9, &VAR_17);
 FUNC_3(VAR_21, VAR_13,
   VAR_7, VAR_9, &VAR_18);
 FUNC_1(VAR_21, "8706/8726 LASI status 0x%x--> 0x%x\n", VAR_17, VAR_18);

 FUNC_3(VAR_21, VAR_13,
   VAR_7, VAR_12, &VAR_19);
 FUNC_3(VAR_21, VAR_13,
   VAR_5, VAR_6, &VAR_20);
 FUNC_3(VAR_21, VAR_13,
   VAR_3, VAR_4, &VAR_18);
 FUNC_3(VAR_21, VAR_13,
   VAR_3, VAR_4, &VAR_18);

 FUNC_2(VAR_21, "8706/8726 rx_sd 0x%x pcs_status 0x%x 1Gbps"
   " link_status 0x%x\n", VAR_19, VAR_20, VAR_18);



 VAR_16 = ((VAR_19 & VAR_20 & 0x1) || (VAR_18 & (1<<1)));
 if (VAR_16) {
  if (VAR_18 & (1<<1))
   VAR_15->line_speed = VAR_1;
  else
   VAR_15->line_speed = VAR_2;
  FUNC_4(VAR_13, VAR_14, VAR_15);
  VAR_15->duplex = VAR_0;
 }


 if (VAR_15->line_speed == VAR_2) {
  FUNC_3(VAR_21, VAR_13, VAR_7,
       VAR_11, &VAR_17);
  FUNC_3(VAR_21, VAR_13, VAR_7,
       VAR_11, &VAR_17);
  if (VAR_17 & (1<<0))
   VAR_15->fault_detected = 1;
 }

 return VAR_16;
}
