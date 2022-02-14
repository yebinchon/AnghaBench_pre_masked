
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_4)
{
 s32 VAR_5 = VAR_0;

 FUNC_0("ixgbe_obtain_mbx_lock_vf");


 FUNC_1(VAR_4, VAR_2, VAR_3);


 if (FUNC_2(VAR_4) & VAR_3)
  VAR_5 = VAR_1;

 return VAR_5;
}
