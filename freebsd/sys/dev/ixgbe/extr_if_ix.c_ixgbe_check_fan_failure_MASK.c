
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dev; int hw; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_1, u32 VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_3) ? FUNC_0(&VAR_1->hw) :
     VAR_0;

 if (VAR_2 & VAR_4)
  FUNC_1(VAR_1->dev, "\nCRITICAL: FAN FAILURE!! REPLACE IMMEDIATELY!!\n");
}
