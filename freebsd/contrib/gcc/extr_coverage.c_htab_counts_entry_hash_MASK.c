
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ hashval_t ;
struct TYPE_2__ {int ident; scalar_t__ ctr; } ;
typedef TYPE_1__ counts_entry_t ;


 int VAR_0 ;

__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_1)
{
  const counts_entry_t *VAR_2 = VAR_1;

  return VAR_2->ident * VAR_0 + VAR_2->ctr;
}
