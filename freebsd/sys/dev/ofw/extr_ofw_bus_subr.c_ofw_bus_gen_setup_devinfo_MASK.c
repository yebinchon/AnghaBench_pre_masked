
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {int obd_node; int obd_status; int obd_model; int obd_type; int obd_compat; int obd_name; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,void**) ;

int
FUNC_1(struct ofw_bus_devinfo *VAR_2, phandle_t VAR_3)
{

 if (VAR_2 == ((void*)0))
  return (VAR_1);

 if ((FUNC_0(VAR_3, "name", (void **)&VAR_2->obd_name)) == -1)
  return (VAR_0);
 FUNC_0(VAR_3, "compatible", (void **)&VAR_2->obd_compat);
 FUNC_0(VAR_3, "device_type", (void **)&VAR_2->obd_type);
 FUNC_0(VAR_3, "model", (void **)&VAR_2->obd_model);
 FUNC_0(VAR_3, "status", (void **)&VAR_2->obd_status);
 VAR_2->obd_node = VAR_3;
 return (0);
}
