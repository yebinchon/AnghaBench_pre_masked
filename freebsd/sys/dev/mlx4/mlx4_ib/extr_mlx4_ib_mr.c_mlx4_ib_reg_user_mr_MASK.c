
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_14__ {int key; int mtt; } ;
struct ib_mr {int lkey; int rkey; } ;
struct mlx4_ib_mr {TYPE_6__* umem; TYPE_3__ mmr; struct ib_mr ibmr; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; TYPE_1__* uobject; } ;
struct TYPE_15__ {int page_size; } ;
struct TYPE_13__ {int pdn; } ;
struct TYPE_12__ {int context; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int) ;
 TYPE_6__* FUNC_4 (int ,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlx4_ib_mr*) ;
 struct mlx4_ib_mr* FUNC_9 (int,int ) ;
 int FUNC_10 (struct mlx4_ib_dev*,int *,TYPE_6__*) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int,int,TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (int ,TYPE_3__*) ;
 struct mlx4_ib_dev* FUNC_14 (int ) ;
 TYPE_2__* FUNC_15 (struct ib_pd*) ;

struct ib_mr *FUNC_16(struct ib_pd *VAR_3, u64 VAR_4, u64 VAR_5,
      u64 VAR_6, int VAR_7,
      struct ib_udata *VAR_8)
{
 struct mlx4_ib_dev *VAR_9 = FUNC_14(VAR_3->device);
 struct mlx4_ib_mr *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);



 VAR_10->umem = FUNC_4(VAR_3->uobject->context, VAR_4, VAR_5,
          VAR_7 | VAR_2, 0);
 if (FUNC_1(VAR_10->umem)) {
  VAR_12 = FUNC_2(VAR_10->umem);
  goto err_free;
 }

 VAR_13 = FUNC_5(VAR_10->umem);
 VAR_11 = FUNC_7(VAR_10->umem->page_size);

 VAR_12 = FUNC_11(VAR_9->dev, FUNC_15(VAR_3)->pdn, VAR_6, VAR_5,
       FUNC_3(VAR_7), VAR_13, VAR_11, &VAR_10->mmr);
 if (VAR_12)
  goto err_umem;

 VAR_12 = FUNC_10(VAR_9, &VAR_10->mmr.mtt, VAR_10->umem);
 if (VAR_12)
  goto err_mr;

 VAR_12 = FUNC_12(VAR_9->dev, &VAR_10->mmr);
 if (VAR_12)
  goto err_mr;

 VAR_10->ibmr.rkey = VAR_10->ibmr.lkey = VAR_10->mmr.key;

 return &VAR_10->ibmr;

err_mr:
 (void) FUNC_13(FUNC_14(VAR_3->device)->dev, &VAR_10->mmr);

err_umem:
 FUNC_6(VAR_10->umem);

err_free:
 FUNC_8(VAR_10);

 return FUNC_0(VAR_12);
}
