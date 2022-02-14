
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int,int,int *) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1, u32 VAR_2,
      u16 *VAR_3)
{
 FUNC_0("e1000_read_flash_word_ich8lan");

 if (!VAR_3)
  return -VAR_0;


 VAR_2 <<= 1;

 return FUNC_1(VAR_1, VAR_2, 2, VAR_3);
}
