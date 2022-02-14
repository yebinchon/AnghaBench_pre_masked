
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int *,int) ;

void FUNC_1(struct e1000_hw *VAR_2, u16 VAR_3, bool VAR_4)
{
 u32 VAR_5[2];

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_3;

 if (VAR_4)
  VAR_5[0] |= VAR_1;

 FUNC_0(VAR_2, VAR_5, 2);
}
