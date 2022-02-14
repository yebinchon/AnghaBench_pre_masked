
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct resource*) ;

int
FUNC_1(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{

 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_7);
  return (0);
 case 129:
  if (VAR_6 != VAR_0)
   return (VAR_2);
  return (0);
 }
 return (VAR_1);
}
