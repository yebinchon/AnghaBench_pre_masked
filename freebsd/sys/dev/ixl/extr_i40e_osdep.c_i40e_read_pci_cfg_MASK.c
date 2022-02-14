
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i40e_osdep {int dev; } ;
struct i40e_hw {scalar_t__ back; } ;


 int FUNC_0 (int ,int ,int) ;

u16
FUNC_1(struct i40e_hw *VAR_0, u32 VAR_1)
{
        u16 VAR_2;

        VAR_2 = FUNC_0(((struct i40e_osdep *)VAR_0->back)->dev,
            VAR_1, 2);

        return (VAR_2);
}
