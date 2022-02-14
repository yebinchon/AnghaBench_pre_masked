
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {scalar_t__ status; } ;
struct mlx5_ib_wc {int list; struct ib_wc wc; } ;
struct mlx5_ib_cq {scalar_t__ notify_flags; int lock; int notify_work; int wc_list; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mlx5_ib_wc* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mlx5_ib_cq* FUNC_5 (struct ib_cq*) ;

int FUNC_6(struct ib_cq *VAR_4, struct ib_wc *VAR_5)
{
 struct mlx5_ib_wc *VAR_6;
 struct mlx5_ib_cq *VAR_7 = FUNC_5(VAR_4);
 unsigned long VAR_8;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->wc = *VAR_5;
 FUNC_3(&VAR_7->lock, VAR_8);
 FUNC_1(&VAR_6->list, &VAR_7->wc_list);
 if (VAR_7->notify_flags == VAR_2 ||
     VAR_5->status != VAR_3) {
  VAR_7->notify_flags = 0;
  FUNC_2(&VAR_7->notify_work);
 }
 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
