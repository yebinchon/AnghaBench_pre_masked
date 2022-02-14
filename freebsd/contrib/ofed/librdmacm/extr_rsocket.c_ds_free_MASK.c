
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ udp_sock; scalar_t__ index; scalar_t__ epfd; int slock; int rlock; int cq_lock; int cq_wait_lock; int map_lock; int dest_map; struct rsocket* sbuf; struct ds_qp* qp_list; struct rsocket* dmsg; } ;
struct ds_qp {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ds_qp*) ;
 int FUNC_2 (struct rsocket*,struct ds_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rsocket*) ;
 int FUNC_5 (struct rsocket*) ;
 int FUNC_6 (int ,int (*) (struct rsocket*)) ;

__attribute__((used)) static void FUNC_7(struct rsocket *VAR_0)
{
 struct ds_qp *VAR_1;

 if (VAR_0->udp_sock >= 0)
  FUNC_0(VAR_0->udp_sock);

 if (VAR_0->index >= 0)
  FUNC_5(VAR_0);

 if (VAR_0->dmsg)
  FUNC_4(VAR_0->dmsg);

 while ((VAR_1 = VAR_0->qp_list)) {
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_1);
 }

 if (VAR_0->epfd >= 0)
  FUNC_0(VAR_0->epfd);

 if (VAR_0->sbuf)
  FUNC_4(VAR_0->sbuf);

 FUNC_6(VAR_0->dest_map, FUNC_4);
 FUNC_3(&VAR_0->map_lock);
 FUNC_3(&VAR_0->cq_wait_lock);
 FUNC_3(&VAR_0->cq_lock);
 FUNC_3(&VAR_0->rlock);
 FUNC_3(&VAR_0->slock);
 FUNC_4(VAR_0);
}
