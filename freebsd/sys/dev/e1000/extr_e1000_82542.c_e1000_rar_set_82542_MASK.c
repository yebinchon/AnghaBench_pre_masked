
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct e1000_hw *VAR_3, u8 *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 FUNC_0("e1000_rar_set_82542");





 VAR_6 = ((u32) VAR_4[0] | ((u32) VAR_4[1] << 8) |
     ((u32) VAR_4[2] << 16) | ((u32) VAR_4[3] << 24));

 VAR_7 = ((u32) VAR_4[4] | ((u32) VAR_4[5] << 8));


 if (VAR_6 || VAR_7)
  VAR_7 |= VAR_1;

 FUNC_1(VAR_3, VAR_0, (VAR_5 << 1), VAR_6);
 FUNC_1(VAR_3, VAR_0, ((VAR_5 << 1) + 1), VAR_7);

 return VAR_2;
}
