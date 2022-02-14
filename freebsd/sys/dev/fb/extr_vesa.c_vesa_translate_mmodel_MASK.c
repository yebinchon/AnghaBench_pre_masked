
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;





 int VAR_0 ;
__attribute__((used)) static int
FUNC_0(u_int8_t VAR_1)
{
 static struct {
  u_int8_t vmodel;
  int mmodel;
 } VAR_2[] = {
  { 128, 134 },
  { 133, 139 },
  { 130, 137 },
  { 131, 135 },
  { 129, 136 },
  { 132, 138 },
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_2[VAR_3].mmodel >= 0; ++VAR_3) {
  if (VAR_2[VAR_3].vmodel == VAR_1)
   return (VAR_2[VAR_3].mmodel);
 }
 return (VAR_0);
}
