
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct adm6996fc_softc {scalar_t__ vlan_mode; } ;
struct TYPE_3__ {int cmd; scalar_t__ vlan_mode; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 struct adm6996fc_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_8, etherswitch_conf_t *VAR_9)
{
 struct adm6996fc_softc *VAR_10;
 device_t VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14[6] = {0x01, 0x03, 0x05, 0x07, 0x08, 0x09};

 VAR_10 = FUNC_3(VAR_8);
 VAR_11 = FUNC_2(VAR_8);

 if ((VAR_9->cmd & VAR_5) == 0)
  return (0);

 if (VAR_9->vlan_mode == VAR_7) {
  VAR_10->vlan_mode = VAR_7;
  VAR_13 = FUNC_0(VAR_11, VAR_0);
  VAR_13 &= ~(1 << VAR_1);
  FUNC_1(VAR_11, VAR_0, VAR_13);
  for (VAR_12 = 0;VAR_12 <= 5; ++VAR_12) {
   VAR_13 = FUNC_0(VAR_11, VAR_14[VAR_12]);
   VAR_13 &= ~(0xf << 10);
   VAR_13 |= (VAR_12 << 10);
   FUNC_1(VAR_11, VAR_14[VAR_12], VAR_13);
   FUNC_1(VAR_11, VAR_3 + 2 * VAR_12,
       0x003f);
   FUNC_1(VAR_11, VAR_2 + 2 * VAR_12,
       (1 << VAR_4) | 1);
  }
 } else if (VAR_9->vlan_mode == VAR_6) {
  VAR_10->vlan_mode = VAR_6;
  VAR_13 = FUNC_0(VAR_11, VAR_0);
  VAR_13 |= (1 << VAR_1);
  FUNC_1(VAR_11, VAR_0, VAR_13);
  for (VAR_12 = 0;VAR_12 <= 5; ++VAR_12) {
   VAR_13 = FUNC_0(VAR_11, VAR_14[VAR_12]);

   VAR_13 &= ~(0xf << 10);
   VAR_13 |= (1 << 10);
   FUNC_1(VAR_11, VAR_14[VAR_12], VAR_13);
  }
  for (VAR_12 = 2;VAR_12 <= 15; ++VAR_12) {
   FUNC_1(VAR_11, VAR_2 + 2 * VAR_12,
       0x0000);
  }
 } else {





  VAR_10->vlan_mode = 0;
  VAR_13 = FUNC_0(VAR_11, VAR_0);
  VAR_13 &= ~(1 << VAR_1);
  FUNC_1(VAR_11, VAR_0, VAR_13);
  for (VAR_12 = 0;VAR_12 <= 5; ++VAR_12) {
   VAR_13 = FUNC_0(VAR_11, VAR_14[VAR_12]);
   VAR_13 &= ~(0xf << 10);
   VAR_13 |= (1 << 10);
   if (VAR_12 == 5)
    VAR_13 &= ~(1 << 4);
   FUNC_1(VAR_11, VAR_14[VAR_12], VAR_13);
  }

  FUNC_1(VAR_11, VAR_3 + 2, 0x003f);
  FUNC_1(VAR_11, VAR_2 + 2,
      (1 << VAR_4) | 1);
 }


 return (0);
}
