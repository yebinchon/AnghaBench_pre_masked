
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 while (*VAR_0 && *VAR_1) {
  int VAR_2, VAR_3;

  VAR_2 = *(const unsigned char *)VAR_0;
  VAR_3 = *(const unsigned char *)VAR_1;
  if (VAR_2 >= 'A' && VAR_2 <= 'Z') {
   VAR_2 += 'a' - 'A';
  }
  if (VAR_3 >= 'A' && VAR_3 <= 'Z') {
   VAR_3 += 'a' - 'A';
  }
  if (VAR_2 != VAR_3) {
   return 0;
  }
  VAR_0 ++;
  VAR_1 ++;
 }
 return !(*VAR_0 || *VAR_1);
}
