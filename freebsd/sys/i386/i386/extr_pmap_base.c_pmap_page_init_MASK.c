
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_4__ {int pat_mode; int pv_list; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(vm_page_t VAR_1)
{

 FUNC_0(&VAR_1->md.pv_list);
 VAR_1->md.pat_mode = VAR_0;
}
