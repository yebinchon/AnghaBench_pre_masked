
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_port {int dummy; } ;
typedef enum fman_port_qmi_counters { ____Placeholder_fman_port_qmi_counters } fman_port_qmi_counters ;


 int FUNC_0 (struct fman_port*,int,int **) ;
 int FUNC_1 (int *) ;

uint32_t FUNC_2(struct fman_port *VAR_0,
        enum fman_port_qmi_counters VAR_1)
{
    uint32_t *VAR_2, VAR_3;

    FUNC_0(VAR_0, VAR_1, &VAR_2);

    if (VAR_2 == ((void*)0))
        return 0;

    VAR_3 = FUNC_1(VAR_2);
    return VAR_3;
}
