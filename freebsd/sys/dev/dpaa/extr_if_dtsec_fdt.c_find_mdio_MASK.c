
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(phandle_t VAR_1, device_t VAR_2, device_t *VAR_3)
{
 device_t VAR_4;

 while (VAR_1 > 0) {
  if (FUNC_3(VAR_1, "fsl,fman-mdio"))
   break;
  VAR_1 = FUNC_0(VAR_1);
 }

 if (VAR_1 <= 0)
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_2);
 *VAR_3 = FUNC_2(VAR_4, VAR_1);

 return (0);
}
