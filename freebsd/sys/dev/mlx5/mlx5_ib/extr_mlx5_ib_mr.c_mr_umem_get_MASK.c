
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5_ib_dev {int dummy; } ;
typedef void ib_umem ;
struct ib_pd {TYPE_1__* uobject; int device; } ;
struct TYPE_2__ {int context; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ,int ,int,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int*,int*,int*,int*) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int,int,int,int) ;
 int FUNC_7 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_8 (struct mlx5_ib_dev*,char*) ;
 struct mlx5_ib_dev* FUNC_9 (int ) ;

__attribute__((used)) static struct ib_umem *FUNC_10(struct ib_pd *VAR_1, u64 VAR_2, u64 VAR_3,
       int VAR_4, int *VAR_5,
       int *VAR_6, int *VAR_7, int *VAR_8)
{
 struct mlx5_ib_dev *VAR_9 = FUNC_9(VAR_1->device);
 struct ib_umem *VAR_10 = FUNC_3(VAR_1->uobject->context, VAR_2, VAR_3,
        VAR_4, 0);
 if (FUNC_1(VAR_10)) {
  FUNC_7(VAR_9, "umem get failed (%ld)\n", FUNC_2(VAR_10));
  return (void *)VAR_10;
 }

 FUNC_5(VAR_10, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8);
 if (!*VAR_5) {
  FUNC_8(VAR_9, "avoid zero region\n");
  FUNC_4(VAR_10);
  return FUNC_0(-VAR_0);
 }

 FUNC_6(VAR_9, "npages %d, ncont %d, order %d, page_shift %d\n",
      *VAR_5, *VAR_7, *VAR_8, *VAR_6);

 return VAR_10;
}
