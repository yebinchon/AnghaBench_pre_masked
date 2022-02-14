
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_device {int dummy; } ;
struct ib_conn {struct iser_device* device; int * qp; int cma_id; TYPE_1__* comp; } ;
struct iser_conn {scalar_t__ rx_descs; scalar_t__ login_buf; struct ib_conn ib_conn; } ;
struct TYPE_4__ {int connlist_mutex; } ;
struct TYPE_3__ {int active_qps; } ;


 int FUNC_0 (char*,struct iser_conn*,int ,int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct iser_device*) ;
 int FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct iser_conn *VAR_1,
      bool VAR_2)
{
 struct ib_conn *VAR_3 = &VAR_1->ib_conn;
 struct iser_device *VAR_4 = VAR_3->device;

 FUNC_0("freeing conn %p cma_id %p qp %p",
    VAR_1, VAR_3->cma_id, VAR_3->qp);

 if (VAR_3->qp != ((void*)0)) {
  FUNC_4(&VAR_0.connlist_mutex);
  VAR_3->comp->active_qps--;
  FUNC_5(&VAR_0.connlist_mutex);
  FUNC_6(VAR_3->cma_id);
  VAR_3->qp = ((void*)0);
 }

 if (VAR_2) {
  if (VAR_1->login_buf)
   FUNC_2(VAR_1);

  if (VAR_1->rx_descs)
   FUNC_3(VAR_1);

  if (VAR_4 != ((void*)0)) {
   FUNC_1(VAR_4);
   VAR_3->device = ((void*)0);
  }
 }
}
