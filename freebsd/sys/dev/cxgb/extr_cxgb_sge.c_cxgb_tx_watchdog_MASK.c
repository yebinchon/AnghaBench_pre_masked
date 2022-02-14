
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int c_cpu; } ;
struct sge_txq {scalar_t__ in_use; TYPE_3__ txq_watchdog; } ;
struct sge_qset {int coalescing; TYPE_2__* port; int qs_flags; struct sge_txq* txq; } ;
struct TYPE_5__ {TYPE_1__* ifp; } ;
struct TYPE_4__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct sge_qset*) ;
 scalar_t__ FUNC_1 (struct sge_qset*) ;
 int FUNC_2 (struct sge_qset*) ;
 int FUNC_3 (TYPE_3__*,int,void (*) (void*),struct sge_qset*,int ) ;
 int FUNC_4 (struct sge_qset*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void
FUNC_5(void *VAR_6)
{
 struct sge_qset *VAR_7 = VAR_6;
 struct sge_txq *VAR_8 = &VAR_7->txq[VAR_2];

        if (VAR_7->coalescing != 0 &&
     (VAR_8->in_use <= VAR_4) &&
     FUNC_0(VAR_7))
                VAR_7->coalescing = 0;
        else if (VAR_7->coalescing == 0 &&
     (VAR_8->in_use >= VAR_3))
                VAR_7->coalescing = 1;
 if (FUNC_1(VAR_7)) {
  VAR_7->qs_flags |= VAR_1;
  FUNC_4(VAR_7);
  VAR_7->qs_flags &= ~VAR_1;
  FUNC_2(VAR_7);
 }
 if (VAR_7->port->ifp->if_drv_flags & VAR_0)
  FUNC_3(&VAR_8->txq_watchdog, VAR_5/4, FUNC_5,
      VAR_7, VAR_8->txq_watchdog.c_cpu);
}
