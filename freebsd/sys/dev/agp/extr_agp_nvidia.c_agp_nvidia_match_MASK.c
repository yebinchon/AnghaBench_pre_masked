
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static const char *
FUNC_4 (device_t VAR_3)
{
 if (FUNC_0(VAR_3) != VAR_1 ||
     FUNC_2(VAR_3) != VAR_2 ||
     FUNC_3(VAR_3) != VAR_0)
  return (((void*)0));

 switch (FUNC_1(VAR_3)) {
 case 129:
  return ("NVIDIA nForce AGP Controller");
 case 128:
  return ("NVIDIA nForce2 AGP Controller");
 }
 return (((void*)0));
}
