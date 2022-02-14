
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct adapter {scalar_t__ intr_type; TYPE_2__ hw; } ;
typedef int if_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 struct adapter* FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_4)
{
 struct adapter *VAR_5 = FUNC_3(VAR_4);

 if (VAR_5->intr_type == VAR_0)
  FUNC_2(&VAR_5->hw, VAR_1, 0);
 if (VAR_5->hw.mac.type == VAR_3) {
  FUNC_2(&VAR_5->hw, VAR_2, ~0);
 } else {
  FUNC_2(&VAR_5->hw, VAR_2, 0xFFFF0000);
  FUNC_2(&VAR_5->hw, FUNC_0(0), ~0);
  FUNC_2(&VAR_5->hw, FUNC_0(1), ~0);
 }
 FUNC_1(&VAR_5->hw);

}
