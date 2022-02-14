
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_dev {int dummy; } ;
struct mthca_cq {int lock; TYPE_1__* resize_buf; } ;
struct TYPE_3__ {int cqe; int state; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mthca_dev*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mthca_dev *VAR_5, struct mthca_cq *VAR_6,
      int VAR_7)
{
 int VAR_8;

 FUNC_3(&VAR_6->lock);
 if (VAR_6->resize_buf) {
  VAR_8 = -VAR_2;
  goto unlock;
 }

 VAR_6->resize_buf = FUNC_1(sizeof *VAR_6->resize_buf, VAR_4);
 if (!VAR_6->resize_buf) {
  VAR_8 = -VAR_3;
  goto unlock;
 }

 VAR_6->resize_buf->state = VAR_0;

 VAR_8 = 0;

unlock:
 FUNC_4(&VAR_6->lock);

 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_5, &VAR_6->resize_buf->buf, VAR_7);
 if (VAR_8) {
  FUNC_3(&VAR_6->lock);
  FUNC_0(VAR_6->resize_buf);
  VAR_6->resize_buf = ((void*)0);
  FUNC_4(&VAR_6->lock);
  return VAR_8;
 }

 VAR_6->resize_buf->cqe = VAR_7 - 1;

 FUNC_3(&VAR_6->lock);
 VAR_6->resize_buf->state = VAR_1;
 FUNC_4(&VAR_6->lock);

 return 0;
}
