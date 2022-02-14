
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(const char VAR_0, const char **VAR_1)
{
 switch (VAR_0) {
 case '<':
  *VAR_1 = "&lt;";
  return 4;
 case '>':
  *VAR_1 = "&gt;";
  return 4;
 case '"':
  *VAR_1 = "&quot;";
  return 6;
 case '\'':
  *VAR_1 = "&#039;";
  return 6;
 case '&':
  *VAR_1 = "&amp;";
  return 5;
 default:
  break;
 }

 return 1;
}
