
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_6__ {void** perm_addr; void** addr; } ;
struct TYPE_4__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;

s32 FUNC_3(struct e1000_hw *VAR_2)
{
 s32 VAR_3 = VAR_0;
 u16 VAR_4, VAR_5, VAR_6;

 FUNC_0("e1000_read_mac_addr");

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += 2) {
  VAR_4 = VAR_6 >> 1;
  VAR_3 = VAR_2->nvm.ops.read(VAR_2, VAR_4, 1, &VAR_5);
  if (VAR_3) {
   FUNC_1("NVM Read Error\n");
   goto out;
  }
  VAR_2->mac.perm_addr[VAR_6] = (u8)(VAR_5 & 0xFF);
  VAR_2->mac.perm_addr[VAR_6+1] = (u8)(VAR_5 >> 8);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_2->mac.addr[VAR_6] = VAR_2->mac.perm_addr[VAR_6];

out:
 return VAR_3;
}
