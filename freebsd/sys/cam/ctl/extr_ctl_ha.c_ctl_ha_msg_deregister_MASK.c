
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ha_softc {int ** ha_handler; } ;
typedef int ctl_ha_status ;
typedef size_t ctl_ha_channel ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct ha_softc VAR_2 ;

ctl_ha_status
FUNC_1(ctl_ha_channel VAR_3)
{
 struct ha_softc *VAR_4 = &VAR_2;

 FUNC_0(VAR_3 < VAR_0,
     ("Wrong CTL HA channel %d", VAR_3));
 VAR_4->ha_handler[VAR_3] = ((void*)0);
 return (VAR_1);
}
