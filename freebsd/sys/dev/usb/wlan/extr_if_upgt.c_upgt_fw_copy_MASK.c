
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int
FUNC_0(const uint8_t *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2 && VAR_4 < VAR_2; VAR_3++) {
  switch (VAR_0[VAR_3]) {
  case 0x7e:
   VAR_1[VAR_4] = 0x7d;
   VAR_4++;
   VAR_1[VAR_4] = 0x5e;
   VAR_4++;
   break;
  case 0x7d:
   VAR_1[VAR_4] = 0x7d;
   VAR_4++;
   VAR_1[VAR_4] = 0x5d;
   VAR_4++;
   break;
  default:
   VAR_1[VAR_4] = VAR_0[VAR_3];
   VAR_4++;
   break;
  }
 }

 return (VAR_3);
}
