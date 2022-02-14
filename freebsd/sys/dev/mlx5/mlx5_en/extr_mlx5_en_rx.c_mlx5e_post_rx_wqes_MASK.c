
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int next_wqe_index; } ;
struct mlx5e_rx_wqe {TYPE_1__ next; } ;
struct TYPE_7__ {int head; } ;
struct mlx5e_rq {scalar_t__ enabled; TYPE_2__ wq; int watchdog; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,void*,struct mlx5e_rq*) ;
 struct mlx5e_rx_wqe* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct mlx5e_rq*,struct mlx5e_rx_wqe*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct mlx5e_rq *VAR_0)
{
 if (FUNC_8(VAR_0->enabled == 0))
  return;

 while (!FUNC_4(&VAR_0->wq)) {
  struct mlx5e_rx_wqe *VAR_1 = FUNC_3(&VAR_0->wq, VAR_0->wq.head);

  if (FUNC_8(FUNC_7(VAR_0, VAR_1, VAR_0->wq.head))) {
   FUNC_2(&VAR_0->watchdog, 1, (void *)&FUNC_9, VAR_0);
   break;
  }
  FUNC_5(&VAR_0->wq, FUNC_1(VAR_1->next.next_wqe_index));
 }


 FUNC_0();

 FUNC_6(&VAR_0->wq);
}
