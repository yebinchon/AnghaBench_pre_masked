
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nid; } ;
struct TYPE_5__ {TYPE_4__* obj; } ;
typedef TYPE_1__ ADDED_OBJ ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(ADDED_OBJ *VAR_0)
{
    if (--VAR_0->obj->nid == 0)
        FUNC_0(VAR_0->obj);
    FUNC_1(VAR_0);
}
