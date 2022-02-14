
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* arswitch_set_dot1q_vlan ) (struct arswitch_softc*,int,int,int) ;int (* arswitch_vlan_set_pvid ) (struct arswitch_softc*,int,int) ;scalar_t__ (* arswitch_flush_dot1q_vlan ) (struct arswitch_softc*) ;} ;
struct arswitch_softc {int* vid; int numphys; scalar_t__ vlan_mode; int sc_dev; TYPE_1__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct arswitch_softc*) ;
 int FUNC_3 (struct arswitch_softc*,int ) ;
 int FUNC_4 (struct arswitch_softc*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int*,int ,int) ;
 scalar_t__ FUNC_7 (struct arswitch_softc*) ;
 int FUNC_8 (struct arswitch_softc*,int,int) ;
 int FUNC_9 (struct arswitch_softc*,int,int,int) ;

void
FUNC_10(struct arswitch_softc *VAR_12)
{
 uint32_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_3(VAR_12, VAR_11);

 FUNC_2(VAR_12);


 FUNC_6(VAR_12->vid, 0, sizeof(VAR_12->vid));


 for (VAR_14 = 0; VAR_14 <= VAR_12->numphys; VAR_14++) {
  if (FUNC_5(VAR_12->sc_dev, FUNC_0(VAR_14),
      0x3 << VAR_1 |
      VAR_0, 0)) {
   FUNC_4(VAR_12);
   return;
  }
 }

 if (VAR_12->hal.arswitch_flush_dot1q_vlan(VAR_12)) {
  FUNC_4(VAR_12);
  return;
 }

 if (VAR_12->vlan_mode == VAR_9) {




  VAR_13 = 0;
  for (VAR_14 = 0; VAR_14 <= VAR_12->numphys; VAR_14++)
   FUNC_5(VAR_12->sc_dev,
       FUNC_1(VAR_14),
       VAR_3 |
       VAR_7 <<
       VAR_2,
       VAR_5 <<
       VAR_6);





  VAR_12->vid[0] = 1;

  for (VAR_14 = 0; VAR_14 <= VAR_12->numphys; VAR_14++)
   VAR_12->hal.arswitch_vlan_set_pvid(VAR_12, VAR_14, VAR_12->vid[0]);
  VAR_13 = 0;
  for (VAR_14 = 0; VAR_14 <= VAR_12->numphys; VAR_14++)
   VAR_13 |= (1 << VAR_14);
  VAR_12->hal.arswitch_set_dot1q_vlan(VAR_12, VAR_13, VAR_12->vid[0], VAR_12->vid[0]);
  VAR_12->vid[0] |= VAR_8;
 } else if (VAR_12->vlan_mode == VAR_10) {

  for (VAR_14 = 0; VAR_14 <= VAR_12->numphys; VAR_14++) {
   VAR_12->vid[VAR_14] = VAR_14 | VAR_8;
   VAR_13 = 0;
   for (VAR_15 = 0; VAR_15 <= VAR_12->numphys; VAR_15++)
    VAR_13 |= (1 << VAR_15);
   FUNC_5(VAR_12->sc_dev,
       FUNC_1(VAR_14),
       VAR_3 |
       VAR_7 <<
       VAR_2,
       VAR_13 << VAR_2 |
       VAR_5 <<
       VAR_4);

  }
 } else {

  for (VAR_14 = 0; VAR_14 <= VAR_12->numphys; VAR_14++)
   FUNC_5(VAR_12->sc_dev,
       FUNC_1(VAR_14),
       VAR_3 |
       VAR_7 <<
       VAR_2,
       VAR_7 <<
       VAR_2 |
       VAR_5 <<
       VAR_4);
 }
 FUNC_4(VAR_12);
}
