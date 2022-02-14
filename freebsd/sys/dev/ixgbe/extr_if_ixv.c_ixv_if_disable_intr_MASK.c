
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_2(VAR_2);
 FUNC_1(&VAR_3->hw, VAR_0, 0);
 FUNC_1(&VAR_3->hw, VAR_1, ~0);
 FUNC_0(&VAR_3->hw);
}
