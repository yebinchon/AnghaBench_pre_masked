
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wqe_cnt; } ;
struct mlx4_ib_qp {TYPE_2__* sqp_proxy_rcv; TYPE_1__ rq; } ;
struct mlx4_ib_proxy_sqp_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* addr; int map; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_1, struct mlx4_ib_qp *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->rq.wqe_cnt; VAR_3++) {
  FUNC_0(VAR_1, VAR_2->sqp_proxy_rcv[VAR_3].map,
        sizeof (struct mlx4_ib_proxy_sqp_hdr),
        VAR_0);
  FUNC_1(VAR_2->sqp_proxy_rcv[VAR_3].addr);
 }
 FUNC_1(VAR_2->sqp_proxy_rcv);
}
