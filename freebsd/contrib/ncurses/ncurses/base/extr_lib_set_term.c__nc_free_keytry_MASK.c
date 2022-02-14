
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* sibling; struct TYPE_4__* child; } ;
typedef TYPE_1__ TRIES ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(TRIES * VAR_0)
{
    if (VAR_0 != 0) {
 FUNC_1(VAR_0->child);
 FUNC_1(VAR_0->sibling);
 FUNC_0(VAR_0);
    }
}
