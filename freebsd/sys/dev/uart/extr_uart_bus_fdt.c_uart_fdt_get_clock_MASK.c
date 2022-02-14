
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef scalar_t__ pcell_t ;


 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(phandle_t VAR_0, pcell_t *VAR_1)
{


 if ((FUNC_0(VAR_0, "clock-frequency", VAR_1,
     sizeof(*VAR_1))) <= 0) {


  if ((FUNC_0(FUNC_1(VAR_0), "bus-frequency", VAR_1,
      sizeof(*VAR_1))) <= 0)
   *VAR_1 = 0;
 }

 return (0);
}
