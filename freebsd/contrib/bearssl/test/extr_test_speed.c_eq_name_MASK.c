
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 for (;;) {
  int VAR_2, VAR_3;

  for (;;) {
   VAR_2 = *VAR_0 ++;
   if (VAR_2 >= 'A' && VAR_2 <= 'Z') {
    VAR_2 += 'a' - 'A';
   } else {
    switch (VAR_2) {
    case '-': case '_': case '.': case ' ':
     continue;
    }
   }
   break;
  }
  for (;;) {
   VAR_3 = *VAR_1 ++;
   if (VAR_3 >= 'A' && VAR_3 <= 'Z') {
    VAR_3 += 'a' - 'A';
   } else {
    switch (VAR_3) {
    case '-': case '_': case '.': case ' ':
     continue;
    }
   }
   break;
  }
  if (VAR_2 != VAR_3) {
   return 0;
  }
  if (VAR_2 == 0) {
   return 1;
  }
 }
}
