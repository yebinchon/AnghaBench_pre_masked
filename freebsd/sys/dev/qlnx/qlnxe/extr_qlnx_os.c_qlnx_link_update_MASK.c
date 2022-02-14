
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_7__ {int link_up; } ;
struct TYPE_6__ {int link_up; scalar_t__ sriov_initialized; int ifp; TYPE_5__ if_link; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,void*,TYPE_5__*) ;
 int FUNC_2 (void*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void *VAR_2)
{
 qlnx_host_t *VAR_3;
 int VAR_4;

 VAR_3 = (qlnx_host_t *)((struct ecore_hwfn *)VAR_2)->p_dev;

 FUNC_1(VAR_3, VAR_2, &VAR_3->if_link);

 VAR_4 = VAR_3->link_up;
 VAR_3->link_up = VAR_3->if_link.link_up;

        if (VAR_4 != VAR_3->link_up) {
                if (VAR_3->link_up) {
                        FUNC_0(VAR_3->ifp, VAR_1);
                } else {
                        FUNC_0(VAR_3->ifp, VAR_0);
                }
        }
        return;
}
