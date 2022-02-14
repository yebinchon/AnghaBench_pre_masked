
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int (* read_posted ) (struct e1000_hw*,int*,int,int ) ;int (* write_posted ) (struct e1000_hw*,int*,int,int ) ;int (* check_for_rst ) (struct e1000_hw*,int ) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; int timeout; } ;
struct TYPE_4__ {int perm_addr; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct e1000_hw*,int ) ;
 int FUNC_7 (struct e1000_hw*,int*,int,int ) ;
 int FUNC_8 (struct e1000_hw*,int*,int,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_7)
{
 struct e1000_mbx_info *VAR_8 = &VAR_7->mbx;
 u32 VAR_9 = VAR_3;
 s32 VAR_10 = -VAR_2;
 u32 VAR_11, VAR_12[3];
 u8 *VAR_13 = (u8 *)(&VAR_12[1]);

 FUNC_0("e1000_reset_hw_vf");

 FUNC_1("Issuing a function level reset to MAC\n");
 VAR_11 = FUNC_2(VAR_7, VAR_0);
 FUNC_3(VAR_7, VAR_0, VAR_11 | VAR_1);


 while (!VAR_8->ops.check_for_rst(VAR_7, 0) && VAR_9) {
  VAR_9--;
  FUNC_9(5);
 }

 if (VAR_9) {

  VAR_8->timeout = VAR_4;

  VAR_12[0] = VAR_5;
  VAR_8->ops.write_posted(VAR_7, VAR_12, 1, 0);

  FUNC_5(10);


  VAR_10 = VAR_8->ops.read_posted(VAR_7, VAR_12, 3, 0);
  if (!VAR_10) {
   if (VAR_12[0] == (VAR_5 |
       VAR_6))
    FUNC_4(VAR_7->mac.perm_addr, VAR_13, 6);
   else
    VAR_10 = -VAR_2;
  }
 }

 return VAR_10;
}
