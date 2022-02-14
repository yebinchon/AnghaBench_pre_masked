
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {size_t symtab_type; } ;
 size_t VAR_0 ;





char FUNC_0(const struct dso *VAR_1)
{
 static const char VAR_2[] = {
  [132] = 'k',
  [128] = 'v',
  [133] = 'j',
  [138] = 'l',
  [139] = 'B',
  [137] = 'f',
  [129] = 'u',
  [140] = 'b',
  [131] = 'd',
  [130] = 'K',
  [136] = 'g',
  [135] = 'G',
  [134] = 'V',
 };

 if (VAR_1 == ((void*)0) || VAR_1->symtab_type == VAR_0)
  return '!';
 return VAR_2[VAR_1->symtab_type];
}
