
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlx5_pages_req {int work; int npages; int func_id; struct mlx5_core_dev* dev; } ;
struct TYPE_2__ {int pg_wq; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct mlx5_pages_req* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct mlx5_core_dev *VAR_2, u16 VAR_3,
     s32 VAR_4)
{
 struct mlx5_pages_req *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_2(VAR_2, "failed to allocate pages request\n");
  return;
 }

 VAR_5->dev = VAR_2;
 VAR_5->func_id = VAR_3;
 VAR_5->npages = VAR_4;
 FUNC_0(&VAR_5->work, VAR_1);
 if (!FUNC_3(VAR_2->priv.pg_wq, &VAR_5->work))
  FUNC_2(VAR_2, "failed to queue pages handler work\n");
}
