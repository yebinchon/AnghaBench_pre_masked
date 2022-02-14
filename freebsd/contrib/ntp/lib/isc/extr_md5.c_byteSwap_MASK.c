
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_uint32_t ;



__attribute__((used)) static void
FUNC_0(isc_uint32_t *VAR_0, unsigned VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)VAR_0;

 do {
  *VAR_0++ = (isc_uint32_t)((unsigned)VAR_2[3] << 8 | VAR_2[2]) << 16 |
   ((unsigned)VAR_2[1] << 8 | VAR_2[0]);
  VAR_2 += 4;
 } while (--VAR_1);
}
