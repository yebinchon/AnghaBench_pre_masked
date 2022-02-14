
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int count; int state; unsigned char* start_buf; int size; char* rdma_buf; scalar_t__ verbose; scalar_t__ validate; int sem; int sq_wr; int qp; int rdma_mr; int start_mr; } ;
struct ibv_send_wr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int *,struct ibv_send_wr**) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct rping_cb*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*,int,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct rping_cb *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 struct ibv_send_wr *VAR_12;
 unsigned char VAR_13;

 VAR_8 = 65;
 for (VAR_7 = 0; !VAR_6->count || VAR_7 < VAR_6->count; VAR_7++) {
  VAR_6->state = VAR_1;


  VAR_9 = FUNC_6(VAR_6->start_buf, VAR_6->size, VAR_4, VAR_7);
  for (VAR_10 = VAR_9, VAR_13 = VAR_8; VAR_10 < VAR_6->size; VAR_10++) {
   VAR_6->start_buf[VAR_10] = VAR_13;
   VAR_13++;
   if (VAR_13 > 122)
    VAR_13 = 65;
  }
  VAR_8++;
  if (VAR_8 > 122)
   VAR_8 = 65;
  VAR_6->start_buf[VAR_6->size - 1] = 0;

  FUNC_4(VAR_6, VAR_6->start_buf, VAR_6->start_mr);
  VAR_11 = FUNC_1(VAR_6->qp, &VAR_6->sq_wr, &VAR_12);
  if (VAR_11) {
   FUNC_0(VAR_5, "post send error %d\n", VAR_11);
   break;
  }


  FUNC_5(&VAR_6->sem);
  if (VAR_6->state != VAR_2) {
   FUNC_0(VAR_5, "wait for RDMA_WRITE_ADV state %d\n",
    VAR_6->state);
   VAR_11 = -1;
   break;
  }

  FUNC_4(VAR_6, VAR_6->rdma_buf, VAR_6->rdma_mr);
  VAR_11 = FUNC_1(VAR_6->qp, &VAR_6->sq_wr, &VAR_12);
  if (VAR_11) {
   FUNC_0(VAR_5, "post send error %d\n", VAR_11);
   break;
  }


  FUNC_5(&VAR_6->sem);
  if (VAR_6->state != VAR_3) {
   FUNC_0(VAR_5, "wait for RDMA_WRITE_COMPLETE state %d\n",
    VAR_6->state);
   VAR_11 = -1;
   break;
  }

  if (VAR_6->validate)
   if (FUNC_2(VAR_6->start_buf, VAR_6->rdma_buf, VAR_6->size)) {
    FUNC_0(VAR_5, "data mismatch!\n");
    VAR_11 = -1;
    break;
   }

  if (VAR_6->verbose)
   FUNC_3("ping data: %s\n", VAR_6->rdma_buf);
 }

 return (VAR_6->state == VAR_0) ? 0 : VAR_11;
}
