
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xo_stack_t ;
struct TYPE_4__ {int xo_stack_size; int * xo_stack; } ;
typedef TYPE_1__ xo_handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3 (xo_handle_t *VAR_1, int VAR_2)
{
    xo_stack_t *VAR_3;

    if (VAR_2 >= VAR_1->xo_stack_size) {
 VAR_2 += VAR_0;

 VAR_3 = FUNC_2(VAR_1->xo_stack, sizeof(VAR_1->xo_stack[0]) * VAR_2);
 if (VAR_3 == ((void*)0)) {
     FUNC_1(VAR_1, "xo_depth_check: out of memory (%d)", VAR_2);
     return -1;
 }

 int VAR_4 = VAR_2 - VAR_1->xo_stack_size;

 FUNC_0(VAR_3 + VAR_1->xo_stack_size, VAR_4 * sizeof(*VAR_3));
 VAR_1->xo_stack_size = VAR_2;
 VAR_1->xo_stack = VAR_3;
    }

    return 0;
}
