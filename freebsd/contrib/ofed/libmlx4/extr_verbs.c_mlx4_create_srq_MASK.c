
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buf; } ;
struct ibv_srq {int dummy; } ;
struct TYPE_4__ {struct ibv_srq srq; } ;
struct mlx4_srq {int max_gs; TYPE_2__ buf; struct mlx4_srq* wrid; scalar_t__* db; TYPE_1__ verbs_srq; scalar_t__ ext_srq; scalar_t__ counter; int max; int lock; } ;
struct mlx4_create_srq_resp {int ibv_resp; } ;
struct mlx4_create_srq {uintptr_t buf_addr; uintptr_t db_addr; int ibv_cmd; } ;
struct TYPE_6__ {int max_wr; int max_sge; } ;
struct ibv_srq_init_attr {TYPE_3__ attr; } ;
struct ibv_pd {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_srq*) ;
 int FUNC_2 (struct ibv_pd*,struct ibv_srq*,struct ibv_srq_init_attr*,int *,int,int *,int) ;
 struct mlx4_srq* FUNC_3 (int) ;
 scalar_t__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct ibv_pd*,TYPE_3__*,struct mlx4_srq*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

struct ibv_srq *FUNC_10(struct ibv_pd *VAR_2,
    struct ibv_srq_init_attr *VAR_3)
{
 struct mlx4_create_srq VAR_4;
 struct mlx4_create_srq_resp VAR_5;
 struct mlx4_srq *VAR_6;
 int VAR_7;


 if (VAR_3->attr.max_wr > 1 << 16 || VAR_3->attr.max_sge > 64)
  return ((void*)0);

 VAR_6 = FUNC_3(sizeof *VAR_6);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_8(&VAR_6->lock, VAR_1))
  goto err;

 VAR_6->max = FUNC_0(VAR_3->attr.max_wr + 1);
 VAR_6->max_gs = VAR_3->attr.max_sge;
 VAR_6->counter = 0;
 VAR_6->ext_srq = 0;

 if (FUNC_5(VAR_2, &VAR_3->attr, VAR_6))
  goto err;

 VAR_6->db = FUNC_4(FUNC_9(VAR_2->context), VAR_0);
 if (!VAR_6->db)
  goto err_free;

 *VAR_6->db = 0;

 VAR_4.buf_addr = (uintptr_t) VAR_6->buf.buf;
 VAR_4.db_addr = (uintptr_t) VAR_6->db;

 VAR_7 = FUNC_2(VAR_2, &VAR_6->verbs_srq.srq, VAR_3,
     &VAR_4.ibv_cmd, sizeof VAR_4,
     &VAR_5.ibv_resp, sizeof VAR_5);
 if (VAR_7)
  goto err_db;

 return &VAR_6->verbs_srq.srq;

err_db:
 FUNC_7(FUNC_9(VAR_2->context), VAR_0, VAR_6->db);

err_free:
 FUNC_1(VAR_6->wrid);
 FUNC_6(&VAR_6->buf);

err:
 FUNC_1(VAR_6);

 return ((void*)0);
}
