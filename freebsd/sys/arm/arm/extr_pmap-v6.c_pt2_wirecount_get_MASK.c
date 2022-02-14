
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {size_t* pt2_wirecount; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 size_t VAR_0 ;

__attribute__((used)) static __inline uint32_t
FUNC_0(vm_page_t VAR_1, uint32_t VAR_2)
{

 return (VAR_1->md.pt2_wirecount[VAR_2 & VAR_0]);
}
