
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char *VAR_0)
{
 size_t VAR_1, VAR_2;

 for (VAR_1 = VAR_2 = 0;;) {
  if (VAR_0[VAR_1] == '\0') {
   VAR_0[VAR_2] = '\0';
   return;
  }
  if (VAR_0[VAR_1] != '\\') {
   VAR_0[VAR_2++] = VAR_0[VAR_1++];
   continue;
  }

  ++VAR_1;
  switch (VAR_0[VAR_1]) {
  case '?':
  case '[':
  case '*':
  case '\\':
   VAR_0[VAR_2++] = VAR_0[VAR_1++];
   break;
  case '\0':
   VAR_0[VAR_2++] = '\\';
   VAR_0[VAR_2] = '\0';
   return;
  default:
   VAR_0[VAR_2++] = '\\';
   VAR_0[VAR_2++] = VAR_0[VAR_1++];
   break;
  }
 }
}
