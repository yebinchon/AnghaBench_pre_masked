
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xs_transaction {int dummy; } ;
struct netfront_info {int num_queues; TYPE_1__* xn_ifp; int * txq; int * rxq; int xbdev; int mac; } ;
typedef int device_t ;
struct TYPE_2__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netfront_info*) ;
 int FUNC_1 (int ,struct netfront_info*,unsigned long) ;
 int FUNC_2 (int ,int *,int *,struct xs_transaction*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,char*,...) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned long VAR_4 ;
 int FUNC_7 (struct xs_transaction,char const*,char*,char*,int) ;
 int FUNC_8 (int ,int ,char*,int *,char*,unsigned long*) ;
 int FUNC_9 (struct xs_transaction,int) ;
 int FUNC_10 (struct xs_transaction*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5, struct netfront_info *VAR_6)
{
 const char *VAR_7;
 struct xs_transaction VAR_8;
 const char *VAR_9 = FUNC_5(VAR_5);
 int VAR_10;
 unsigned long VAR_11, VAR_12 = 0;
 unsigned int VAR_13;

 VAR_10 = FUNC_3(VAR_5, VAR_6->mac);
 if (VAR_10 != 0) {
  FUNC_4(VAR_5, VAR_10, "parsing %s/mac", VAR_9);
  goto out;
 }

 VAR_10 = FUNC_8(VAR_3, FUNC_6(VAR_6->xbdev),
     "multi-queue-max-queues", ((void*)0), "%lu", &VAR_12);
 if (VAR_10 != 0)
  VAR_12 = 1;
 VAR_11 = VAR_4;
 if (VAR_11 > VAR_12)
  VAR_11 = VAR_12;

 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_11);
 if (VAR_10 != 0)
  goto out;

 again:
 VAR_10 = FUNC_10(&VAR_8);
 if (VAR_10 != 0) {
  FUNC_4(VAR_5, VAR_10, "starting transaction");
  goto free;
 }

 if (VAR_6->num_queues == 1) {
  VAR_10 = FUNC_2(VAR_5, &VAR_6->rxq[0],
      &VAR_6->txq[0], &VAR_8, 0);
  if (VAR_10 != 0)
   goto abort_transaction_no_def_error;
 } else {
  VAR_10 = FUNC_7(VAR_8, VAR_9, "multi-queue-num-queues",
      "%u", VAR_6->num_queues);
  if (VAR_10 != 0) {
   VAR_7 = "writing multi-queue-num-queues";
   goto abort_transaction;
  }

  for (VAR_13 = 0; VAR_13 < VAR_6->num_queues; VAR_13++) {
   VAR_10 = FUNC_2(VAR_5, &VAR_6->rxq[VAR_13],
       &VAR_6->txq[VAR_13], &VAR_8, 1);
   if (VAR_10 != 0)
    goto abort_transaction_no_def_error;
  }
 }

 VAR_10 = FUNC_7(VAR_8, VAR_9, "request-rx-copy", "%u", 1);
 if (VAR_10 != 0) {
  VAR_7 = "writing request-rx-copy";
  goto abort_transaction;
 }
 VAR_10 = FUNC_7(VAR_8, VAR_9, "feature-rx-notify", "%d", 1);
 if (VAR_10 != 0) {
  VAR_7 = "writing feature-rx-notify";
  goto abort_transaction;
 }
 VAR_10 = FUNC_7(VAR_8, VAR_9, "feature-sg", "%d", 1);
 if (VAR_10 != 0) {
  VAR_7 = "writing feature-sg";
  goto abort_transaction;
 }
 if ((VAR_6->xn_ifp->if_capenable & VAR_1) != 0) {
  VAR_10 = FUNC_7(VAR_8, VAR_9, "feature-gso-tcpv4", "%d", 1);
  if (VAR_10 != 0) {
   VAR_7 = "writing feature-gso-tcpv4";
   goto abort_transaction;
  }
 }
 if ((VAR_6->xn_ifp->if_capenable & VAR_2) == 0) {
  VAR_10 = FUNC_7(VAR_8, VAR_9, "feature-no-csum-offload", "%d", 1);
  if (VAR_10 != 0) {
   VAR_7 = "writing feature-no-csum-offload";
   goto abort_transaction;
  }
 }

 VAR_10 = FUNC_9(VAR_8, 0);
 if (VAR_10 != 0) {
  if (VAR_10 == VAR_0)
   goto again;
  FUNC_4(VAR_5, VAR_10, "completing transaction");
  goto free;
 }

 return 0;

 abort_transaction:
 FUNC_4(VAR_5, VAR_10, "%s", VAR_7);
 abort_transaction_no_def_error:
 FUNC_9(VAR_8, 1);
 free:
 FUNC_0(VAR_6);
 out:
 return (VAR_10);
}
