
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;



__attribute__((used)) static int32_t
FUNC_0(const unsigned char **VAR_0)
{
 int VAR_1;
 uint32_t VAR_2;

 VAR_1 = ((**VAR_0) >> 6) & 1;
 VAR_2 = (uint32_t)-VAR_1;
 for (;;) {
  unsigned VAR_3;

  VAR_3 = *(*VAR_0) ++;
  VAR_2 = (VAR_2 << 7) | (uint32_t)(VAR_3 & 0x7F);
  if (VAR_3 < 0x80) {
   if (VAR_1) {
    return -(int32_t)~VAR_2 - 1;
   } else {
    return (int32_t)VAR_2;
   }
  }
 }
}
