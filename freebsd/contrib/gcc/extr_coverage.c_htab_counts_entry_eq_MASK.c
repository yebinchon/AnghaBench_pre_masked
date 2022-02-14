
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ident; scalar_t__ ctr; } ;
typedef TYPE_1__ counts_entry_t ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const counts_entry_t *VAR_2 = VAR_0;
  const counts_entry_t *VAR_3 = VAR_1;

  return VAR_2->ident == VAR_3->ident && VAR_2->ctr == VAR_3->ctr;
}
