
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct siba_devinfo {struct bhnd_resource** cfg_res; } ;
struct bhnd_resource {int res; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ device_t ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bhnd_resource*,scalar_t__,int const) ;
 int FUNC_1 (struct bhnd_resource*,scalar_t__,int const) ;
 int FUNC_2 (struct bhnd_resource*,scalar_t__,int const) ;
 struct siba_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, device_t VAR_4, bus_size_t VAR_5,
    const void *VAR_6, u_int VAR_7)
{
 struct siba_devinfo *VAR_8;
 struct bhnd_resource *VAR_9;
 rman_res_t VAR_10;


 if (FUNC_4(VAR_4) != VAR_3)
  return (VAR_1);


 VAR_8 = FUNC_3(VAR_4);
 if ((VAR_9 = VAR_8->cfg_res[0]) == ((void*)0))
  return (VAR_2);


 VAR_10 = FUNC_5(VAR_9->res);
 if (VAR_10 < VAR_5 || VAR_10 - VAR_5 < VAR_7)
  return (VAR_0);

 switch (VAR_7) {
 case 1:
  FUNC_0(VAR_9, VAR_5, *(const uint8_t *)VAR_6);
  return (0);
 case 2:
  FUNC_1(VAR_9, VAR_5, *(const uint8_t *)VAR_6);
  return (0);
 case 4:
  FUNC_2(VAR_9, VAR_5, *(const uint8_t *)VAR_6);
  return (0);
 default:
  return (VAR_1);
 }
}
