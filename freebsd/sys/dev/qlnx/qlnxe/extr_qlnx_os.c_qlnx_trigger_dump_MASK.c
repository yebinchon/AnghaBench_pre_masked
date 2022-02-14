
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int num_hwfns; } ;
struct TYPE_11__ {int error_recovery; int * idle_chk_dwords; int * grcdump_dwords; TYPE_1__ cdev; TYPE_2__* ifp; } ;
typedef TYPE_3__ qlnx_host_t ;
struct TYPE_10__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(qlnx_host_t *VAR_2)
{
 int VAR_3;

 if (VAR_2->ifp != ((void*)0))
  VAR_2->ifp->if_drv_flags &= ~(VAR_0 | VAR_1);

 FUNC_0(VAR_2, "enter\n");

 if (FUNC_3(VAR_2) == 0)
  return;

 VAR_2->error_recovery = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->cdev.num_hwfns; VAR_3++) {
  FUNC_1(VAR_2, &VAR_2->grcdump_dwords[VAR_3], VAR_3);
  FUNC_2(VAR_2, &VAR_2->idle_chk_dwords[VAR_3], VAR_3);
 }

 FUNC_0(VAR_2, "exit\n");

 return;
}
