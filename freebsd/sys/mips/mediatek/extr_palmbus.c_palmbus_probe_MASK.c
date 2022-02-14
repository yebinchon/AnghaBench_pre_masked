
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{

 if (!FUNC_4(VAR_1))
  return (VAR_0);

 if (!(FUNC_3(VAR_1, "palmbus") &&
     FUNC_2(VAR_1, "ranges")) &&
     (FUNC_1(VAR_1) == ((void*)0) || FUNC_5(FUNC_1(VAR_1),
     "soc") != 0))
  return (VAR_0);

 FUNC_0(VAR_1, "MTK Palmbus");

 return (0);
}
