
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int obd_name; } ;
struct simplebus_devinfo {TYPE_1__ obdinfo; int rl; } ;
typedef int phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,struct simplebus_devinfo*) ;
 int FUNC_3 (struct simplebus_devinfo*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 struct simplebus_devinfo* FUNC_6 (int *,int ,struct simplebus_devinfo*) ;

device_t
FUNC_7(device_t VAR_1, phandle_t VAR_2, u_int VAR_3,
    const char *VAR_4, int VAR_5, struct simplebus_devinfo *VAR_6)
{
 struct simplebus_devinfo *VAR_7;
 device_t VAR_8;

 if ((VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_6)) == ((void*)0))
  return (((void*)0));
 VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_1, "<%s>: device_add_child failed\n",
      VAR_7->obdinfo.obd_name);
  FUNC_5(&VAR_7->rl);
  FUNC_4(&VAR_7->obdinfo);
  if (VAR_6 == ((void*)0))
   FUNC_3(VAR_7, VAR_0);
  return (((void*)0));
 }
 FUNC_2(VAR_8, VAR_7);

 return(VAR_8);
}
