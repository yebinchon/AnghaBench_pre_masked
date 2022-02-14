
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int win; } ;
struct TYPE_5__ {TYPE_1__ obj; int old_wide; int wide; int old_high; int high; int prompt; } ;
typedef TYPE_2__ MY_OBJ ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(MY_OBJ * VAR_0)
{
    FUNC_2(VAR_0->prompt);
    VAR_0->high = VAR_0->old_high;
    VAR_0->wide = VAR_0->old_wide;
    FUNC_0();
    FUNC_1(VAR_0->obj.win);
}
