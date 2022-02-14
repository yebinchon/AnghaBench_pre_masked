
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mthca_mtt {int dummy; } ;
struct TYPE_2__ {int mtt_buddy; int * fmr_mtt_buddy; } ;
struct mthca_dev {int mthca_flags; TYPE_1__ mr_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,struct mthca_mtt*,int,int *,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mthca_dev*,struct mthca_mtt*,int,int *,int) ;
 scalar_t__ FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*,struct mthca_mtt*,int,int *,int) ;
 int FUNC_5 (struct mthca_dev*) ;

int FUNC_6(struct mthca_dev *VAR_1, struct mthca_mtt *VAR_2,
      int VAR_3, u64 *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_5(VAR_1);
 int VAR_7;

 if (VAR_1->mr_table.fmr_mtt_buddy != &VAR_1->mr_table.mtt_buddy ||
     !(VAR_1->mthca_flags & VAR_0))
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 while (VAR_5 > 0) {
  VAR_7 = FUNC_1(VAR_6, VAR_5);
  if (FUNC_3(VAR_1))
   FUNC_2(VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_7);
  else
   FUNC_4(VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_7);

  VAR_5 -= VAR_7;
  VAR_3 += VAR_7;
  VAR_4 += VAR_7;
 }

 return 0;
}
