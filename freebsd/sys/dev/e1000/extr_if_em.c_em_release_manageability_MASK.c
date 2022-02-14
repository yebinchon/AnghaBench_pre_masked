
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int hw; scalar_t__ has_manage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_3)
{
 if (VAR_3->has_manage) {
  int VAR_4 = FUNC_0(&VAR_3->hw, VAR_0);


  VAR_4 |= VAR_1;
  VAR_4 &= ~VAR_2;

  FUNC_1(&VAR_3->hw, VAR_0, VAR_4);
 }
}
