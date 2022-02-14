
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 uint32_t VAR_4;

 if (FUNC_3(VAR_3) == VAR_2 &&
     FUNC_1(VAR_3) == VAR_1) {
  VAR_4 = FUNC_2(VAR_3);
  switch (VAR_4) {
  case 129:
   FUNC_0(VAR_3, "RME HDSPe AIO");
   return (0);
  case 128:
   FUNC_0(VAR_3, "RME HDSPe RayDAT");
   return (0);
  }
 }

 return (VAR_0);
}
