
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_4__ {scalar_t__ pv_kva; scalar_t__ pvh_attrs; int pv_memattr; int pv_list; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

void
FUNC_1(vm_page_t VAR_1)
{

 FUNC_0(&VAR_1->md.pv_list);
 VAR_1->md.pv_memattr = VAR_0;
 VAR_1->md.pvh_attrs = 0;
 VAR_1->md.pv_kva = 0;
}
