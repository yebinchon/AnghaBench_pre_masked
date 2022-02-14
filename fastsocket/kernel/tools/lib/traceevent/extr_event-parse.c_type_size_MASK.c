
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static unsigned int FUNC_1(const char *VAR_0)
{

 static struct {
  const char *type;
  unsigned int size;
 } VAR_1[] = {
  { "u8", 1 },
  { "u16", 2 },
  { "u32", 4 },
  { "u64", 8 },
  { "s8", 1 },
  { "s16", 2 },
  { "s32", 4 },
  { "s64", 8 },
  { "char", 1 },
  { },
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].type; VAR_2++) {
  if (!FUNC_0(VAR_1[VAR_2].type, VAR_0))
   return VAR_1[VAR_2].size;
 }

 return 0;
}
