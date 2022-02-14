
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* u64 ;
struct mlx4_mpt_entry {int dummy; } ;
struct TYPE_15__ {int access; int mtt; void* size; void* iova; } ;
struct mlx4_ib_mr {TYPE_3__ mmr; TYPE_7__* umem; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {TYPE_1__* uobject; int device; } ;
struct TYPE_16__ {int page_size; } ;
struct TYPE_14__ {int pdn; } ;
struct TYPE_13__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int) ;
 TYPE_7__* FUNC_3 (int ,void*,void*,int,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx4_ib_dev*,int *,TYPE_7__*) ;
 int FUNC_8 (int ,struct mlx4_mpt_entry*,int ) ;
 int FUNC_9 (int ,struct mlx4_mpt_entry*,int ) ;
 int FUNC_10 (int ,TYPE_3__*,struct mlx4_mpt_entry***) ;
 int FUNC_11 (int ,struct mlx4_mpt_entry**) ;
 int FUNC_12 (int ,TYPE_3__*,struct mlx4_mpt_entry**) ;
 int FUNC_13 (int ,TYPE_3__*) ;
 int FUNC_14 (int ,TYPE_3__*,void*,void*,int,int,struct mlx4_mpt_entry*) ;
 struct mlx4_ib_dev* FUNC_15 (int ) ;
 struct mlx4_ib_mr* FUNC_16 (struct ib_mr*) ;
 TYPE_2__* FUNC_17 (struct ib_pd*) ;

int FUNC_18(struct ib_mr *VAR_4, int VAR_5,
     u64 VAR_6, u64 VAR_7, u64 VAR_8,
     int VAR_9, struct ib_pd *VAR_10,
     struct ib_udata *VAR_11)
{
 struct mlx4_ib_dev *VAR_12 = FUNC_15(VAR_4->device);
 struct mlx4_ib_mr *VAR_13 = FUNC_16(VAR_4);
 struct mlx4_mpt_entry *VAR_14;
 struct mlx4_mpt_entry **VAR_15 = &VAR_14;
 int VAR_16;





 VAR_16 = FUNC_10(VAR_12->dev, &VAR_13->mmr, &VAR_15);

 if (VAR_16)
  return VAR_16;

 if (VAR_5 & VAR_2) {
  VAR_16 = FUNC_9(VAR_12->dev, *VAR_15,
        FUNC_17(VAR_10)->pdn);

  if (VAR_16)
   goto release_mpt_entry;
 }

 if (VAR_5 & VAR_1) {
  VAR_16 = FUNC_8(VAR_12->dev, *VAR_15,
            FUNC_2(VAR_9));

  if (VAR_16)
   goto release_mpt_entry;
 }

 if (VAR_5 & VAR_3) {
  int VAR_17;
  int VAR_18;

  FUNC_13(VAR_12->dev, &VAR_13->mmr);
  FUNC_5(VAR_13->umem);
  VAR_13->umem = FUNC_3(VAR_4->uobject->context, VAR_6, VAR_7,
     VAR_9 |
     VAR_0,
     0);
  if (FUNC_0(VAR_13->umem)) {
   VAR_16 = FUNC_1(VAR_13->umem);

   VAR_13->umem = ((void*)0);
   goto release_mpt_entry;
  }
  VAR_18 = FUNC_4(VAR_13->umem);
  VAR_17 = FUNC_6(VAR_13->umem->page_size);

  VAR_16 = FUNC_14(VAR_12->dev, &VAR_13->mmr,
           VAR_8, VAR_7, VAR_18, VAR_17,
           *VAR_15);
  if (VAR_16) {
   FUNC_5(VAR_13->umem);
   goto release_mpt_entry;
  }
  VAR_13->mmr.iova = VAR_8;
  VAR_13->mmr.size = VAR_7;

  VAR_16 = FUNC_7(VAR_12, &VAR_13->mmr.mtt, VAR_13->umem);
  if (VAR_16) {
   FUNC_13(VAR_12->dev, &VAR_13->mmr);
   FUNC_5(VAR_13->umem);
   goto release_mpt_entry;
  }
 }




 VAR_16 = FUNC_12(VAR_12->dev, &VAR_13->mmr, VAR_15);
 if (!VAR_16 && VAR_5 & VAR_1)
  VAR_13->mmr.access = VAR_9;

release_mpt_entry:
 FUNC_11(VAR_12->dev, VAR_15);

 return VAR_16;
}
