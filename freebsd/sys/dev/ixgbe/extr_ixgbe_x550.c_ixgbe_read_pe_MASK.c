
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int *) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 s32 VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1, VAR_5);
 if (VAR_6 != VAR_2)
  FUNC_0(VAR_0,
         "port expander access failed with %d\n", VAR_6);
 return VAR_6;
}
