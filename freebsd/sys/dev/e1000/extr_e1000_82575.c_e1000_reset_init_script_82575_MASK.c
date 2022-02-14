
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ,int,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 FUNC_0("e1000_reset_init_script_82575");

 if (VAR_6->mac.type == VAR_5) {
  FUNC_1("Running reset init script for 82575\n");

  FUNC_2(VAR_6, VAR_3, 0x00, 0x0C);
  FUNC_2(VAR_6, VAR_3, 0x01, 0x78);
  FUNC_2(VAR_6, VAR_3, 0x1B, 0x23);
  FUNC_2(VAR_6, VAR_3, 0x23, 0x15);


  FUNC_2(VAR_6, VAR_0, 0x14, 0x00);
  FUNC_2(VAR_6, VAR_0, 0x10, 0x00);


  FUNC_2(VAR_6, VAR_1, 0x00, 0xEC);
  FUNC_2(VAR_6, VAR_1, 0x61, 0xDF);
  FUNC_2(VAR_6, VAR_1, 0x34, 0x05);
  FUNC_2(VAR_6, VAR_1, 0x2F, 0x81);


  FUNC_2(VAR_6, VAR_2, 0x02, 0x47);
  FUNC_2(VAR_6, VAR_2, 0x14, 0x00);
  FUNC_2(VAR_6, VAR_2, 0x10, 0x00);
 }

 return VAR_4;
}
