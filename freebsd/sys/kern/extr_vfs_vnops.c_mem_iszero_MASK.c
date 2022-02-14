
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;



__attribute__((used)) static bool
FUNC_0(void *VAR_0, int VAR_1)
{
 int VAR_2;
 const u_int *VAR_3;
 const char *VAR_4;

 for (VAR_3 = VAR_0; VAR_1 > 0; VAR_1 -= sizeof(*VAR_3), VAR_3++) {
  if (VAR_1 >= sizeof(*VAR_3)) {
   if (*VAR_3 != 0)
    return (0);
  } else {
   VAR_4 = (const char *)VAR_3;
   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_4++)
    if (*VAR_4 != '\0')
     return (0);
  }
 }
 return (1);
}
