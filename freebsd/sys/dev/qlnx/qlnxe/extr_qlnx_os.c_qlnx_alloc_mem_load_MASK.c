
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qlnx_fastpath {int dummy; } ;
struct TYPE_4__ {int num_rss; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,struct qlnx_fastpath*) ;

__attribute__((used)) static int
FUNC_1(qlnx_host_t *VAR_0)
{
        int VAR_1 = 0, VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_0->num_rss; VAR_2++) {
                struct qlnx_fastpath *VAR_3 = &VAR_0->fp_array[VAR_2];

                VAR_1 = FUNC_0(VAR_0, VAR_3);
                if (VAR_1)
                        break;
        }
 return (VAR_1);
}
