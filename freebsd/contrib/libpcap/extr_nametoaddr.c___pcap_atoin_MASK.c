
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int bpf_u_int32 ;



int
FUNC_0(const char *VAR_0, bpf_u_int32 *VAR_1)
{
 u_int VAR_2;
 int VAR_3;

 *VAR_1 = 0;
 VAR_3 = 0;
 for (;;) {
  VAR_2 = 0;
  while (*VAR_0 && *VAR_0 != '.')
   VAR_2 = VAR_2 * 10 + *VAR_0++ - '0';
  *VAR_1 <<= 8;
  *VAR_1 |= VAR_2 & 0xff;
  VAR_3 += 8;
  if (*VAR_0 == '\0')
   return VAR_3;
  ++VAR_0;
 }

}
