
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ nvm; TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8;
 u16 VAR_9;

 FUNC_0("e1000_setup_link_82543");
 if (VAR_6->mac.type == VAR_5) {
  VAR_8 = VAR_6->nvm.ops.read(VAR_6, VAR_2, 1, &VAR_9);
  if (VAR_8) {
   FUNC_1("NVM Read Error\n");
   VAR_8 = -VAR_1;
   goto out;
  }
  VAR_7 = ((VAR_9 & VAR_4) <<
       VAR_3);
  FUNC_2(VAR_6, VAR_0, VAR_7);
 }

 VAR_8 = FUNC_3(VAR_6);

out:
 return VAR_8;
}
