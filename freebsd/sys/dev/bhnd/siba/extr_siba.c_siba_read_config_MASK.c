
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct siba_devinfo {TYPE_1__** cfg_res; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ device_t ;
typedef scalar_t__ bus_size_t ;
struct TYPE_4__ {int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 struct siba_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, device_t VAR_4, bus_size_t VAR_5, void *VAR_6,
    u_int VAR_7)
{
 struct siba_devinfo *VAR_8;
 rman_res_t VAR_9;


 if (FUNC_4(VAR_4) != VAR_3)
  return (VAR_1);


 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8->cfg_res[0] == ((void*)0))
  return (VAR_2);


 VAR_9 = FUNC_5(VAR_8->cfg_res[0]->res);
 if (VAR_9 < VAR_5 || VAR_9 - VAR_5 < VAR_7)
  return (VAR_0);

 switch (VAR_7) {
 case 1:
  *((uint8_t *)VAR_6) = FUNC_0(VAR_8->cfg_res[0],
      VAR_5);
  return (0);
 case 2:
  *((uint16_t *)VAR_6) = FUNC_1(VAR_8->cfg_res[0],
      VAR_5);
  return (0);
 case 4:
  *((uint32_t *)VAR_6) = FUNC_2(VAR_8->cfg_res[0],
      VAR_5);
  return (0);
 default:
  return (VAR_1);
 }
}
