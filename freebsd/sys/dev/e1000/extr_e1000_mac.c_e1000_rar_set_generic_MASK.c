
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct e1000_hw *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;

 FUNC_0("e1000_rar_set_generic");




 VAR_5 = ((u32) VAR_3[0] | ((u32) VAR_3[1] << 8) |
     ((u32) VAR_3[2] << 16) | ((u32) VAR_3[3] << 24));

 VAR_6 = ((u32) VAR_3[4] | ((u32) VAR_3[5] << 8));


 if (VAR_5 || VAR_6)
  VAR_6 |= VAR_0;





 FUNC_4(VAR_2, FUNC_2(VAR_4), VAR_5);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2, FUNC_1(VAR_4), VAR_6);
 FUNC_3(VAR_2);

 return VAR_1;
}
