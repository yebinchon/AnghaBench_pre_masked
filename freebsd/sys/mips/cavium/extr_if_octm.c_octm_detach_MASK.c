
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octm_softc {int sc_intr; int sc_port; } ;
typedef int device_t ;
typedef int cvmx_mgmt_port_result_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct octm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct octm_softc *VAR_5;
 cvmx_mgmt_port_result_t VAR_6;

 VAR_5 = FUNC_2(VAR_4);

 VAR_6 = FUNC_1(VAR_5->sc_port);
 switch (VAR_6) {
 case 128:
  break;
 case 129:
  return (VAR_1);
 case 130:
  return (VAR_2);
 case 131:
  return (VAR_0);
 }

 FUNC_0(VAR_4, VAR_3, 0, VAR_5->sc_intr);


 return (0);
}
