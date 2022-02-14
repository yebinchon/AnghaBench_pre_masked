
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mthca_mr {int mtt; } ;
struct mthca_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mthca_dev*,int) ;
 int FUNC_3 (struct mthca_dev*,int ) ;
 int FUNC_4 (struct mthca_dev*,int ,int,int ,int ,int ,struct mthca_mr*) ;
 int FUNC_5 (struct mthca_dev*,int ,int ,int *,int) ;

int FUNC_6(struct mthca_dev *VAR_0, u32 VAR_1,
   u64 *VAR_2, int VAR_3,
   int VAR_4, u64 VAR_5, u64 VAR_6,
   u32 VAR_7, struct mthca_mr *VAR_8)
{
 int VAR_9;

 VAR_8->mtt = FUNC_2(VAR_0, VAR_4);
 if (FUNC_0(VAR_8->mtt))
  return FUNC_1(VAR_8->mtt);

 VAR_9 = FUNC_5(VAR_0, VAR_8->mtt, 0, VAR_2, VAR_4);
 if (VAR_9) {
  FUNC_3(VAR_0, VAR_8->mtt);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_0, VAR_1, VAR_3, VAR_5,
        VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  FUNC_3(VAR_0, VAR_8->mtt);

 return VAR_9;
}
