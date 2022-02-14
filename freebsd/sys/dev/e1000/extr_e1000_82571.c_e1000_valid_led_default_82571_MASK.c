
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {scalar_t__ (* read ) (struct e1000_hw*,int ,int,int *) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int,int *) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_7, u16 *VAR_8)
{
 s32 VAR_9;

 FUNC_0("e1000_valid_led_default_82571");

 VAR_9 = VAR_7->nvm.ops.read(VAR_7, VAR_6, 1, VAR_8);
 if (VAR_9) {
  FUNC_1("NVM Read Error\n");
  return VAR_9;
 }

 switch (VAR_7->mac.type) {
 case 130:
 case 129:
 case 128:
  if (*VAR_8 == VAR_4)
   *VAR_8 = VAR_2;
  break;
 default:
  if (*VAR_8 == VAR_3 ||
      *VAR_8 == VAR_5)
   *VAR_8 = VAR_1;
  break;
 }

 return VAR_0;
}
