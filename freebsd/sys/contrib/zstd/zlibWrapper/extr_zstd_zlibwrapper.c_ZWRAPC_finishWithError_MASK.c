
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int ZWRAP_CCtx ;
struct TYPE_3__ {int * state; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(ZWRAP_CCtx* VAR_1, z_streamp VAR_2, int VAR_3)
{
    FUNC_0("- ZWRAPC_finishWithError=%d\n", VAR_3);
    if (VAR_1) FUNC_1(VAR_1);
    if (VAR_2) VAR_2->state = ((void*)0);
    return (VAR_3) ? VAR_3 : VAR_0;
}
