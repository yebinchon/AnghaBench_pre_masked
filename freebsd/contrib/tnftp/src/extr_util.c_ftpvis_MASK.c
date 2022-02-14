
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 for (VAR_4 = VAR_5 = 0;
     VAR_2[VAR_5] != '\0' && VAR_4 < VAR_1 && VAR_5 < VAR_3;
     VAR_4++, VAR_5++) {
  switch (VAR_2[VAR_5]) {
  case '\\':
  case ' ':
  case '\t':
  case '\r':
  case '\n':
  case '"':
   VAR_0[VAR_4++] = '\\';
   if (VAR_4 >= VAR_1)
    break;

  default:
   VAR_0[VAR_4] = VAR_2[VAR_5];
  }
 }
 VAR_0[VAR_4] = '\0';
}
