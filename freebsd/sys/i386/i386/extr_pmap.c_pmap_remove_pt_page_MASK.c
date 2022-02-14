
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pm_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static __inline vm_page_t
FUNC_2(pmap_t VAR_2, vm_offset_t VAR_3)
{

 FUNC_0(VAR_2, VAR_0);
 return (FUNC_1(&VAR_2->pm_root, VAR_3 >> VAR_1));
}
