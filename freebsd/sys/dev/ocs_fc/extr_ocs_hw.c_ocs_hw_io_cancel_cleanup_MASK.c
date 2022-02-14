
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int io_lock; int io_timed_wqe; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_10__ {int rnode; int (* abort_done ) (TYPE_3__*,int ,int ,int ,int ,void*) ;void* abort_arg; int (* done ) (TYPE_3__*,int ,int ,int ,int ,void*) ;void* arg; TYPE_1__* wq; int wqe_link; } ;
typedef TYPE_3__ ocs_hw_io_t ;
typedef int (* ocs_hw_done_t ) (TYPE_3__*,int ,int ,int ,int ,void*) ;
struct TYPE_8__ {int pending_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(ocs_hw_t *VAR_1, ocs_hw_io_t *VAR_2)
{
 ocs_hw_done_t VAR_3 = VAR_2->done;
 ocs_hw_done_t VAR_4 = VAR_2->abort_done;


 if (FUNC_0(&VAR_2->wqe_link)) {
  FUNC_1(&VAR_1->io_timed_wqe, VAR_2);
 }


 if ((VAR_2->wq != ((void*)0)) && FUNC_0(&VAR_2->wq->pending_list)) {
  FUNC_1(&VAR_2->wq->pending_list, VAR_2);
 }

 if (VAR_2->done) {
  void *VAR_5 = VAR_2->arg;

  VAR_2->done = ((void*)0);
  FUNC_3(&VAR_1->io_lock);
  VAR_3(VAR_2, VAR_2->rnode, 0, VAR_0, 0, VAR_5);
  FUNC_2(&VAR_1->io_lock);
 }

 if (VAR_2->abort_done != ((void*)0)) {
  void *VAR_6 = VAR_2->abort_arg;

  VAR_2->abort_done = ((void*)0);
  FUNC_3(&VAR_1->io_lock);
  VAR_4(VAR_2, VAR_2->rnode, 0, VAR_0, 0, VAR_6);
  FUNC_2(&VAR_1->io_lock);
 }
}
