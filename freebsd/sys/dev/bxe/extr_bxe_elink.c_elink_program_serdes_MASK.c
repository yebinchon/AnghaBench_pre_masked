
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; } ;
struct elink_phy {scalar_t__ req_duplex; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct bxe_softc*,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_3(struct elink_phy *VAR_16,
     struct elink_params *VAR_17,
     struct elink_vars *VAR_18)
{
 struct bxe_softc *VAR_19 = VAR_17->sc;
 uint16_t VAR_20;


 FUNC_0(VAR_19, VAR_16,
     VAR_9,
     VAR_5, &VAR_20);
 VAR_20 &= ~(VAR_7 |
       VAR_6 |
       VAR_8);
 if (VAR_16->req_duplex == VAR_0)
  VAR_20 |= VAR_7;
 FUNC_1(VAR_19, VAR_16,
     VAR_9,
     VAR_5, VAR_20);




 FUNC_0(VAR_19, VAR_16,
     VAR_10,
     VAR_11, &VAR_20);

 FUNC_2(VAR_19, "MDIO_REG_BANK_SERDES_DIGITAL = 0x%x\n", VAR_20);

 VAR_20 &= ~(VAR_13 |
       VAR_14);

 if (!((VAR_18->line_speed == VAR_3) ||
       (VAR_18->line_speed == VAR_2) ||
       (VAR_18->line_speed == VAR_1))) {

  VAR_20 |= (VAR_15 |
       VAR_14);
  if (VAR_18->line_speed == VAR_4)
   VAR_20 |=
    VAR_12;
 }

 FUNC_1(VAR_19, VAR_16,
     VAR_10,
     VAR_11, VAR_20);

}
