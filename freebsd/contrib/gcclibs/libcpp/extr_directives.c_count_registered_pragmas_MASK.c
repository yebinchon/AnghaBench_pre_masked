
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pragma_entry* space; } ;
struct pragma_entry {TYPE_1__ u; scalar_t__ is_nspace; struct pragma_entry* next; } ;



__attribute__((used)) static int
FUNC_0 (struct pragma_entry *VAR_0)
{
  int VAR_1 = 0;
  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
      if (VAR_0->is_nspace)
 VAR_1 += FUNC_0 (VAR_0->u.space);
      VAR_1++;
    }
  return VAR_1;
}
