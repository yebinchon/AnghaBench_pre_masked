
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
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static __inline vm_page_t
FUNC_3(pmap_t VAR_1, vm_offset_t VAR_2)
{

 FUNC_0(VAR_1, VAR_0);
 return (FUNC_2(&VAR_1->pm_root, FUNC_1(VAR_2)));
}
