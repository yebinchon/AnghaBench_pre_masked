
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_memattr_t ;
struct TYPE_4__ {int pv_flags; int pv_list; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2(vm_page_t VAR_2, vm_memattr_t VAR_3)
{
 if (FUNC_0(&VAR_2->md.pv_list) != ((void*)0))
  FUNC_1("Can't change memattr on page with existing mappings");


 VAR_2->md.pv_flags &= ~VAR_0;
 VAR_2->md.pv_flags |= (VAR_3 << VAR_1) & VAR_0;
}
