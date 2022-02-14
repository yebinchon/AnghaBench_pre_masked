
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* arswitch_set_dot1q_vlan ) (struct arswitch_softc*,int,int,int) ;int (* arswitch_vlan_set_pvid ) (struct arswitch_softc*,int,int) ;} ;
struct arswitch_softc {int* vid; scalar_t__ vlan_mode; TYPE_1__ hal; int sc_dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct arswitch_softc*) ;
 int FUNC_4 (struct arswitch_softc*,int ) ;
 int FUNC_5 (struct arswitch_softc*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct arswitch_softc*,int) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (struct arswitch_softc*,int,int) ;
 int FUNC_11 (struct arswitch_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_12(struct arswitch_softc *VAR_20)
{
 int VAR_21;
 uint32_t VAR_22;
 int VAR_23;

 FUNC_4(VAR_20, VAR_19);
 FUNC_3(VAR_20);


 FUNC_9(VAR_20->vid, 0, sizeof(VAR_20->vid));




 FUNC_7(VAR_20->sc_dev, VAR_12,
     VAR_0,
     (0xF << VAR_1));
 VAR_23 = 0x7f;




 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  int VAR_24, VAR_25;

  if (VAR_20->vlan_mode == VAR_18) {
   VAR_20->vid[VAR_21] = VAR_21 | VAR_16;

   VAR_25 = VAR_14;

   VAR_24 = VAR_10;
  } else if (VAR_20->vlan_mode == VAR_17) {
   VAR_25 = VAR_15;
   VAR_24 = VAR_9;
  } else {

   VAR_25 = VAR_14;

   VAR_24 = VAR_10;
  }


  VAR_22 = 1 << VAR_7;
  VAR_22 |= 1 << VAR_6;
  FUNC_8(VAR_20->sc_dev, FUNC_1(VAR_21), VAR_22);

  VAR_22 = VAR_11;
  VAR_22 |= VAR_24 << VAR_8;
  FUNC_8(VAR_20->sc_dev, FUNC_2(VAR_21), VAR_22);



  VAR_22 = (VAR_23 & ~(1 << VAR_21));
  VAR_22 |= VAR_4;

  VAR_22 |= VAR_25 << VAR_3;
  VAR_22 |= VAR_13 << VAR_5;
  FUNC_8(VAR_20->sc_dev, FUNC_0(VAR_21), VAR_22);
 }




 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  FUNC_6(VAR_20, VAR_21);
 }




 if (VAR_20->vlan_mode == VAR_17) {
  VAR_20->vid[0] = 1;
  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {

   VAR_20->hal.arswitch_vlan_set_pvid(VAR_20, VAR_21, VAR_20->vid[0]);
  }

  VAR_20->hal.arswitch_set_dot1q_vlan(VAR_20, VAR_23, VAR_23, VAR_20->vid[0]);
  VAR_20->vid[0] |= VAR_16;
 }

 FUNC_5(VAR_20);
}
