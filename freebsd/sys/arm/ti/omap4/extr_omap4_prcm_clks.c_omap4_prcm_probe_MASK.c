
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {scalar_t__ ocd_data; } ;
typedef int device_t ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct ofw_compat_data* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 const struct ofw_compat_data *VAR_4;

 if (!FUNC_3(VAR_3))
  return (VAR_1);

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if ((int)VAR_4->ocd_data == 0)
  return (VAR_1);

 switch ((int)VAR_4->ocd_data) {
  case 128:
   FUNC_1(VAR_3, "TI OMAP Power, Reset and Clock Management (PRM)");
   break;
  case 130:
   FUNC_1(VAR_3, "TI OMAP Power, Reset and Clock Management (C1)");
   break;
  case 129:
   FUNC_1(VAR_3, "TI OMAP Power, Reset and Clock Management (C2)");
   break;
  default:
   FUNC_0(VAR_3, "unknown instance type: %d\n", (int)VAR_4->ocd_data);
   return (VAR_1);
 }

 return (VAR_0);
}
