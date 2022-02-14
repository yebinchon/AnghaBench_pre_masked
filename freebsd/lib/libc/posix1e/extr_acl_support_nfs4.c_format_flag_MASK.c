
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct flagnames_struct {char const* name; int flag; } ;



__attribute__((used)) static const char *
FUNC_0(uint32_t *VAR_0, const struct flagnames_struct *VAR_1)
{

 for (; VAR_1->name != ((void*)0); VAR_1++) {
  if ((VAR_1->flag & *VAR_0) == 0)
   continue;

  *VAR_0 &= ~VAR_1->flag;
  return (VAR_1->name);
 }

 return (((void*)0));
}
