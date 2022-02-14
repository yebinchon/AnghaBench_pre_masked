
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct elink_vars {int link_status; int phy_flags; int flow_ctrl; int eee_status; int line_speed; scalar_t__ link_up; } ;
struct elink_params {int port; TYPE_1__* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct elink_params*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_6 (struct bxe_softc*) ;
 scalar_t__ FUNC_7 (struct elink_params*,struct elink_vars*,int ,int) ;
 int FUNC_8 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_9 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_10 (struct elink_params*,struct elink_vars*) ;
 int FUNC_11 (struct elink_params*,int,int ) ;
 int FUNC_12 (struct elink_params*) ;
 int FUNC_13 (struct elink_params*,struct elink_vars*,int ,int ) ;
 int FUNC_14 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_15 (struct elink_params*,int) ;
 int FUNC_16 (struct elink_params*,int) ;
 scalar_t__ FUNC_17 (struct elink_params*,struct elink_vars*,int ) ;

__attribute__((used)) static elink_status_t FUNC_18(struct elink_params *VAR_23,
    struct elink_vars *VAR_24,
    uint8_t VAR_25)
{
 struct bxe_softc *VAR_26 = VAR_23->sc;
 uint8_t VAR_27, VAR_28 = VAR_23->port;
 elink_status_t VAR_29 = VAR_8;

 VAR_24->link_status |= (VAR_10 |
         VAR_11);
 VAR_24->phy_flags |= VAR_19;

 if (VAR_24->flow_ctrl & VAR_2)
  VAR_24->link_status |=
   VAR_13;

 if (VAR_24->flow_ctrl & VAR_1)
  VAR_24->link_status |=
   VAR_12;
 if (FUNC_6(VAR_26)) {
  if (VAR_25) {
   if (FUNC_17(VAR_23, VAR_24, 0) ==
       VAR_7) {
    FUNC_3(VAR_26, "Found errors on XMAC\n");
    VAR_24->link_up = 0;
    VAR_24->phy_flags |= VAR_18;
    VAR_24->link_status &= ~VAR_10;
   }
  } else
   FUNC_14(VAR_23, VAR_24, 0);
  FUNC_13(VAR_23, VAR_24,
         VAR_4, VAR_24->line_speed);

  if ((VAR_24->eee_status & VAR_21) &&
      (VAR_24->eee_status & VAR_22)) {
   FUNC_3(VAR_26, "Enabling LPI assertion\n");
   FUNC_5(VAR_26, VAR_15 +
          (VAR_23->port << 2), 1);
   FUNC_5(VAR_26, VAR_14, 1);
   FUNC_5(VAR_26, VAR_16 +
          (VAR_23->port << 2), 0xfc20);
  }
 }
 if ((FUNC_0(VAR_26) ||
      FUNC_1(VAR_26))) {
  if (VAR_25) {
   if (FUNC_7(VAR_23, VAR_24, 0, 1) ==
       VAR_7) {
    FUNC_3(VAR_26, "Found errors on BMAC\n");
    VAR_24->link_up = 0;
    VAR_24->phy_flags |= VAR_18;
    VAR_24->link_status &= ~VAR_10;
   }

   FUNC_13(VAR_23, VAR_24,
          VAR_4, VAR_6);
  } else {
   VAR_29 = FUNC_10(VAR_23, VAR_24);
   FUNC_9(VAR_23, VAR_24, 0);


   if ((VAR_24->link_status &
        VAR_9)
       && (!(VAR_24->phy_flags & VAR_20)) &&
       FUNC_4(VAR_23))
    FUNC_12(VAR_23);
  }
 }


 if (FUNC_0(VAR_26))
  VAR_29 |= FUNC_11(VAR_23, VAR_24->flow_ctrl,
           VAR_24->line_speed);


 FUNC_5(VAR_26, VAR_17 + VAR_28*4, 0);


 FUNC_15(VAR_23, VAR_24->link_status);
 FUNC_16(VAR_23, VAR_24->eee_status);

 for (VAR_27 = VAR_3; VAR_27 < VAR_5; VAR_27++) {
  if (VAR_23->phy[VAR_27].flags & VAR_0) {
   FUNC_8(VAR_23, VAR_24, 0);
   break;
  }
 }
 FUNC_2(1000 * 20);
 return VAR_29;
}
