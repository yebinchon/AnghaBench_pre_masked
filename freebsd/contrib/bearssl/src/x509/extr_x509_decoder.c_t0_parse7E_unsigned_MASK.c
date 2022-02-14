
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const unsigned char **VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = 0;
 for (;;) {
  unsigned VAR_2;

  VAR_2 = *(*VAR_0) ++;
  VAR_1 = (VAR_1 << 7) | (uint32_t)(VAR_2 & 0x7F);
  if (VAR_2 < 0x80) {
   return VAR_1;
  }
 }
}
