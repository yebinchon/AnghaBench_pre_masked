
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {int num_ports; TYPE_1__* port; int mdev; } ;
struct TYPE_2__ {int q_cnt_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,int) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*,int,int) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_ports; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1->mdev,
       VAR_0,
       &VAR_1->port[VAR_2].q_cnt_id);
  if (VAR_3) {
   FUNC_1(VAR_1,
         "couldn't allocate queue counter for port %d, err %d\n",
         VAR_2 + 1, VAR_3);
   goto dealloc_counters;
  }
 }

 return 0;

dealloc_counters:
 while (--VAR_2 >= 0)
  FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
