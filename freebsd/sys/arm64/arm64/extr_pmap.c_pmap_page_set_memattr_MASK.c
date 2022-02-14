
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_memattr_t ;
struct TYPE_5__ {int pv_memattr; } ;
struct TYPE_6__ {int flags; TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void
FUNC_4(vm_page_t VAR_2, vm_memattr_t VAR_3)
{

 VAR_2->md.pv_memattr = VAR_3;






 if ((VAR_2->flags & VAR_1) == 0 &&
     FUNC_3(FUNC_0(FUNC_1(VAR_2)), VAR_0,
     VAR_2->md.pv_memattr) != 0)
  FUNC_2("memory attribute change on the direct map failed");
}
