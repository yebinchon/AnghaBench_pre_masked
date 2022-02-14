
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct siba_devinfo {struct bhnd_resource** cfg_res; } ;
struct bhnd_resource {int dummy; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct siba_devinfo* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct siba_devinfo*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, device_t VAR_6, uint16_t VAR_7, uint16_t VAR_8)
{
 struct siba_devinfo *VAR_9;
 struct bhnd_resource *VAR_10;
 uint32_t VAR_11, VAR_12;

 if (FUNC_1(VAR_6) != VAR_5)
  return (VAR_0);


 VAR_9 = FUNC_0(VAR_6);
 if ((VAR_10 = VAR_9->cfg_res[0]) == ((void*)0))
  return (VAR_1);


 VAR_12 = (VAR_8 << VAR_4) & VAR_3;
 VAR_11 = (VAR_7 << VAR_4) & VAR_12;

 FUNC_2(VAR_6, VAR_9, VAR_2,
     VAR_11, VAR_12);
 return (0);
}
