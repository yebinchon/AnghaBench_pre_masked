
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_vars {int line_speed; int flow_ctrl; scalar_t__ duplex; int eee_status; int mac_type; } ;
struct elink_params {int port; int* mac_addr; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bxe_softc*,char*) ;
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
 int FUNC_3 (struct bxe_softc*,int,int) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (struct elink_params*,int,int) ;

__attribute__((used)) static void FUNC_5(struct elink_params *VAR_29,
       struct elink_vars *VAR_30, uint8_t VAR_31)
{
 uint32_t VAR_32;
 uint32_t VAR_33 = VAR_29->port ? VAR_6 : VAR_5;
 struct bxe_softc *VAR_34 = VAR_29->sc;

 FUNC_3(VAR_34, VAR_4 + VAR_7,
        (VAR_9 << VAR_29->port));
 FUNC_0(1000 * 1);

 FUNC_3(VAR_34, VAR_4 + VAR_8,
        (VAR_9 << VAR_29->port));

 FUNC_1(VAR_34, "enabling UMAC\n");


 FUNC_3(VAR_34, VAR_10 + VAR_29->port*4, 1);

 VAR_32 = VAR_18 |
  VAR_16 |
  VAR_20 |
  VAR_15;
 switch (VAR_30->line_speed) {
 case 131:
  VAR_32 |= (0<<2);
  break;
 case 130:
  VAR_32 |= (1<<2);
  break;
 case 129:
  VAR_32 |= (2<<2);
  break;
 case 128:
  VAR_32 |= (3<<2);
  break;
 default:
  FUNC_2(VAR_34, "Invalid speed for UMAC %d\n",
          VAR_30->line_speed);
  break;
 }
 if (!(VAR_30->flow_ctrl & VAR_2))
  VAR_32 |= VAR_13;

 if (!(VAR_30->flow_ctrl & VAR_1))
  VAR_32 |= VAR_17;

 if (VAR_30->duplex == VAR_0)
  VAR_32 |= VAR_12;

 FUNC_3(VAR_34, VAR_33 + VAR_22, VAR_32);
 FUNC_0(50);


 if (VAR_30->eee_status & VAR_11) {
  FUNC_1(VAR_34, "configured UMAC for EEE\n");
  FUNC_3(VAR_34, VAR_33 + VAR_27,
         VAR_28);
  FUNC_3(VAR_34, VAR_33 + VAR_23, 0x11);
 } else {
  FUNC_3(VAR_34, VAR_33 + VAR_27, 0x0);
 }


 FUNC_3(VAR_34, VAR_33 + VAR_24,
        ((VAR_29->mac_addr[2] << 24) |
  (VAR_29->mac_addr[3] << 16) |
  (VAR_29->mac_addr[4] << 8) |
  (VAR_29->mac_addr[5])));
 FUNC_3(VAR_34, VAR_33 + VAR_25,
        ((VAR_29->mac_addr[0] << 8) |
  (VAR_29->mac_addr[1])));


 VAR_32 &= ~VAR_16;
 VAR_32 |= VAR_21 |
  VAR_19;
 FUNC_3(VAR_34, VAR_33 + VAR_22, VAR_32);
 FUNC_0(50);


 VAR_32 &= ~VAR_20;


 if (VAR_31)
  VAR_32 |= VAR_14;
 FUNC_3(VAR_34, VAR_33 + VAR_22, VAR_32);




 FUNC_3(VAR_34, VAR_33 + VAR_26, 0x2710);
 FUNC_4(VAR_29,
       ((VAR_30->flow_ctrl & VAR_2) != 0), 1);
 VAR_30->mac_type = VAR_3;

}
