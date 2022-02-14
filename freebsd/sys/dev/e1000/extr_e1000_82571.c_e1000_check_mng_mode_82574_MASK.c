
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static bool FUNC_2(struct e1000_hw *VAR_3)
{
 u16 VAR_4;
 s32 VAR_5;

 FUNC_0("e1000_check_mng_mode_82574");

 VAR_5 = VAR_3->nvm.ops.read(VAR_3, VAR_2, 1, &VAR_4);
 if (VAR_5)
  return VAR_1;

 return (VAR_4 & VAR_0) != 0;
}
