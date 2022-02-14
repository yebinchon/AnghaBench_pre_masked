
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static inline void
FUNC_0(u_char **VAR_0, u_char VAR_1, int VAR_2)
{

 while (VAR_2--) {
  *(*VAR_0)++ = 0x41 + (VAR_1 >> 4);
  *(*VAR_0)++ = 0x41 + (VAR_1 & 0x0f);
 }
}
