
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ buf; } ;
struct ibv_srq {int dummy; } ;
struct TYPE_10__ {struct ibv_srq srq; int srq_num; } ;
struct mlx4_srq {int max_gs; int ext_srq; TYPE_3__ buf; struct mlx4_srq* wrid; scalar_t__* db; TYPE_6__ verbs_srq; scalar_t__ counter; int max; int lock; } ;
struct mlx4_create_xsrq {uintptr_t buf_addr; uintptr_t db_addr; int ibv_cmd; } ;
struct mlx4_create_srq_resp {int ibv_resp; } ;
struct TYPE_9__ {int max_wr; int max_sge; } ;
struct ibv_srq_init_attr_ex {TYPE_4__ attr; int pd; } ;
struct ibv_context {int dummy; } ;
struct TYPE_7__ {int xsrq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct mlx4_srq* FUNC_1 (int,int) ;
 int FUNC_2 (struct mlx4_srq*) ;
 int FUNC_3 (struct ibv_context*,TYPE_6__*,int,struct ibv_srq_init_attr_ex*,int *,int,int *,int) ;
 int FUNC_4 (struct ibv_srq*) ;
 scalar_t__* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,struct mlx4_srq*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_9 (int *,int ,struct mlx4_srq*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 TYPE_1__* FUNC_11 (struct ibv_context*) ;

struct ibv_srq *FUNC_12(struct ibv_context *VAR_2,
        struct ibv_srq_init_attr_ex *VAR_3)
{
 struct mlx4_create_xsrq VAR_4;
 struct mlx4_create_srq_resp VAR_5;
 struct mlx4_srq *VAR_6;
 int VAR_7;


 if (VAR_3->attr.max_wr > 1 << 16 || VAR_3->attr.max_sge > 64)
  return ((void*)0);

 VAR_6 = FUNC_1(1, sizeof *VAR_6);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_10(&VAR_6->lock, VAR_1))
  goto err;

 VAR_6->max = FUNC_0(VAR_3->attr.max_wr + 1);
 VAR_6->max_gs = VAR_3->attr.max_sge;
 VAR_6->counter = 0;
 VAR_6->ext_srq = 1;

 if (FUNC_6(VAR_3->pd, &VAR_3->attr, VAR_6))
  goto err;

 VAR_6->db = FUNC_5(FUNC_11(VAR_2), VAR_0);
 if (!VAR_6->db)
  goto err_free;

 *VAR_6->db = 0;

 VAR_4.buf_addr = (uintptr_t) VAR_6->buf.buf;
 VAR_4.db_addr = (uintptr_t) VAR_6->db;

 VAR_7 = FUNC_3(VAR_2, &VAR_6->verbs_srq,
        sizeof(VAR_6->verbs_srq),
        VAR_3,
        &VAR_4.ibv_cmd, sizeof VAR_4,
        &VAR_5.ibv_resp, sizeof VAR_5);
 if (VAR_7)
  goto err_db;

 VAR_7 = FUNC_9(&FUNC_11(VAR_2)->xsrq_table,
         VAR_6->verbs_srq.srq_num, VAR_6);
 if (VAR_7)
  goto err_destroy;

 return &VAR_6->verbs_srq.srq;

err_destroy:
 FUNC_4(&VAR_6->verbs_srq.srq);
err_db:
 FUNC_8(FUNC_11(VAR_2), VAR_0, VAR_6->db);
err_free:
 FUNC_2(VAR_6->wrid);
 FUNC_7(&VAR_6->buf);
err:
 FUNC_2(VAR_6);
 return ((void*)0);
}
