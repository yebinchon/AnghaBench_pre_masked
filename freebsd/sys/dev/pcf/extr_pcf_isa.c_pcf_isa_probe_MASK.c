
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 rman_res_t VAR_4, VAR_5;
 u_int VAR_6 = 0, VAR_7, VAR_8;


 if (FUNC_2(VAR_3))
  return (VAR_0);


 FUNC_0(VAR_3, VAR_2, VAR_6, &VAR_4, &VAR_5);
 if ((VAR_8 = FUNC_3(VAR_1, 0, "port", &VAR_7)) != 0)
  return (VAR_8);


 if (VAR_7 != (u_int)VAR_4)
  return (VAR_0);

 FUNC_1(VAR_3, "PCF8584 I2C bus controller");

 return (0);
}
