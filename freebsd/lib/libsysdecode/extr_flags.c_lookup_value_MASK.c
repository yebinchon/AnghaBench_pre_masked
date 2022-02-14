
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct name_table {char const* str; scalar_t__ val; } ;



__attribute__((used)) static const char *
FUNC_0(struct name_table *VAR_0, uintmax_t VAR_1)
{

 for (; VAR_0->str != ((void*)0); VAR_0++)
  if (VAR_0->val == VAR_1)
   return (VAR_0->str);
 return (((void*)0));
}
