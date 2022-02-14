
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct siba_devinfo {struct bhnd_resource** cfg_res; } ;
struct bhnd_resource {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bhnd_resource*,int ) ;

int
FUNC_2(device_t VAR_2, struct siba_devinfo *VAR_3, bus_size_t VAR_4,
    uint32_t VAR_5, uint32_t VAR_6, u_int VAR_7)
{
 struct bhnd_resource *VAR_8;
 uint32_t VAR_9;

 if ((VAR_8 = VAR_3->cfg_res[0]) == ((void*)0))
  return (VAR_0);

 VAR_5 &= VAR_6;
 for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += 10) {
  VAR_9 = FUNC_1(VAR_8, VAR_4);
  if ((VAR_9 & VAR_6) == VAR_5)
   return (0);

  FUNC_0(10);
 }

 return (VAR_1);
}
