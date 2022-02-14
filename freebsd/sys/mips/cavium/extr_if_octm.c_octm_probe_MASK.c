
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int cvmx_mgmt_port_result_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 cvmx_mgmt_port_result_t VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_3));
 switch (VAR_4) {
 case 128:
  break;
 case 129:
  return (VAR_1);
 case 130:
  return (VAR_2);
 case 131:
  return (VAR_0);
 }

 FUNC_2(VAR_3, "Cavium Octeon Management Ethernet");

 return (0);
}
