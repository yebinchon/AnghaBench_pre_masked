
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pwmbus_ivars {int devinfo; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ofw_pwmbus_ivars* FUNC_0 (int ) ;
 int FUNC_1 (struct ofw_pwmbus_ivars*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, device_t VAR_2)
{
 struct ofw_pwmbus_ivars *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(&VAR_3->devinfo);
  FUNC_1(VAR_3, VAR_0);
 }
}
