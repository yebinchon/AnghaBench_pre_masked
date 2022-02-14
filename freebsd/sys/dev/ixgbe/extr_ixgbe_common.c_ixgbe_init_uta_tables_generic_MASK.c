
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_1)
{
 int VAR_2;

 FUNC_0("ixgbe_init_uta_tables_generic");
 FUNC_1(" Clearing UTA\n");

 for (VAR_2 = 0; VAR_2 < 128; VAR_2++)
  FUNC_3(VAR_1, FUNC_2(VAR_2), 0);

 return VAR_0;
}
