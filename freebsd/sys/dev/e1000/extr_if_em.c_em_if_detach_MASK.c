
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int hw; } ;
typedef int if_ctx_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 struct adapter* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_0)
{
 struct adapter *VAR_1 = FUNC_5(VAR_0);

 FUNC_0("em_if_detach: begin");

 FUNC_1(&VAR_1->hw);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0);

 return (0);
}
