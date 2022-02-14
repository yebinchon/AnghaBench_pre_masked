
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct qlnx_fastpath {int fp_task; int * fp_taskqueue; int tx_mtx; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_7__ {scalar_t__ state; int num_rss; struct qlnx_fastpath* fp_array; int pci_dev; struct ifnet* ifp; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void
FUNC_7(qlnx_host_t *VAR_3)
{
 struct ifnet *VAR_4 = VAR_3->ifp;
 device_t VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->pci_dev;

 VAR_4->if_drv_flags &= ~(VAR_0 | VAR_1);






        FUNC_0(VAR_3, "QLNX STATE = %d\n",VAR_3->state);

 if (VAR_3->state == VAR_2) {
         for (VAR_6 = 0; VAR_6 < VAR_3->num_rss; VAR_6++) {
   struct qlnx_fastpath *VAR_7 = &VAR_3->fp_array[VAR_6];

   FUNC_1(&VAR_7->tx_mtx);
   FUNC_2(&VAR_7->tx_mtx);

   if (VAR_7->fp_taskqueue != ((void*)0))
    FUNC_6(VAR_7->fp_taskqueue,
     &VAR_7->fp_task);
  }
 }






 FUNC_4(VAR_3);

 return;
}
