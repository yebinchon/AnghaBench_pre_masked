
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {char const* obd_status; } ;
typedef int device_t ;


 struct ofw_bus_devinfo* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

const char *
FUNC_2(device_t VAR_0)
{
 const struct ofw_bus_devinfo *VAR_1;

 VAR_1 = FUNC_0(FUNC_1(VAR_0), VAR_0);
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 return (VAR_1->obd_status);
}
