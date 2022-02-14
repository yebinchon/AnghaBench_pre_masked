
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; } ;
typedef int if_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct adapter* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_1)
{
 struct adapter *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->hw.mac.type == VAR_0) {
  FUNC_0(VAR_1);
 }
 return (0);
}
