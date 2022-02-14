
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int speed; int type; } ;
struct e1000_hw {TYPE_1__ bus; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_4)
{
 FUNC_0("e1000_get_bus_info_82542");

 VAR_4->bus.type = VAR_2;
 VAR_4->bus.speed = VAR_1;
 VAR_4->bus.width = VAR_3;

 return VAR_0;
}
