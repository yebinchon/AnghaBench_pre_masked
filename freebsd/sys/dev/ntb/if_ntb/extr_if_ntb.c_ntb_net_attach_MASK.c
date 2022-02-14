
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_queue_handlers {int member_2; int member_1; int member_0; } ;
struct ntb_net_queue {int * qp; int queue_full; int tx_tq; int tx_task; int tx_lock; int br; int * ifp; struct ntb_net_ctx* sc; } ;
struct ntb_net_ctx {int num_queues; struct ntb_net_queue* queues; int media; scalar_t__ mtu; int eaddr; int * ifp; } ;
typedef int * if_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int ,int ,struct ntb_net_queue*) ;
 int FUNC_1 (int,int ,int,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ntb_net_ctx* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *,int ) ;
 int VAR_19 ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,scalar_t__) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,struct ntb_net_ctx*) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ,int ,int *) ;
 int FUNC_23 (int *,int ,int ,int ) ;
 int FUNC_24 (int *,int ) ;
 scalar_t__ FUNC_25 (scalar_t__,int ) ;
 struct ntb_net_queue* FUNC_26 (int,int ,int) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int *,char*,int *,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int * FUNC_29 (int ,int,struct ntb_queue_handlers*,struct ntb_net_queue*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (char*) ;
 int FUNC_34 (char*,int ,int ,int *) ;
 int FUNC_35 (int *,int,int ,char*,int ,int) ;
 int VAR_30 ;

__attribute__((used)) static int
FUNC_36(device_t VAR_31)
{
 struct ntb_net_ctx *VAR_32 = FUNC_6(VAR_31);
 struct ntb_net_queue *VAR_33;
 if_t VAR_34;
 struct ntb_queue_handlers VAR_35 = { VAR_26,
     VAR_27, VAR_24 };
 int VAR_36;

 VAR_34 = VAR_32->ifp = FUNC_10(VAR_10);
 if (VAR_34 == ((void*)0)) {
  FUNC_33("ntb: Cannot allocate ifnet structure\n");
  return (VAR_0);
 }
 FUNC_11(VAR_34, FUNC_4(VAR_31), FUNC_7(VAR_31));
 FUNC_14(VAR_34, VAR_31);

 VAR_32->num_queues = FUNC_27(VAR_19,
     FUNC_32(VAR_31));
 VAR_32->queues = FUNC_26(VAR_32->num_queues * sizeof(struct ntb_net_queue),
     VAR_13, VAR_15 | VAR_16);
 VAR_32->mtu = VAR_11;
 for (VAR_36 = 0; VAR_36 < VAR_32->num_queues; VAR_36++) {
  VAR_33 = &VAR_32->queues[VAR_36];
  VAR_33->sc = VAR_32;
  VAR_33->ifp = VAR_34;
  VAR_33->qp = FUNC_29(VAR_31, VAR_36, &VAR_35, VAR_33);
  if (VAR_33->qp == ((void*)0))
   break;
  VAR_32->mtu = FUNC_25(VAR_32->mtu, FUNC_31(VAR_33->qp));
  FUNC_28(&VAR_33->tx_lock, "ntb tx", ((void*)0), VAR_12);
  VAR_33->br = FUNC_1(4096, VAR_13, VAR_15, &VAR_33->tx_lock);
  FUNC_0(&VAR_33->tx_task, 0, VAR_20, VAR_33);
  VAR_33->tx_tq = FUNC_34("ntb_txq", VAR_14,
      VAR_30, &VAR_33->tx_tq);
  FUNC_35(&VAR_33->tx_tq, 1, VAR_18, "%s txq%d",
      FUNC_5(VAR_31), VAR_36);
  FUNC_2(&VAR_33->queue_full, 1);
 }
 VAR_32->num_queues = VAR_36;
 FUNC_8(VAR_31, "%d queue(s)\n", VAR_32->num_queues);

 FUNC_16(VAR_34, VAR_25);
 FUNC_20(VAR_34, VAR_32);
 FUNC_15(VAR_34, VAR_6 | VAR_8 | VAR_7);
 FUNC_17(VAR_34, VAR_23);
 FUNC_21(VAR_34, VAR_29);
 FUNC_19(VAR_34, VAR_28);
 FUNC_3(VAR_32->eaddr);
 FUNC_9(VAR_34, VAR_32->eaddr);
 FUNC_12(VAR_34, VAR_2 | VAR_3 |
     VAR_4 | VAR_5);
 FUNC_13(VAR_34, VAR_4 | VAR_5);
 FUNC_18(VAR_34, VAR_32->mtu - VAR_1);

 FUNC_23(&VAR_32->media, VAR_9, VAR_22,
     VAR_21);
 FUNC_22(&VAR_32->media, VAR_17, 0, ((void*)0));
 FUNC_24(&VAR_32->media, VAR_17);

 for (VAR_36 = 0; VAR_36 < VAR_32->num_queues; VAR_36++)
  FUNC_30(VAR_32->queues[VAR_36].qp);
 return (0);
}
