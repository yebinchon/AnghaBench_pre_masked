
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef int vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct TYPE_6__ {int resident_page_count; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static vm_ooffset_t
FUNC_3(vm_object_t VAR_0, vm_pindex_t VAR_1,
    vm_pindex_t VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(VAR_0);
 VAR_4 = VAR_0->resident_page_count;
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_5 = VAR_0->resident_page_count;
 FUNC_1(VAR_0);
 return (VAR_4 - VAR_5);
}
