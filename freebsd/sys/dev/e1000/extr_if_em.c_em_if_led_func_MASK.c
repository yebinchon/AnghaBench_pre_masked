
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int hw; } ;
typedef int if_ctx_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct adapter* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_0, int VAR_1)
{
 struct adapter *VAR_2 = FUNC_4(VAR_0);

 if (VAR_1) {
  FUNC_3(&VAR_2->hw);
  FUNC_2(&VAR_2->hw);
 } else {
  FUNC_1(&VAR_2->hw);
  FUNC_0(&VAR_2->hw);
 }
}
