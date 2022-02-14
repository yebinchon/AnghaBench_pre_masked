
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx4_wqe_data_seg {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct TYPE_13__ {int max_gs; int head; int wqe_cnt; int lock; int * wrid; } ;
struct TYPE_12__ {void** db; } ;
struct TYPE_10__ {int recv_cq; } ;
struct mlx4_ib_qp {int mlx4_ib_qp_type; TYPE_6__ rq; TYPE_5__ db; TYPE_4__* sqp_proxy_rcv; TYPE_3__ ibqp; } ;
struct mlx4_ib_proxy_sqp_hdr {int dummy; } ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct ib_recv_wr {int num_sge; int wr_id; TYPE_7__* sg_list; struct ib_recv_wr* next; } ;
struct ib_qp {int device; } ;
struct TYPE_14__ {int lkey; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_9__ {TYPE_1__* persist; } ;
struct TYPE_8__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mlx4_wqe_data_seg*,TYPE_7__*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mlx4_wqe_data_seg* FUNC_3 (struct mlx4_ib_qp*,int) ;
 int FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_6__*,int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct mlx4_ib_dev* FUNC_9 (int ) ;
 struct mlx4_ib_qp* FUNC_10 (struct ib_qp*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;

int FUNC_13(struct ib_qp *VAR_9, struct ib_recv_wr *VAR_10,
        struct ib_recv_wr **VAR_11)
{
 struct mlx4_ib_qp *VAR_12 = FUNC_10(VAR_9);
 struct mlx4_wqe_data_seg *VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 struct mlx4_ib_dev *VAR_20 = FUNC_9(VAR_9->device);

 VAR_18 = VAR_12->rq.max_gs;
 FUNC_7(&VAR_12->rq.lock, VAR_14);

 if (VAR_20->dev->persist->state & VAR_4) {
  VAR_15 = -VAR_2;
  *VAR_11 = VAR_10;
  VAR_16 = 0;
  goto out;
 }

 VAR_17 = VAR_12->rq.head & (VAR_12->rq.wqe_cnt - 1);

 for (VAR_16 = 0; VAR_10; ++VAR_16, VAR_10 = VAR_10->next) {
  if (FUNC_6(&VAR_12->rq, VAR_16, VAR_12->ibqp.recv_cq)) {
   VAR_15 = -VAR_3;
   *VAR_11 = VAR_10;
   goto out;
  }

  if (FUNC_11(VAR_10->num_sge > VAR_12->rq.max_gs)) {
   VAR_15 = -VAR_1;
   *VAR_11 = VAR_10;
   goto out;
  }

  VAR_13 = FUNC_3(VAR_12, VAR_17);

  if (VAR_12->mlx4_ib_qp_type & (VAR_7 |
      VAR_6 | VAR_5)) {
   FUNC_4(VAR_9->device,
            VAR_12->sqp_proxy_rcv[VAR_17].map,
            sizeof (struct mlx4_ib_proxy_sqp_hdr),
            VAR_0);
   VAR_13->byte_count =
    FUNC_1(sizeof (struct mlx4_ib_proxy_sqp_hdr));

   VAR_13->lkey = FUNC_1(VAR_10->sg_list->lkey);
   VAR_13->addr = FUNC_2(VAR_12->sqp_proxy_rcv[VAR_17].map);
   VAR_13++;
   VAR_18--;
  }

  for (VAR_19 = 0; VAR_19 < VAR_10->num_sge; ++VAR_19)
   FUNC_0(VAR_13 + VAR_19, VAR_10->sg_list + VAR_19);

  if (VAR_19 < VAR_18) {
   VAR_13[VAR_19].byte_count = 0;
   VAR_13[VAR_19].lkey = FUNC_1(VAR_8);
   VAR_13[VAR_19].addr = 0;
  }

  VAR_12->rq.wrid[VAR_17] = VAR_10->wr_id;

  VAR_17 = (VAR_17 + 1) & (VAR_12->rq.wqe_cnt - 1);
 }

out:
 if (FUNC_5(VAR_16)) {
  VAR_12->rq.head += VAR_16;





  FUNC_12();

  *VAR_12->db.db = FUNC_1(VAR_12->rq.head & 0xffff);
 }

 FUNC_8(&VAR_12->rq.lock, VAR_14);

 return VAR_15;
}
