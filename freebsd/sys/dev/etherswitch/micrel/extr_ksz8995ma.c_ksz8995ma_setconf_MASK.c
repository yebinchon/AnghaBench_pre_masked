
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ksz8995ma_softc {scalar_t__ vlan_mode; } ;
struct TYPE_3__ {int cmd; scalar_t__ vlan_mode; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ksz8995ma_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, etherswitch_conf_t *VAR_6)
{
 int VAR_7;
 struct ksz8995ma_softc *VAR_8;

 VAR_8 = FUNC_0(VAR_5);

 if ((VAR_6->cmd & VAR_0) == 0)
  return (0);

 if (VAR_6->vlan_mode == VAR_2) {
  VAR_8->vlan_mode = VAR_2;
  VAR_7 = FUNC_2(VAR_5, VAR_3);
  FUNC_3(VAR_5, VAR_3,
      VAR_7 & ~VAR_4);
  FUNC_1(VAR_5);
 } else if (VAR_6->vlan_mode == VAR_1) {
  VAR_8->vlan_mode = VAR_1;
  VAR_7 = FUNC_2(VAR_5, VAR_3);
  FUNC_3(VAR_5, VAR_3,
      VAR_7 | VAR_4);
 } else {
  VAR_8->vlan_mode = 0;
  VAR_7 = FUNC_2(VAR_5, VAR_3);
  FUNC_3(VAR_5, VAR_3,
      VAR_7 & ~VAR_4);
  FUNC_1(VAR_5);
 }
 return (0);
}
