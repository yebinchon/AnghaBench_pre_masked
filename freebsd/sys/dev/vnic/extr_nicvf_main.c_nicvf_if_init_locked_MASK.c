
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_set {int cq_cnt; int rbdr_cnt; } ;
struct TYPE_2__ {scalar_t__ txq_wake; scalar_t__ txq_stop; } ;
struct nicvf {int stats_callout; TYPE_1__ drv_stats; int hwaddr; struct ifnet* ifp; struct queue_set* qs; } ;
struct ifnet {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nicvf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,struct nicvf*) ;
 int VAR_7 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,char*) ;
 int FUNC_5 (struct ifnet*,int,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct nicvf*,int ,int) ;
 int FUNC_9 (struct nicvf*) ;
 int FUNC_10 (struct nicvf*,int ) ;
 int FUNC_11 (struct nicvf*) ;
 int FUNC_12 (struct nicvf*,int ,unsigned long) ;
 int FUNC_13 (struct nicvf*) ;
 int VAR_8 ;
 int FUNC_14 () ;

__attribute__((used)) static void
FUNC_15(struct nicvf *VAR_9)
{
 struct queue_set *VAR_10 = VAR_9->qs;
 struct ifnet *VAR_11;
 int VAR_12;
 int VAR_13;
 caddr_t VAR_14;

 FUNC_0(VAR_9);
 VAR_11 = VAR_9->ifp;

 if ((FUNC_2(VAR_11) & VAR_2) != 0)
  FUNC_13(VAR_9);

 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13 != 0) {
  FUNC_4(VAR_11, "Could not reenable Mbox interrupt\n");
  return;
 }


 VAR_14 = FUNC_3(VAR_11);

 if (FUNC_6(VAR_9->hwaddr, VAR_14, VAR_0) != 0) {
  FUNC_7(VAR_9->hwaddr, VAR_14, VAR_0);
  FUNC_10(VAR_9, VAR_14);
 }


 VAR_13 = FUNC_11(VAR_9);
 if (VAR_13 != 0)
  goto error;


 FUNC_14();

 FUNC_12(VAR_9, VAR_6, ~0UL);

 FUNC_8(VAR_9, VAR_4, 0);


 for (VAR_12 = 0; VAR_12 < VAR_10->cq_cnt; VAR_12++)
  FUNC_8(VAR_9, VAR_3, VAR_12);


 for (VAR_12 = 0; VAR_12 < VAR_10->rbdr_cnt; VAR_12++)
  FUNC_8(VAR_9, VAR_5, VAR_12);

 VAR_9->drv_stats.txq_stop = 0;
 VAR_9->drv_stats.txq_wake = 0;


 FUNC_5(VAR_11, VAR_2, VAR_1);


 FUNC_1(&VAR_9->stats_callout, VAR_7, VAR_8, VAR_9);

 return;

error:

 FUNC_5(VAR_11, VAR_1, VAR_2);
}
