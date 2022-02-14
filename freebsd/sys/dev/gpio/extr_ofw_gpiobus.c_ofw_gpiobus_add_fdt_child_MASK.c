
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {int npins; int * pins; } ;
struct ofw_gpiobus_devinfo {struct gpiobus_ivar opd_dinfo; } ;
typedef int phandle_t ;
typedef int * device_t ;


 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct ofw_gpiobus_devinfo*) ;
 struct ofw_gpiobus_devinfo* FUNC_7 (int *,int *,int ) ;

device_t
FUNC_8(device_t VAR_0, const char *VAR_1, phandle_t VAR_2)
{
 device_t VAR_3;
 int VAR_4;
 struct gpiobus_ivar *VAR_5;
 struct ofw_gpiobus_devinfo *VAR_6;





 VAR_3 = FUNC_5(VAR_0, VAR_2);
 if (VAR_3 != ((void*)0))
  return (VAR_3);




 VAR_3 = FUNC_1(VAR_0, VAR_1, -1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_6 = FUNC_7(VAR_0, VAR_3, VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_0, VAR_3);
  return (((void*)0));
 }
 if (FUNC_4(VAR_3) != 0) {
  FUNC_6(VAR_0, VAR_6);
  FUNC_2(VAR_0, VAR_3);
  return (((void*)0));
 }

 VAR_5 = &VAR_6->opd_dinfo;
 for (VAR_4 = 0; VAR_4 < VAR_5->npins; VAR_4++)
  FUNC_0(VAR_0, VAR_5->pins[VAR_4],
      FUNC_3(VAR_3));

 return (VAR_3);
}
