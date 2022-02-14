
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


struct TYPE_9__ {TYPE_6__* slave_list; TYPE_2__* res_alloc; } ;
struct TYPE_10__ {TYPE_3__ res_tracker; } ;
struct TYPE_11__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct TYPE_7__ {int function; } ;
struct mlx4_dev {int num_slaves; TYPE_1__ caps; } ;
typedef enum mlx4_res_tracker_free_type { ____Placeholder_mlx4_res_tracker_free_type } mlx4_res_tracker_free_type ;
struct TYPE_12__ {int mutex; } ;
struct TYPE_8__ {TYPE_6__* quota; TYPE_6__* guaranteed; TYPE_6__* allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx4_dev*,int) ;

void FUNC_7(struct mlx4_dev *VAR_4,
    enum mlx4_res_tracker_free_type VAR_5)
{
 struct mlx4_priv *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 if (VAR_6->mfunc.master.res_tracker.slave_list) {
  if (VAR_5 != VAR_3) {
   for (VAR_7 = 0; VAR_7 < VAR_4->num_slaves; VAR_7++) {
    if (VAR_5 == VAR_1 ||
        VAR_4->caps.function != VAR_7)
     FUNC_1(VAR_4, VAR_7);
   }

   VAR_7 = VAR_4->caps.function;
   FUNC_3(VAR_4, VAR_7);
   FUNC_4(&VAR_6->mfunc.master.res_tracker.slave_list[VAR_7].mutex);
   FUNC_6(VAR_4, VAR_7);
   FUNC_5(&VAR_6->mfunc.master.res_tracker.slave_list[VAR_7].mutex);
  }

  if (VAR_5 != VAR_2) {
   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    FUNC_0(VAR_6->mfunc.master.res_tracker.res_alloc[VAR_7].allocated);
    VAR_6->mfunc.master.res_tracker.res_alloc[VAR_7].allocated = ((void*)0);
    FUNC_0(VAR_6->mfunc.master.res_tracker.res_alloc[VAR_7].guaranteed);
    VAR_6->mfunc.master.res_tracker.res_alloc[VAR_7].guaranteed = ((void*)0);
    FUNC_0(VAR_6->mfunc.master.res_tracker.res_alloc[VAR_7].quota);
    VAR_6->mfunc.master.res_tracker.res_alloc[VAR_7].quota = ((void*)0);
   }
   FUNC_0(VAR_6->mfunc.master.res_tracker.slave_list);
   VAR_6->mfunc.master.res_tracker.slave_list = ((void*)0);
  }
 }
}
