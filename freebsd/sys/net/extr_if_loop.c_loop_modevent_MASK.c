
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(module_t VAR_2, int VAR_3, void *VAR_4)
{

 switch (VAR_3) {
 case 129:
  break;

 case 128:
  FUNC_0("loop module unload - not possible for this module type\n");
  return (VAR_0);

 default:
  return (VAR_1);
 }
 return (0);
}
