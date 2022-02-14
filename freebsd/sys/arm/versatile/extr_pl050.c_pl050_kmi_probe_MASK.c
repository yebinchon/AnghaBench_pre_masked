
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{

 if (!FUNC_2(VAR_3))
  return (VAR_1);
 if (VAR_2)
  return (VAR_1);

 if (FUNC_1(VAR_3, "arm,pl050")) {
  FUNC_0(VAR_3, "PL050 Keyboard/Mouse Interface");
  return (VAR_0);
 }

 return (VAR_1);
}
