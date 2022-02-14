
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int etherswitch_vlangroup_t ;
struct TYPE_6__ {scalar_t__ vlan_mode; } ;
typedef TYPE_1__ e6000sw_softc_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, etherswitch_vlangroup_t *VAR_5)
{
 e6000sw_softc_t *VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 FUNC_0(VAR_6, VAR_3);

 if (VAR_6->vlan_mode == VAR_2)
  return (FUNC_3(VAR_6, VAR_5));
 else if (VAR_6->vlan_mode == VAR_1)
  return (FUNC_2(VAR_6, VAR_5));

 return (VAR_0);
}
