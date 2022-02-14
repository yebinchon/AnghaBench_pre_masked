
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wqe_cnt; } ;
struct mlx4_ib_qp {TYPE_2__* sqp_proxy_rcv; TYPE_1__ rq; } ;
struct mlx4_ib_proxy_sqp_hdr {int dummy; } ;
struct mlx4_ib_buf {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* addr; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct ib_device*,int ,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_3, struct mlx4_ib_qp *VAR_4)
{
 int VAR_5;

 VAR_4->sqp_proxy_rcv =
  FUNC_4(sizeof (struct mlx4_ib_buf) * VAR_4->rq.wqe_cnt,
   VAR_2);
 if (!VAR_4->sqp_proxy_rcv)
  return -VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_4->rq.wqe_cnt; VAR_5++) {
  VAR_4->sqp_proxy_rcv[VAR_5].addr =
   FUNC_4(sizeof (struct mlx4_ib_proxy_sqp_hdr),
    VAR_2);
  if (!VAR_4->sqp_proxy_rcv[VAR_5].addr)
   goto err;
  VAR_4->sqp_proxy_rcv[VAR_5].map =
   FUNC_0(VAR_3, VAR_4->sqp_proxy_rcv[VAR_5].addr,
       sizeof (struct mlx4_ib_proxy_sqp_hdr),
       VAR_0);
  if (FUNC_1(VAR_3, VAR_4->sqp_proxy_rcv[VAR_5].map)) {
   FUNC_3(VAR_4->sqp_proxy_rcv[VAR_5].addr);
   goto err;
  }
 }
 return 0;

err:
 while (VAR_5 > 0) {
  --VAR_5;
  FUNC_2(VAR_3, VAR_4->sqp_proxy_rcv[VAR_5].map,
        sizeof (struct mlx4_ib_proxy_sqp_hdr),
        VAR_0);
  FUNC_3(VAR_4->sqp_proxy_rcv[VAR_5].addr);
 }
 FUNC_3(VAR_4->sqp_proxy_rcv);
 VAR_4->sqp_proxy_rcv = ((void*)0);
 return -VAR_1;
}
