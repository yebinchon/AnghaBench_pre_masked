
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int speed; int width; int type; } ;
struct i40e_hw {TYPE_1__ bus; } ;


 int VAR_0 ;



 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_0(struct i40e_hw *VAR_12, u16 VAR_13)
{
 VAR_12->bus.type = VAR_6;

 switch (VAR_13 & VAR_1) {
 case 131:
  VAR_12->bus.width = VAR_7;
  break;
 case 130:
  VAR_12->bus.width = VAR_8;
  break;
 case 129:
  VAR_12->bus.width = VAR_9;
  break;
 case 128:
  VAR_12->bus.width = VAR_10;
  break;
 default:
  VAR_12->bus.width = VAR_11;
  break;
 }

 switch (VAR_13 & VAR_0) {
 case 134:
  VAR_12->bus.speed = VAR_2;
  break;
 case 133:
  VAR_12->bus.speed = VAR_3;
  break;
 case 132:
  VAR_12->bus.speed = VAR_4;
  break;
 default:
  VAR_12->bus.speed = VAR_5;
  break;
 }
}
