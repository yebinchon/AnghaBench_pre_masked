
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_vars {scalar_t__ line_speed; int eee_status; int flow_ctrl; int mac_type; } ;
struct elink_params {int port; TYPE_1__* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;
struct TYPE_2__ {int flags; int supported; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bxe_softc*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct elink_params*,int,int) ;
 int FUNC_3 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_4 (struct elink_params*,scalar_t__) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_params *VAR_26,
        struct elink_vars *VAR_27, uint8_t VAR_28)
{
 uint32_t VAR_29, VAR_30;
 struct bxe_softc *VAR_31 = VAR_26->sc;
 FUNC_0(VAR_31, "enabling XMAC\n");

 VAR_30 = (VAR_26->port) ? VAR_8 : VAR_7;

 FUNC_4(VAR_26, VAR_27->line_speed);
 FUNC_1(VAR_31, VAR_9 + VAR_26->port*4, 0);




 if (!(VAR_26->phy[VAR_2].flags & VAR_0)) {
  FUNC_1(VAR_31, VAR_30 + VAR_21,
         (VAR_24 |
   VAR_25));
  FUNC_1(VAR_31, VAR_30 + VAR_17, 0);
  FUNC_1(VAR_31, VAR_30 + VAR_17,
         VAR_11 |
         VAR_12);
 }

 FUNC_1(VAR_31, VAR_30 + VAR_22, 0x2710);


 FUNC_1(VAR_31, VAR_30 + VAR_23, 0xC800);


 FUNC_3(VAR_26, VAR_27, 0);

 if (VAR_27->eee_status & VAR_10) {
  FUNC_0(VAR_31, "Setting XMAC for EEE\n");
  FUNC_1(VAR_31, VAR_30 + VAR_20, 0x1380008);
  FUNC_1(VAR_31, VAR_30 + VAR_19, 0x1);
 } else {
  FUNC_1(VAR_31, VAR_30 + VAR_19, 0x0);
 }


 VAR_29 = VAR_15 | VAR_14;


 if ((VAR_27->line_speed == VAR_4) &&
     (VAR_26->phy[VAR_2].supported &
      VAR_6))
  VAR_29 |= VAR_16;


 if (VAR_28)
  VAR_29 |= VAR_13;
 FUNC_1(VAR_31, VAR_30 + VAR_18, VAR_29);
 FUNC_2(VAR_26,
       ((VAR_27->flow_ctrl & VAR_1) != 0), 1);

 VAR_27->mac_type = VAR_3;

 return VAR_5;
}
