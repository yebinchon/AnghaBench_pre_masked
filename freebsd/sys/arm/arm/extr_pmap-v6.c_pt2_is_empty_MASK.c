
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__* pt2_wirecount; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static __inline boolean_t
FUNC_1(vm_page_t VAR_1, vm_offset_t VAR_2)
{

 return (VAR_1->md.pt2_wirecount[FUNC_0(VAR_2) & VAR_0] == 0);
}
