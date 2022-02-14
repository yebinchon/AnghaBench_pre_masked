
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; } ;
typedef int if_ctx_t ;
 struct adapter* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(if_ctx_t VAR_0)
{
 struct adapter *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;


 switch (VAR_1->hw.mac.type) {
 case 133:
 case 132:
 case 129:
 case 128:
  VAR_2 = 8;
  break;
 case 131:
 case 134:
  VAR_2 = 4;
  break;
 case 130:
 case 135:
  VAR_2 = 2;
  break;
 default:
  VAR_2 = 1;
  break;
 }

 return (VAR_2);
}
