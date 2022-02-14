
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * devclass_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_1(devclass_t *VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  return (1);
 }
 if (VAR_3[0] == ((void*)0)) {
  VAR_3[0] = FUNC_0(sizeof(**(VAR_3)),
      VAR_0, VAR_1 | VAR_2);

  if (VAR_3[0] == ((void*)0)) {
   return (1);
  }
 }
 return (0);
}
