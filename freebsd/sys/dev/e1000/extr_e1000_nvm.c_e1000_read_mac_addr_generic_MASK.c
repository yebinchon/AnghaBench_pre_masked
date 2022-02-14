
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_2__ {void** perm_addr; void** addr; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;

s32 FUNC_3(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_2(VAR_4, FUNC_0(0));
 VAR_6 = FUNC_2(VAR_4, FUNC_1(0));

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_4->mac.perm_addr[VAR_7] = (u8)(VAR_6 >> (VAR_7*8));

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_4->mac.perm_addr[VAR_7+4] = (u8)(VAR_5 >> (VAR_7*8));

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_4->mac.addr[VAR_7] = VAR_4->mac.perm_addr[VAR_7];

 return VAR_2;
}
