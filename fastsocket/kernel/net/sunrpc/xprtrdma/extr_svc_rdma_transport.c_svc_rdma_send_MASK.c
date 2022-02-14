
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xpt_flags; } ;
struct svcxprt_rdma {scalar_t__ sc_sq_depth; int sc_send_wait; int sc_lock; int sc_sq_count; TYPE_1__ sc_xprt; int sc_qp; } ;
struct ib_send_wr {scalar_t__ send_flags; struct ib_send_wr* next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,struct ib_send_wr*,struct ib_send_wr**) ;
 int VAR_3 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct svcxprt_rdma*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct svcxprt_rdma *VAR_4, struct ib_send_wr *VAR_5)
{
 struct ib_send_wr *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (FUNC_13(VAR_2, &VAR_4->sc_xprt.xpt_flags))
  return -VAR_0;

 FUNC_0(VAR_5->send_flags != VAR_1);
 VAR_8 = 1;
 for (VAR_7 = VAR_5->next; VAR_7; VAR_7 = VAR_7->next)
  VAR_8++;


 while (1) {
  FUNC_8(&VAR_4->sc_lock);
  if (VAR_4->sc_sq_depth < FUNC_3(&VAR_4->sc_sq_count) + VAR_8) {
   FUNC_9(&VAR_4->sc_lock);
   FUNC_2(&VAR_3);


   FUNC_10(VAR_4);


   FUNC_14(VAR_4->sc_send_wait,
       FUNC_3(&VAR_4->sc_sq_count) <
       VAR_4->sc_sq_depth);
   if (FUNC_13(VAR_2, &VAR_4->sc_xprt.xpt_flags))
    return -VAR_0;
   continue;
  }

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   FUNC_11(&VAR_4->sc_xprt);


  FUNC_1(VAR_8, &VAR_4->sc_sq_count);
  VAR_10 = FUNC_6(VAR_4->sc_qp, VAR_5, &VAR_6);
  if (VAR_10) {
   FUNC_7(VAR_2, &VAR_4->sc_xprt.xpt_flags);
   FUNC_4(VAR_8, &VAR_4->sc_sq_count);
   for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 ++)
    FUNC_12(&VAR_4->sc_xprt);
   FUNC_5("svcrdma: failed to post SQ WR rc=%d, "
          "sc_sq_count=%d, sc_sq_depth=%d\n",
          VAR_10, FUNC_3(&VAR_4->sc_sq_count),
          VAR_4->sc_sq_depth);
  }
  FUNC_9(&VAR_4->sc_lock);
  if (VAR_10)
   FUNC_15(&VAR_4->sc_send_wait);
  break;
 }
 return VAR_10;
}
