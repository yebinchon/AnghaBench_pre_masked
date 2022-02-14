
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phy_handle ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static phandle_t
FUNC_3(device_t VAR_0)
{
 phandle_t VAR_1;
 pcell_t VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1, "phy-handle", (void *)&VAR_2,
     sizeof(VAR_2)) <= 0)
  return (0);

 return (FUNC_1(VAR_2));
}
