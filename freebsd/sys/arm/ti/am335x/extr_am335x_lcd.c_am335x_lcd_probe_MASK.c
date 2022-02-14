
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{




 if (!FUNC_4(VAR_3))
  return (VAR_1);

 if (!FUNC_3(VAR_3, "ti,am33xx-tilcdc"))
  return (VAR_1);

 FUNC_2(VAR_3, "AM335x LCD controller");
 return (VAR_0);
}
