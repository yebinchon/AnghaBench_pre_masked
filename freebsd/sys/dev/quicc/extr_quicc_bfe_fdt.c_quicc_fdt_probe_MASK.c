
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;
typedef int clock ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,uintptr_t) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 phandle_t VAR_2;
 pcell_t VAR_3;

 if (!FUNC_4(VAR_1))
  return (VAR_0);

 if (!FUNC_3(VAR_1, "fsl,cpm2"))
  return (VAR_0);

 VAR_2 = FUNC_1(FUNC_2(VAR_1));
 if (FUNC_0(VAR_2, "bus-frequency", &VAR_3, sizeof(VAR_3)) <= 0)
  VAR_3 = 0;

 return (FUNC_5(VAR_1, (uintptr_t)VAR_3));
}
