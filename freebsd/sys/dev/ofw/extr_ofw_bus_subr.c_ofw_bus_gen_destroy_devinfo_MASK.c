
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {int * obd_status; int * obd_type; int * obd_name; int * obd_model; int * obd_compat; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ofw_bus_devinfo *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->obd_compat != ((void*)0))
  FUNC_0(VAR_1->obd_compat, VAR_0);
 if (VAR_1->obd_model != ((void*)0))
  FUNC_0(VAR_1->obd_model, VAR_0);
 if (VAR_1->obd_name != ((void*)0))
  FUNC_0(VAR_1->obd_name, VAR_0);
 if (VAR_1->obd_type != ((void*)0))
  FUNC_0(VAR_1->obd_type, VAR_0);
 if (VAR_1->obd_status != ((void*)0))
  FUNC_0(VAR_1->obd_status, VAR_0);
}
