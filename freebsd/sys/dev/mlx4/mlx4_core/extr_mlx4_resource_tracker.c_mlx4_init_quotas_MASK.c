
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


struct TYPE_10__ {TYPE_3__* res_alloc; } ;
struct TYPE_11__ {TYPE_4__ res_tracker; } ;
struct TYPE_12__ {TYPE_5__ master; } ;
struct mlx4_priv {TYPE_6__ mfunc; } ;
struct TYPE_8__ {scalar_t__ mpt; scalar_t__ mtt; scalar_t__ srq; scalar_t__ cq; scalar_t__ qp; } ;
struct TYPE_7__ {scalar_t__ reserved_mrws; scalar_t__ num_mpts; scalar_t__ reserved_mtts; scalar_t__ num_mtts; scalar_t__ reserved_srqs; scalar_t__ num_srqs; scalar_t__ reserved_cqs; scalar_t__ num_cqs; scalar_t__ reserved_qps; scalar_t__ num_qps; } ;
struct mlx4_dev {TYPE_2__ quotas; TYPE_1__ caps; } ;
struct TYPE_9__ {scalar_t__* quota; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct mlx4_dev*) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;

void FUNC_5(struct mlx4_dev *VAR_5)
{
 struct mlx4_priv *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;


 if (FUNC_1(VAR_5))
  return;

 if (!FUNC_0(VAR_5)) {
  VAR_5->quotas.qp = VAR_5->caps.num_qps - VAR_5->caps.reserved_qps -
   FUNC_3(VAR_5);
  VAR_5->quotas.cq = VAR_5->caps.num_cqs - VAR_5->caps.reserved_cqs;
  VAR_5->quotas.srq = VAR_5->caps.num_srqs - VAR_5->caps.reserved_srqs;
  VAR_5->quotas.mtt = VAR_5->caps.num_mtts - VAR_5->caps.reserved_mtts;
  VAR_5->quotas.mpt = VAR_5->caps.num_mpts - VAR_5->caps.reserved_mrws;
  return;
 }

 VAR_7 = FUNC_2(VAR_5);
 VAR_5->quotas.qp =
  VAR_6->mfunc.master.res_tracker.res_alloc[VAR_3].quota[VAR_7];
 VAR_5->quotas.cq =
  VAR_6->mfunc.master.res_tracker.res_alloc[VAR_0].quota[VAR_7];
 VAR_5->quotas.srq =
  VAR_6->mfunc.master.res_tracker.res_alloc[VAR_4].quota[VAR_7];
 VAR_5->quotas.mtt =
  VAR_6->mfunc.master.res_tracker.res_alloc[VAR_2].quota[VAR_7];
 VAR_5->quotas.mpt =
  VAR_6->mfunc.master.res_tracker.res_alloc[VAR_1].quota[VAR_7];
}
