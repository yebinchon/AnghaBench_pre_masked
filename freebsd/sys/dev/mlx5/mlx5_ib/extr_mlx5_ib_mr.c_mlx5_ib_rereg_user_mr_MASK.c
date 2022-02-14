
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_7__ {void* size; void* iova; int pd; } ;
struct mlx5_ib_mr {int access_flags; void* address; void* length; TYPE_3__ mmkey; int npages; scalar_t__ umred; struct mlx5_ib_mr* umem; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {struct ib_pd* pd; int device; } ;
struct TYPE_8__ {int pdn; } ;
struct TYPE_5__ {int reg_pages; } ;
struct TYPE_6__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_ib_mr*) ;
 int FUNC_1 (struct mlx5_ib_mr*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_4 (struct mlx5_ib_mr*) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,long long,long long,long long,int) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*) ;
 struct mlx5_ib_mr* FUNC_7 (struct ib_pd*,void*,void*,int,int*,int*,int*,int*) ;
 struct mlx5_ib_mr* FUNC_8 (struct ib_mr*,struct ib_pd*,void*,void*,struct mlx5_ib_mr*,int,int,int) ;
 int FUNC_9 (struct ib_pd*,struct mlx5_ib_mr*,void*,void*,int,int,int,int,int) ;
 int FUNC_10 (struct mlx5_ib_dev*,struct mlx5_ib_mr*,int,void*,int) ;
 struct mlx5_ib_dev* FUNC_11 (int ) ;
 struct mlx5_ib_mr* FUNC_12 (struct ib_mr*) ;
 TYPE_4__* FUNC_13 (struct ib_pd*) ;
 int FUNC_14 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_15 (struct mlx5_ib_mr*) ;
 int FUNC_16 (struct mlx5_ib_mr*,void*,void*) ;

int FUNC_17(struct ib_mr *VAR_3, int VAR_4, u64 VAR_5,
     u64 VAR_6, u64 VAR_7, int VAR_8,
     struct ib_pd *VAR_9, struct ib_udata *VAR_10)
{
 struct mlx5_ib_dev *VAR_11 = FUNC_11(VAR_3->device);
 struct mlx5_ib_mr *VAR_12 = FUNC_12(VAR_3);
 struct ib_pd *VAR_13 = (VAR_4 & VAR_1) ? VAR_9 : VAR_3->pd;
 int VAR_14 = VAR_4 & VAR_0 ?
       VAR_8 :
       VAR_12->access_flags;
 u64 VAR_15 = (VAR_4 & VAR_2) ? VAR_7 : VAR_12->umem->address;
 u64 VAR_16 = (VAR_4 & VAR_2) ? VAR_6 : VAR_12->umem->length;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21;

 FUNC_5(VAR_11, "start 0x%llx, virt_addr 0x%llx, length 0x%llx, access_flags 0x%x\n",
      (long long)VAR_5, (long long)VAR_7, (long long)VAR_6, VAR_14);

 if (VAR_4 != VAR_1) {




  VAR_4 |= VAR_2;
  FUNC_4(VAR_12->umem);
  VAR_12->umem = FUNC_7(VAR_13, VAR_15, VAR_16, VAR_14, &VAR_18,
           &VAR_17, &VAR_19, &VAR_20);
  if (FUNC_0(VAR_12->umem)) {
   VAR_21 = FUNC_1(VAR_12->umem);
   VAR_12->umem = ((void*)0);
   return VAR_21;
  }
 }

 if (VAR_4 & VAR_2 && !FUNC_16(VAR_12, VAR_15, VAR_16)) {



  if (VAR_12->umred) {
   VAR_21 = FUNC_14(VAR_11, VAR_12);
   if (VAR_21)
    FUNC_6(VAR_11, "Failed to unregister MR\n");
  } else {
   VAR_21 = FUNC_3(VAR_11, VAR_12);
   if (VAR_21)
    FUNC_6(VAR_11, "Failed to destroy MKey\n");
  }
  if (VAR_21)
   return VAR_21;

  VAR_12 = FUNC_8(VAR_3, VAR_13, VAR_15, VAR_16, VAR_12->umem, VAR_19,
    VAR_17, VAR_14);

  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);

  VAR_12->umred = 0;
 } else {



  VAR_21 = FUNC_9(VAR_13, VAR_12, VAR_15, VAR_16, VAR_18, VAR_17,
    VAR_20, VAR_14, VAR_4);
  if (VAR_21) {
   FUNC_6(VAR_11, "Failed to rereg UMR\n");
   return VAR_21;
  }
 }

 if (VAR_4 & VAR_1) {
  VAR_3->pd = VAR_13;
  VAR_12->mmkey.pd = FUNC_13(VAR_13)->pdn;
 }

 if (VAR_4 & VAR_0)
  VAR_12->access_flags = VAR_14;

 if (VAR_4 & VAR_2) {
  FUNC_2(VAR_12->npages, &VAR_11->mdev->priv.reg_pages);
  FUNC_10(VAR_11, VAR_12, VAR_18, VAR_16, VAR_14);
  VAR_12->mmkey.iova = VAR_15;
  VAR_12->mmkey.size = VAR_16;
 }




 return 0;
}
