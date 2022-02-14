
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct qlnx_fastpath {int * txq; int rxq; int sb_info; } ;
struct TYPE_6__ {int num_tc; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,struct qlnx_fastpath*,int ) ;

__attribute__((used)) static void
FUNC_3(qlnx_host_t *VAR_0, struct qlnx_fastpath *VAR_1)
{
        int VAR_2;

        FUNC_1(VAR_0, VAR_1->sb_info);

        FUNC_0(VAR_0, VAR_1->rxq);

        for (VAR_2 = 0; VAR_2 < VAR_0->num_tc; VAR_2++)
                FUNC_2(VAR_0, VAR_1, VAR_1->txq[VAR_2]);

 return;
}
