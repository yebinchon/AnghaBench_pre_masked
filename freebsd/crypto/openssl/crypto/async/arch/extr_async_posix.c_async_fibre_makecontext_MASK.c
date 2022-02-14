
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ss_sp; int ss_size; } ;
struct TYPE_8__ {TYPE_1__ uc_stack; int * uc_link; } ;
struct TYPE_7__ {TYPE_3__ fibre; scalar_t__ env_init; } ;
typedef TYPE_2__ async_fibre ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;

int FUNC_3(async_fibre *VAR_2)
{
    VAR_2->env_init = 0;
    if (FUNC_1(&VAR_2->fibre) == 0) {
        VAR_2->fibre.uc_stack.ss_sp = FUNC_0(VAR_0);
        if (VAR_2->fibre.uc_stack.ss_sp != ((void*)0)) {
            VAR_2->fibre.uc_stack.ss_size = VAR_0;
            VAR_2->fibre.uc_link = ((void*)0);
            FUNC_2(&VAR_2->fibre, VAR_1, 0);
            return 1;
        }
    } else {
        VAR_2->fibre.uc_stack.ss_sp = ((void*)0);
    }
    return 0;
}
