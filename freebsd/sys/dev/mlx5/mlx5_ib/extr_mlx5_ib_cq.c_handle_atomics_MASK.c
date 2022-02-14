
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int wqe_cnt; int last_poll; TYPE_1__* w_list; } ;
struct mlx5_ib_qp {TYPE_2__ sq; } ;
struct mlx5_cqe64 {int dummy; } ;
struct TYPE_3__ {int next; } ;


 int FUNC_0 (struct mlx5_ib_qp*,struct mlx5_cqe64*,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_qp *VAR_0, struct mlx5_cqe64 *VAR_1,
      u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4;

 do {
  VAR_4 = VAR_2 & (VAR_0->sq.wqe_cnt - 1);
  FUNC_0(VAR_0, VAR_1, VAR_4);
  if (VAR_4 == VAR_3)
   break;

  VAR_2 = VAR_0->sq.w_list[VAR_4].next;
 } while (1);
 VAR_2 = VAR_0->sq.w_list[VAR_4].next;
 VAR_0->sq.last_poll = VAR_2;
}
