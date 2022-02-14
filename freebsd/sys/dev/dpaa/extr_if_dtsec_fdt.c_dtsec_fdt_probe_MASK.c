
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{

 if (!FUNC_1(VAR_2, "fsl,fman-dtsec") &&
     !FUNC_1(VAR_2, "fsl,fman-xgec"))
  return (VAR_1);

 FUNC_0(VAR_2, "Freescale Data Path Triple Speed Ethernet "
     "Controller");

 return (VAR_0);
}
