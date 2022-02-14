
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int obd_node; } ;
struct ofw_pwmbus_ivars {TYPE_1__ devinfo; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,struct ofw_pwmbus_ivars*) ;
 int FUNC_2 (struct ofw_pwmbus_ivars*,int ) ;
 struct ofw_pwmbus_ivars* FUNC_3 (int,int ,int) ;

__attribute__((used)) static device_t
FUNC_4(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 device_t VAR_7;
 struct ofw_pwmbus_ivars *VAR_8;

 if ((VAR_8 = FUNC_3(sizeof(struct ofw_pwmbus_ivars), VAR_0,
     VAR_1 | VAR_2)) == ((void*)0)) {
  return (((void*)0));
 }

 if ((VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6)) == ((void*)0)) {
  FUNC_2(VAR_8, VAR_0);
  return (((void*)0));
 }

 VAR_8->devinfo.obd_node = -1;
 FUNC_1(VAR_7, VAR_8);

 return (VAR_7);
}
