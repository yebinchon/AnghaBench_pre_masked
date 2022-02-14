
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int alloc_count; int os; struct TYPE_4__* entries; } ;
typedef TYPE_1__ ocs_hw_qtop_t ;


 int FUNC_0 (int ,TYPE_1__*,int) ;

void
FUNC_1(ocs_hw_qtop_t *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->entries != ((void*)0)) {
   FUNC_0(VAR_0->os, VAR_0->entries, VAR_0->alloc_count*sizeof(*VAR_0->entries));
  }
  FUNC_0(VAR_0->os, VAR_0, sizeof(*VAR_0));
 }
}
