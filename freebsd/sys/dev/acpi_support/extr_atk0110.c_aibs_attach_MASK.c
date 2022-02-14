
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aibs_softc {int sc_ggrp_method; int * sc_fan_sysctl; int * sc_temp_sysctl; int * sc_volt_sysctl; int sc_ah; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct aibs_softc*) ;
 int FUNC_2 (struct aibs_softc*,int ) ;
 int FUNC_3 (int ) ;
 struct aibs_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct aibs_softc *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_4->sc_dev = VAR_3;
 VAR_4->sc_ah = FUNC_0(VAR_3);

 VAR_4->sc_ggrp_method = 0;
 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_4, VAR_0);

 if (VAR_5 == 0)
  return (0);


 if (VAR_4->sc_volt_sysctl != ((void*)0))
  FUNC_5(VAR_4->sc_volt_sysctl, 1, 1);
 if (VAR_4->sc_temp_sysctl != ((void*)0))
  FUNC_5(VAR_4->sc_temp_sysctl, 1, 1);
 if (VAR_4->sc_fan_sysctl != ((void*)0))
  FUNC_5(VAR_4->sc_fan_sysctl, 1, 1);
 FUNC_3(VAR_3);

 VAR_4->sc_ggrp_method = 1;
 VAR_5 = FUNC_1(VAR_4);
 return (VAR_5);
}
