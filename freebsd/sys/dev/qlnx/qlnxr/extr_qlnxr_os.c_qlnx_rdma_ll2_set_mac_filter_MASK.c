
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qlnx_host {int dummy; } ;
struct ecore_hwfn {scalar_t__ p_dev; } ;


 int FUNC_0 (struct qlnx_host*,char*,void*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__,int ,int *) ;

int
FUNC_3(void *VAR_0, uint8_t *VAR_1,
 uint8_t *VAR_2)
{
        struct ecore_hwfn *VAR_3 = VAR_0;
        struct qlnx_host *VAR_4;
        int VAR_5 = 0;

        VAR_4 = (struct qlnx_host *)(VAR_3->p_dev);
        FUNC_0(VAR_4, "enter rdma_ctx (%p)\n", VAR_0);

        if (VAR_1)
                FUNC_2(VAR_3->p_dev, 0, VAR_1);

        if (VAR_2)
                VAR_5 = FUNC_1(VAR_3->p_dev, 0, VAR_2);

        FUNC_0(VAR_4, "exit rdma_ctx (%p)\n", VAR_0);
        return (VAR_5);
}
