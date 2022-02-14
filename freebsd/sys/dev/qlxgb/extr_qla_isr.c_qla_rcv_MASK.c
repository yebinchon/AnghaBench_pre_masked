
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int * ifq_head; } ;
struct ifnet {TYPE_1__ if_snd; } ;
struct TYPE_8__ {scalar_t__ irq_rid; TYPE_4__* ha; } ;
typedef TYPE_2__ qla_ivec_t ;
struct TYPE_9__ {scalar_t__ txr_comp; int * tx_cons; } ;
typedef TYPE_3__ qla_hw_t ;
struct TYPE_10__ {int tx_task; int tx_tq; struct ifnet* ifp; TYPE_3__ hw; int pci_dev; } ;
typedef TYPE_4__ qla_host_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(void *VAR_1, int VAR_2)
{
 qla_ivec_t *VAR_3 = VAR_1;
 qla_host_t *VAR_4;
 device_t VAR_5;
 qla_hw_t *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 struct ifnet *VAR_9;

 VAR_4 = VAR_3->ha;
 VAR_5 = VAR_4->pci_dev;
 VAR_6 = &VAR_4->hw;
 VAR_7 = VAR_3->irq_rid - 1;
 VAR_9 = VAR_4->ifp;

 do {
  if (VAR_7 == 0) {
   if (FUNC_2(*(VAR_6->tx_cons)) != VAR_6->txr_comp) {
    FUNC_4(VAR_4->tx_tq, &VAR_4->tx_task);
   } else if ((VAR_9->if_snd.ifq_head != ((void*)0)) &&
     FUNC_1(VAR_9)) {
    FUNC_4(VAR_4->tx_tq, &VAR_4->tx_task);
   }
  }
  VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_0);
 } while (VAR_8);

 if (VAR_7 == 0)
  FUNC_4(VAR_4->tx_tq, &VAR_4->tx_task);

 FUNC_0(VAR_4, VAR_7);
}
