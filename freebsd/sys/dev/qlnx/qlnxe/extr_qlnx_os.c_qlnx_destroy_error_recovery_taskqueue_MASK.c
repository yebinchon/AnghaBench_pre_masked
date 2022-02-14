
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * err_taskqueue; int err_task; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_0)
{
        if (VAR_0->err_taskqueue != ((void*)0)) {
                FUNC_0(VAR_0->err_taskqueue, &VAR_0->err_task);
                FUNC_1(VAR_0->err_taskqueue);
        }

        VAR_0->err_taskqueue = ((void*)0);

        return;
}
