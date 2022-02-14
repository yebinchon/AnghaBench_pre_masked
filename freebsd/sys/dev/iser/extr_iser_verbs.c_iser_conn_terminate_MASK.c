
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* wr_id; int opcode; } ;
struct TYPE_6__ {int flush_lock; int flush_cv; TYPE_2__ recv; TYPE_2__ send; } ;
struct ib_conn {TYPE_1__ beacon; int * qp; scalar_t__ cma_id; } ;
struct iser_conn {int state; struct ib_conn ib_conn; } ;
struct ib_send_wr {int dummy; } ;
struct ib_recv_wr {int dummy; } ;
struct TYPE_8__ {int close_conns_mutex; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct iser_conn*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,struct iser_conn*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_2__*,struct ib_recv_wr**) ;
 int FUNC_6 (int *,TYPE_2__*,struct ib_send_wr**) ;
 TYPE_3__ VAR_4 ;
 int FUNC_7 (struct iser_conn*,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct iser_conn *VAR_5)
{
 struct ib_conn *VAR_6 = &VAR_5->ib_conn;
 struct ib_send_wr *VAR_7;
 struct ib_recv_wr *VAR_8;
 int VAR_9 = 0;


 if (!FUNC_7(VAR_5, VAR_3,
        VAR_2))
  return (0);

 FUNC_2("iser_conn %p state %d\n", VAR_5, VAR_5->state);

 if (VAR_6->qp == ((void*)0)) {

  FUNC_3("qp wasn't created");
  return (1);
 }
 FUNC_12(&VAR_4.close_conns_mutex);






 if (VAR_6->cma_id) {
  VAR_9 = FUNC_11(VAR_6->cma_id);
  if (VAR_9)
   FUNC_1("Failed to disconnect, conn: 0x%p err %d",
    VAR_5, VAR_9);

  FUNC_9(&VAR_6->beacon.flush_lock);
  FUNC_8(&VAR_6->beacon.send, 0, sizeof(struct ib_send_wr));
  VAR_6->beacon.send.wr_id = VAR_1;
  VAR_6->beacon.send.opcode = VAR_0;

  VAR_9 = FUNC_6(VAR_6->qp, &VAR_6->beacon.send, &VAR_7);
  if (VAR_9) {
   FUNC_1("conn %p failed to post send_beacon", VAR_6);
   FUNC_10(&VAR_6->beacon.flush_lock);
   goto out;
  }

  FUNC_0("before send cv_wait: %p", VAR_5);
  FUNC_4(&VAR_6->beacon.flush_cv, &VAR_6->beacon.flush_lock);
  FUNC_0("after send cv_wait: %p", VAR_5);

  FUNC_8(&VAR_6->beacon.recv, 0, sizeof(struct ib_recv_wr));
  VAR_6->beacon.recv.wr_id = VAR_1;

  VAR_9 = FUNC_5(VAR_6->qp, &VAR_6->beacon.recv, &VAR_8);
  if (VAR_9) {
   FUNC_1("conn %p failed to post recv_beacon", VAR_6);
   FUNC_10(&VAR_6->beacon.flush_lock);
   goto out;
  }

  FUNC_0("before recv cv_wait: %p", VAR_5);
  FUNC_4(&VAR_6->beacon.flush_cv, &VAR_6->beacon.flush_lock);
  FUNC_10(&VAR_6->beacon.flush_lock);
  FUNC_0("after recv cv_wait: %p", VAR_5);
 }
out:
 FUNC_13(&VAR_4.close_conns_mutex);
 return (1);
}
