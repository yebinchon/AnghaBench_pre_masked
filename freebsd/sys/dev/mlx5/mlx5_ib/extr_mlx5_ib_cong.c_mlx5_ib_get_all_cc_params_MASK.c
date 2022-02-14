
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int * arg; } ;
struct mlx5_ib_dev {TYPE_1__ congestion; int mdev; } ;
typedef enum mlx5_ib_cong_node_type { ____Placeholder_mlx5_ib_cong_node_type } mlx5_ib_cong_node_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,void*,int) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (size_t) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(struct mlx5_ib_dev *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4);
 enum mlx5_ib_cong_node_type VAR_7 = 0;
 void *VAR_8;
 void *VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_3(VAR_6, VAR_1);
 if (!VAR_8)
  return -VAR_0;


 for (VAR_10 = 0; VAR_10 != VAR_2; VAR_10++) {
  if (VAR_7 != FUNC_6(VAR_10)) {
   VAR_7 = FUNC_6(VAR_10);

   VAR_11 = FUNC_4(VAR_5->mdev, VAR_7, VAR_8, VAR_6);
   if (VAR_11)
    break;
  }
  VAR_9 = FUNC_0(VAR_4, VAR_8, VAR_3);
  VAR_5->congestion.arg[VAR_10] = FUNC_5(VAR_9, VAR_10);
 }
 FUNC_2(VAR_8);
 return VAR_11;
}
