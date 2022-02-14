
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tq_name ;
struct TYPE_5__ {int * err_taskqueue; int err_task; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int,char*) ;
 int * FUNC_4 (int *,int ,int ,int **) ;
 int FUNC_5 (int **,int,int ,char*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_4)
{
        uint8_t VAR_5[32];

        FUNC_2(VAR_5, sizeof (VAR_5));
        FUNC_3(VAR_5, sizeof (VAR_5), "ql_err_tq");

        FUNC_1(&VAR_4->err_task, 0, VAR_2, VAR_4);

        VAR_4->err_taskqueue = FUNC_4(VAR_5, VAR_0,
                                VAR_3, &VAR_4->err_taskqueue);


        if (VAR_4->err_taskqueue == ((void*)0))
                return (-1);

        FUNC_5(&VAR_4->err_taskqueue, 1, VAR_1, "%s", VAR_5);

        FUNC_0(VAR_4, "%p\n",VAR_4->err_taskqueue);

        return (0);
}
