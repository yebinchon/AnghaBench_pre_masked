
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_cap {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct cyapa_cap*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct cyapa_cap VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2);





 if (VAR_4 != 0xce)
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_2, &VAR_3, 1);
 if (VAR_5 != 0)
  return (VAR_1);

 FUNC_0(VAR_2, "Cypress APA I2C Trackpad");

 return (VAR_0);
}
