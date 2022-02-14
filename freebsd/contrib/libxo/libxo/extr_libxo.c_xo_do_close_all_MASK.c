
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xo_xsf_flags_t ;
struct TYPE_11__ {int xs_state; int xs_flags; int xs_name; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_12__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;






 int FUNC_0 (TYPE_2__*,int ,int,int ,int const,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,char*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (xo_handle_t *VAR_1, xo_stack_t *VAR_2)
{
    xo_stack_t *VAR_3;
    ssize_t VAR_4 = 0;
    xo_xsf_flags_t VAR_5;

    for (VAR_3 = &VAR_1->xo_stack[VAR_1->xo_depth]; VAR_3 >= VAR_2; VAR_3--) {
 switch (VAR_3->xs_state) {
 case 133:

     VAR_4 = 0;
     break;

 case 131:
     VAR_4 = FUNC_1(VAR_1, ((void*)0));
     break;

 case 128:
     VAR_4 = FUNC_4(VAR_1, ((void*)0));
     break;

 case 130:
     VAR_4 = FUNC_2(VAR_1, ((void*)0));
     break;

 case 129:
     VAR_4 = FUNC_3(VAR_1, ((void*)0));
     break;

 case 132:
     VAR_5 = VAR_3->xs_flags & VAR_0;
     FUNC_0(VAR_1, VAR_3->xs_name, -1, 0, 132, 0);
     VAR_1->xo_stack[VAR_1->xo_depth].xs_flags |= VAR_5;
     VAR_4 = 0;
     break;
 }

 if (VAR_4 < 0)
     FUNC_5(VAR_1, "close %d failed: %d", VAR_3->xs_state, VAR_4);
    }

    return 0;
}
