
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct pragma_entry* space; } ;
struct pragma_entry {TYPE_1__* pragma; TYPE_2__ u; scalar_t__ is_nspace; struct pragma_entry* next; } ;
struct TYPE_3__ {int ident; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static char **
FUNC_3 (struct pragma_entry *VAR_0, char **VAR_1)
{
  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
      if (VAR_0->is_nspace)
 VAR_1 = FUNC_3 (VAR_0->u.space, VAR_1);
      *VAR_1++ = (char *) FUNC_2 (FUNC_1 (&VAR_0->pragma->ident),
                                FUNC_0 (&VAR_0->pragma->ident),
                                FUNC_0 (&VAR_0->pragma->ident) + 1);
    }
  return VAR_1;
}
