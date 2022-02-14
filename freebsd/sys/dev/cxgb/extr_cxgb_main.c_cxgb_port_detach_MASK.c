
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_txq {int txq_timer; int txq_watchdog; } ;
struct sge_qset {struct sge_txq* txq; } ;
struct port_info {int first_qset; int nqsets; int * ifp; int * port_cdev; struct adapter* adapter; } ;
struct TYPE_2__ {struct sge_qset* qs; } ;
struct adapter {int flags; TYPE_1__ sge; int lock; } ;
typedef int device_t ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct port_info*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct port_info*) ;
 size_t VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct port_info*) ;
 int FUNC_9 (int *) ;
 struct port_info* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ,char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_1)
{
 struct port_info *VAR_2;
 struct adapter *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_10(VAR_1);
 VAR_3 = VAR_2->adapter;


 FUNC_0(VAR_3);
 FUNC_6(VAR_2);
 FUNC_14(&VAR_3->flags);
 while (FUNC_3(VAR_3))
  FUNC_13(&VAR_3->flags, &VAR_3->lock, 0, "cxgbdtch", 0);
 FUNC_5(VAR_3);
 FUNC_1(VAR_3);

 if (VAR_2->port_cdev != ((void*)0))
  FUNC_9(VAR_2->port_cdev);

 FUNC_8(VAR_2);
 FUNC_11(VAR_2->ifp);

 for (VAR_4 = VAR_2->first_qset; VAR_4 < VAR_2->first_qset + VAR_2->nqsets; VAR_4++) {
  struct sge_qset *VAR_5 = &VAR_3->sge.qs[VAR_4];
  struct sge_txq *VAR_6 = &VAR_5->txq[VAR_0];

  FUNC_7(&VAR_6->txq_watchdog);
  FUNC_7(&VAR_6->txq_timer);
 }

 FUNC_4(VAR_2);
 FUNC_12(VAR_2->ifp);
 VAR_2->ifp = ((void*)0);

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 FUNC_15(&VAR_3->flags);
 FUNC_1(VAR_3);
 return (0);
}
