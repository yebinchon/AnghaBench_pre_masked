
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_8__ {int pm_root; } ;
struct TYPE_7__ {int valid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static __inline int
FUNC_2(pmap_t VAR_2, vm_page_t VAR_3, bool VAR_4)
{

 FUNC_0(VAR_2, VAR_0);
 VAR_3->valid = VAR_4 ? VAR_1 : 0;
 return (FUNC_1(&VAR_2->pm_root, VAR_3));
}
