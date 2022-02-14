
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(unsigned VAR_0)
{
 static const unsigned char VAR_1[] = {
  130, 129, 128,
  131, 132
 };
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof VAR_1; VAR_2 ++) {
  int VAR_3;

  VAR_3 = VAR_1[VAR_2];
  if ((VAR_0 >> VAR_3) & 1) {
   return VAR_3;
  }
 }
 return 0;
}
