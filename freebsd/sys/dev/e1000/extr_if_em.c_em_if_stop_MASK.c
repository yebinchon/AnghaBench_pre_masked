
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; } ;
typedef int if_ctx_t ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct adapter* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_5(VAR_2);

 FUNC_1("em_if_stop: begin");

 FUNC_4(&VAR_3->hw);
 if (VAR_3->hw.mac.type >= VAR_1)
  FUNC_0(&VAR_3->hw, VAR_0, 0);

 FUNC_3(&VAR_3->hw);
 FUNC_2(&VAR_3->hw);
}
