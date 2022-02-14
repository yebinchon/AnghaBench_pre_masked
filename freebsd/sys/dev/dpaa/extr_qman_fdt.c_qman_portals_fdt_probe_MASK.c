
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 phandle_t VAR_4;

 if (FUNC_4(VAR_3, "simple-bus")) {
  VAR_4 = FUNC_3(VAR_3);
  for (VAR_4 = FUNC_0(VAR_4); VAR_4 > 0; VAR_4 = FUNC_1(VAR_4)) {
   if (FUNC_5(VAR_4, "fsl,qman-portal"))
    break;
  }
  if (VAR_4 <= 0)
   return (VAR_1);
 } else if (!FUNC_4(VAR_3, "fsl,qman-portals"))
  return (VAR_1);

 FUNC_2(VAR_3, VAR_2);

 return (VAR_0);
}
