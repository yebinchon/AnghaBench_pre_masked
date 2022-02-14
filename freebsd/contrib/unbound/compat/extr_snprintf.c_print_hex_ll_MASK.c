
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char* VAR_0, int VAR_1, unsigned long long VAR_2)
{
 const char* VAR_3 = "0123456789abcdef";
 int VAR_4 = 0;
 if(VAR_2 == 0) {
  if(VAR_1 > 0) {
   VAR_0[0] = '0';
   VAR_4 = 1;
  }
 } else while(VAR_2 && VAR_4 < VAR_1) {
  VAR_0[VAR_4++] = VAR_3[VAR_2 & 0x0f];
  VAR_2 >>= 4;
 }
 return VAR_4;
}
