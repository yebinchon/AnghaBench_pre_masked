
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const char *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = 0;
 while (*VAR_0) {
  int VAR_2;

  VAR_1 = (VAR_1 << 5) - VAR_1;
  VAR_2 = *(const unsigned char *)VAR_0;
  if (VAR_2 >= 'A' && VAR_2 <= 'Z') {
   VAR_2 += 'a' - 'A';
  }
  VAR_1 += (uint32_t)VAR_2;
  VAR_0 ++;
 }
 return VAR_1;
}
