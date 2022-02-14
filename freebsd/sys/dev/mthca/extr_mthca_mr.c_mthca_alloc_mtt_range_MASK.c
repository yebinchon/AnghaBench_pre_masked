
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mtt_table; } ;
struct mthca_dev {TYPE_1__ mr_table; } ;
struct mthca_buddy {int dummy; } ;


 int FUNC_0 (struct mthca_buddy*,int) ;
 int FUNC_1 (struct mthca_buddy*,int,int) ;
 scalar_t__ FUNC_2 (struct mthca_dev*) ;
 scalar_t__ FUNC_3 (struct mthca_dev*,int ,int,int) ;

__attribute__((used)) static u32 FUNC_4(struct mthca_dev *VAR_0, int VAR_1,
     struct mthca_buddy *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3 == -1)
  return -1;

 if (FUNC_2(VAR_0))
  if (FUNC_3(VAR_0, VAR_0->mr_table.mtt_table, VAR_3,
       VAR_3 + (1 << VAR_1) - 1)) {
   FUNC_1(VAR_2, VAR_3, VAR_1);
   VAR_3 = -1;
  }

 return VAR_3;
}
