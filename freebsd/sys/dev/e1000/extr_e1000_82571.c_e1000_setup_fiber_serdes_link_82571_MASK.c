
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;


 int FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2)
{
 FUNC_0("e1000_setup_fiber_serdes_link_82571");

 switch (VAR_2->mac.type) {
 case 129:
 case 128:






  FUNC_1(VAR_2, VAR_0,
    VAR_1);
  break;
 default:
  break;
 }

 return FUNC_2(VAR_2);
}
