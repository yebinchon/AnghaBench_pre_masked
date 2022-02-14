
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qlnx_fastpath {int dummy; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_4__ {int num_rss; struct qlnx_fastpath* fp_array; struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,struct qlnx_fastpath*) ;

__attribute__((used)) static void
FUNC_1(qlnx_host_t *VAR_0)
{
        int VAR_1;
 struct ecore_dev *VAR_2;

 VAR_2 = &VAR_0->cdev;

        for (VAR_1 = 0; VAR_1 < VAR_0->num_rss; VAR_1++) {
                struct qlnx_fastpath *VAR_3 = &VAR_0->fp_array[VAR_1];

                FUNC_0(VAR_0, VAR_3);
        }
 return;
}
