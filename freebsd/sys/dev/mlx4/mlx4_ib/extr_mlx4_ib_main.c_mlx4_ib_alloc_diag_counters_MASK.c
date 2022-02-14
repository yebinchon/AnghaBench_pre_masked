
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_diag_counters {int offset; int name; int num_counters; } ;
struct TYPE_5__ {int alloc_hw_stats; int get_hw_stats; } ;
struct mlx4_ib_dev {TYPE_2__ ib_dev; TYPE_3__* dev; struct mlx4_ib_diag_counters* diag_counters; } ;
struct TYPE_4__ {int flags2; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_ib_dev*,int *,int *,int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct mlx4_ib_dev*,int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_4)
{
 struct mlx4_ib_diag_counters *VAR_5 = VAR_4->diag_counters;
 int VAR_6;
 int VAR_7;
 bool VAR_8 = !!(VAR_4->dev->caps.flags2 &
  VAR_0);

 if (FUNC_3(VAR_4->dev))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  if (VAR_6 && !VAR_8)
   continue;

  VAR_7 = FUNC_0(VAR_4, &VAR_5[VAR_6].name,
          &VAR_5[VAR_6].offset,
          &VAR_5[VAR_6].num_counters, VAR_6);
  if (VAR_7)
   goto err_alloc;

  FUNC_2(VAR_4, VAR_5[VAR_6].name,
        VAR_5[VAR_6].offset, VAR_6);
 }

 VAR_4->ib_dev.get_hw_stats = VAR_3;
 VAR_4->ib_dev.alloc_hw_stats = VAR_2;

 return 0;

err_alloc:
 if (VAR_6) {
  FUNC_1(VAR_5[VAR_6 - 1].name);
  FUNC_1(VAR_5[VAR_6 - 1].offset);
 }

 return VAR_7;
}
