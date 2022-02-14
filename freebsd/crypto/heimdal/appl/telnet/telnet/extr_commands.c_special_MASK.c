
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char
FUNC_0(char *VAR_0)
{
 char VAR_1;
 char VAR_2;

 switch (*VAR_0) {
 case '^':
  VAR_2 = *++VAR_0;
  if (VAR_2 == '?') {
      VAR_1 = VAR_2 | 0x40;
  } else {
      VAR_1 = VAR_2 & 0x1f;
  }
  break;
 default:
  VAR_1 = *VAR_0;
  break;
 }
 return VAR_1;
}
