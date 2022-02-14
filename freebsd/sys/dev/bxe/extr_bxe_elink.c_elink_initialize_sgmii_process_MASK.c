
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int line_speed; } ;
struct elink_phy {scalar_t__ req_duplex; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct bxe_softc*,char*,int) ;



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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_15,
        struct elink_params *VAR_16,
        struct elink_vars *VAR_17)
{
 struct bxe_softc *VAR_18 = VAR_16->sc;
 uint16_t VAR_19;



 FUNC_0(VAR_18, VAR_15,
     VAR_9,
     VAR_10,
     &VAR_19);
 VAR_19 |= VAR_13;

 VAR_19 &= ~(VAR_12 |
        VAR_11 |
        VAR_14);
 FUNC_1(VAR_18, VAR_15,
     VAR_9,
     VAR_10,
     VAR_19);


 if (!(VAR_17->line_speed == VAR_1)) {

  uint16_t VAR_20;

  FUNC_0(VAR_18, VAR_15,
      VAR_8,
      VAR_2,
      &VAR_20);
  VAR_20 &= ~(VAR_3 |
     VAR_7|
     VAR_4);

  switch (VAR_17->line_speed) {
  case 129:
   VAR_20 |=
    VAR_5;
   break;
  case 128:
   VAR_20 |=
    VAR_6;
   break;
  case 130:

   break;
  default:

   FUNC_2(VAR_18, "Invalid line_speed 0x%x\n",
      VAR_17->line_speed);
   break;
  }


  if (VAR_15->req_duplex == VAR_0)
   VAR_20 |=
    VAR_4;
  FUNC_1(VAR_18, VAR_15,
      VAR_8,
      VAR_2,
      VAR_20);

 } else {

  FUNC_3(VAR_15, VAR_16, 0);
 }
}
