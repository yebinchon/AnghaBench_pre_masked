
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_5__ {int pat_mode; int pv_list; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(vm_page_t VAR_1)
{

 FUNC_0(&VAR_1->md.pv_list);
 FUNC_1(VAR_1);
 VAR_1->md.pat_mode = VAR_0;
}
