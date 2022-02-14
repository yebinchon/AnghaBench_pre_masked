
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_6__ {int flags; int oflags; int * object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(vm_page_t VAR_2)
{

 FUNC_0(VAR_2->object == ((void*)0), ("ttm page %p is owned", VAR_2));
 FUNC_0(FUNC_3(VAR_2), ("ttm lost wire %p", VAR_2));
 FUNC_0((VAR_2->flags & VAR_0) != 0, ("ttm lost fictitious %p", VAR_2));
 FUNC_0((VAR_2->oflags & VAR_1) == 0, ("ttm got unmanaged %p", VAR_2));
 VAR_2->flags &= ~VAR_0;
 VAR_2->oflags |= VAR_1;
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
