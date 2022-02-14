
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Block_layout {int flags; TYPE_1__* descriptor; } ;
typedef int int32_t ;
struct TYPE_2__ {int (* dispose ) (struct Block_layout*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct Block_layout*) ;
 int FUNC_1 (struct Block_layout*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,void*) ;
 int FUNC_4 (struct Block_layout*) ;

void FUNC_5(void *VAR_5) {
    struct Block_layout *VAR_6 = (struct Block_layout *)VAR_5;
    int32_t VAR_7;
    if (!VAR_6) return;
    VAR_7 = FUNC_2(&VAR_6->flags) & VAR_4;
    if (VAR_7 > 0) return;

    if (VAR_6->flags & VAR_1) {



        FUNC_1(VAR_6, 0);
    }
    else if (VAR_6->flags & VAR_3) {
        if (VAR_6->flags & VAR_0)(*VAR_6->descriptor->dispose)(VAR_6);
        FUNC_0(VAR_6);
    }
    else if (VAR_6->flags & VAR_2) {
        ;
    }
    else {
        FUNC_3("Block_release called upon a stack Block: %p, ignored\n", (void *)VAR_6);
    }
}
