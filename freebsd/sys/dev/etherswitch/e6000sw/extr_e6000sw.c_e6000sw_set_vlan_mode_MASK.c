
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct e6000sw_softc {int vlan_mode; int num_ports; } ;
struct TYPE_2__ {int es_nvlangroups; } ;


 int FUNC_0 (struct e6000sw_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (struct e6000sw_softc*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct e6000sw_softc *VAR_4, uint32_t VAR_5)
{

 FUNC_0(VAR_4, VAR_2);
 switch (VAR_5) {
 case 128:
  VAR_4->vlan_mode = 128;
  VAR_3.es_nvlangroups = VAR_4->num_ports;
  return (FUNC_1(VAR_4));
  break;
 case 129:
  VAR_4->vlan_mode = 129;
  VAR_3.es_nvlangroups = VAR_0;
  return (FUNC_1(VAR_4));
  break;
 default:
  return (VAR_1);
 }
}
