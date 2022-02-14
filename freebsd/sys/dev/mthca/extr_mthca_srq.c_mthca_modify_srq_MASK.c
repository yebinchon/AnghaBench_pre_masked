
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mthca_srq {scalar_t__ max; int mutex; int srqn; } ;
struct mthca_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_srq_attr {scalar_t__ srq_limit; } ;
struct ib_srq {int device; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mthca_dev*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mthca_dev* FUNC_4 (int ) ;
 struct mthca_srq* FUNC_5 (struct ib_srq*) ;

int FUNC_6(struct ib_srq *VAR_3, struct ib_srq_attr *VAR_4,
       enum ib_srq_attr_mask VAR_5, struct ib_udata *VAR_6)
{
 struct mthca_dev *VAR_7 = FUNC_4(VAR_3->device);
 struct mthca_srq *VAR_8 = FUNC_5(VAR_3);
 int VAR_9 = 0;


 if (VAR_5 & VAR_2)
  return -VAR_0;

 if (VAR_5 & VAR_1) {
  u32 VAR_10 = FUNC_1(VAR_7) ? VAR_8->max - 1 : VAR_8->max;
  if (VAR_4->srq_limit > VAR_10)
   return -VAR_0;

  FUNC_2(&VAR_8->mutex);
  VAR_9 = FUNC_0(VAR_7, VAR_8->srqn, VAR_4->srq_limit);
  FUNC_3(&VAR_8->mutex);
 }

 return VAR_9;
}
