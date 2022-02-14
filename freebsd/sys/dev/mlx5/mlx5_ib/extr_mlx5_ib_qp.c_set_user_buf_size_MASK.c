
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int buf_size; } ;
struct mlx5_ib_qp_base {TYPE_4__ ubuffer; } ;
struct TYPE_12__ {int wqe_shift; int wqe_cnt; } ;
struct TYPE_11__ {int wqe_cnt; int wqe_shift; } ;
struct TYPE_7__ {int buf_size; } ;
struct TYPE_8__ {TYPE_1__ ubuffer; } ;
struct TYPE_9__ {TYPE_2__ sq; } ;
struct mlx5_ib_qp {TYPE_6__ sq; TYPE_5__ rq; TYPE_3__ raw_packet_qp; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_create_qp {int sq_wqe_count; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_4,
       struct mlx5_ib_qp *VAR_5,
       struct mlx5_ib_create_qp *VAR_6,
       struct mlx5_ib_qp_base *VAR_7,
       struct ib_qp_init_attr *VAR_8)
{
 int VAR_9 = 1 << VAR_5->sq.wqe_shift;

 if (VAR_9 > FUNC_0(VAR_4->mdev, VAR_3)) {
  FUNC_2(VAR_4, "desc_sz %d, max_sq_desc_sz %d\n",
        VAR_9, FUNC_0(VAR_4->mdev, VAR_3));
  return -VAR_0;
 }

 if (VAR_6->sq_wqe_count && ((1 << FUNC_1(VAR_6->sq_wqe_count)) != VAR_6->sq_wqe_count)) {
  FUNC_2(VAR_4, "sq_wqe_count %d, sq_wqe_count %d\n",
        VAR_6->sq_wqe_count, VAR_6->sq_wqe_count);
  return -VAR_0;
 }

 VAR_5->sq.wqe_cnt = VAR_6->sq_wqe_count;

 if (VAR_5->sq.wqe_cnt > (1 << FUNC_0(VAR_4->mdev, VAR_2))) {
  FUNC_2(VAR_4, "wqe_cnt %d, max_wqes %d\n",
        VAR_5->sq.wqe_cnt,
        1 << FUNC_0(VAR_4->mdev, VAR_2));
  return -VAR_0;
 }

 if (VAR_8->qp_type == VAR_1) {
  VAR_7->ubuffer.buf_size = VAR_5->rq.wqe_cnt << VAR_5->rq.wqe_shift;
  VAR_5->raw_packet_qp.sq.ubuffer.buf_size = VAR_5->sq.wqe_cnt << 6;
 } else {
  VAR_7->ubuffer.buf_size = (VAR_5->rq.wqe_cnt << VAR_5->rq.wqe_shift) +
      (VAR_5->sq.wqe_cnt << 6);
 }

 return 0;
}
