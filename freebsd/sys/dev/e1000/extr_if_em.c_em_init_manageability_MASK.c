
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int hw; scalar_t__ has_manage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_6)
{


 if (VAR_6->has_manage) {
  int VAR_7 = FUNC_0(&VAR_6->hw, VAR_1);
  int VAR_8 = FUNC_0(&VAR_6->hw, VAR_0);


  VAR_8 &= ~(VAR_2);


  VAR_8 |= VAR_3;


  VAR_7 |= (1 << 5);
  VAR_7 |= (1 << 6);
  FUNC_1(&VAR_6->hw, VAR_1, VAR_7);
  FUNC_1(&VAR_6->hw, VAR_0, VAR_8);
 }
}
