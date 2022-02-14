
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(unsigned VAR_0)
{
 static const int VAR_1[] = {
  130, 131, 129, 128,
  132, 133, -1
 };

 size_t VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2] >= 0; VAR_2 ++) {
  if (((VAR_0 >> VAR_1[VAR_2]) & 1) != 0) {
   return VAR_1[VAR_2];
  }
 }
 return -1;
}
