
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const char **VAR_0, const char *VAR_1)
{
 for (;;) {
  int VAR_2;

  if (*VAR_0 == VAR_1) {
   return 0;
  }
  VAR_2 = *(*VAR_0) ++;
  if (VAR_2 == 0) {
   return 0;
  }
  if (VAR_2 >= 'A' && VAR_2 <= 'Z') {
   VAR_2 += 'a' - 'A';
  }
  if (!FUNC_0(VAR_2)) {
   return VAR_2;
  }
 }
}
