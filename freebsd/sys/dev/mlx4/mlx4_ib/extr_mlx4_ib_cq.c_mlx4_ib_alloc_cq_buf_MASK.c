
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_12__ {int page_shift; int npages; } ;
struct mlx4_ib_cq_buf {int entry_size; TYPE_5__ buf; int mtt; } ;
struct TYPE_10__ {int cqe_size; } ;
struct TYPE_11__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mlx4_ib_dev *VAR_2, struct mlx4_ib_cq_buf *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->dev, VAR_4 * VAR_2->dev->caps.cqe_size,
        VAR_1 * 2, &VAR_3->buf, VAR_0);

 if (VAR_5)
  goto out;

 VAR_3->entry_size = VAR_2->dev->caps.cqe_size;
 VAR_5 = FUNC_4(VAR_2->dev, VAR_3->buf.npages, VAR_3->buf.page_shift,
        &VAR_3->mtt);
 if (VAR_5)
  goto err_buf;

 VAR_5 = FUNC_2(VAR_2->dev, &VAR_3->mtt, &VAR_3->buf, VAR_0);
 if (VAR_5)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_3(VAR_2->dev, &VAR_3->mtt);

err_buf:
 FUNC_1(VAR_2->dev, VAR_4 * VAR_3->entry_size, &VAR_3->buf);

out:
 return VAR_5;
}
