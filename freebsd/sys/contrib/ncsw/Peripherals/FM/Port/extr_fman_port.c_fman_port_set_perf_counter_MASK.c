
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_port {int type; } ;
typedef enum fman_port_perf_counters { ____Placeholder_fman_port_perf_counters } fman_port_perf_counters ;
 int FUNC_0 (struct fman_port*,int,int **) ;
 int FUNC_1 (struct fman_port*,int,int **) ;
 int FUNC_2 (struct fman_port*,int,int **) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct fman_port *VAR_0,
        enum fman_port_perf_counters VAR_1,
        uint32_t VAR_2)
{
    uint32_t *VAR_3;

    switch (VAR_0->type) {
    case 131:
    case 130:
        FUNC_1(VAR_0, VAR_1, &VAR_3);
        break;
    case 129:
    case 128:
        FUNC_2(VAR_0, VAR_1, &VAR_3);
        break;
    case 132:
    case 133:
        FUNC_0(VAR_0, VAR_1, &VAR_3);
        break;
    default:
        VAR_3 = ((void*)0);
    }

    if (VAR_3 == ((void*)0))
        return;

    FUNC_3(VAR_2, VAR_3);
}
