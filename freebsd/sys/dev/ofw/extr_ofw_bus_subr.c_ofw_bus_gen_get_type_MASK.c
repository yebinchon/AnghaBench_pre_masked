
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {char const* obd_type; } ;
typedef int device_t ;


 struct ofw_bus_devinfo* FUNC_0 (int ,int ) ;

const char *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 const struct ofw_bus_devinfo *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 return (VAR_2->obd_type);
}
