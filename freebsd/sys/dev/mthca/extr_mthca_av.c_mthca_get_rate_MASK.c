
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int stat_rate_support; } ;
struct mthca_dev {scalar_t__* rate; TYPE_1__ limits; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mthca_dev*) ;

u8 FUNC_4(struct mthca_dev *VAR_0, int VAR_1, u8 VAR_2)
{
 u8 VAR_3;

 if (!VAR_1 || FUNC_1(VAR_1) >= VAR_0->rate[VAR_2 - 1])
  return 0;

 if (FUNC_3(VAR_0))
  VAR_3 = FUNC_0(FUNC_1(VAR_1),
       VAR_0->rate[VAR_2 - 1]);
 else
  VAR_3 = FUNC_2(VAR_1);

 if (!(VAR_0->limits.stat_rate_support & (1 << VAR_3)))
  VAR_3 = 1;

 return VAR_3;
}
