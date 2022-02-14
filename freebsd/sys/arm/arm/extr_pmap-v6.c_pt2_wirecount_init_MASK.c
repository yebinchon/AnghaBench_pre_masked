
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef size_t u_int ;
struct TYPE_4__ {scalar_t__* pt2_wirecount; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 size_t VAR_0 ;

__attribute__((used)) static __inline void
FUNC_0(vm_page_t VAR_1)
{
 u_int VAR_2;






 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->md.pt2_wirecount[VAR_2] = 0;
}
