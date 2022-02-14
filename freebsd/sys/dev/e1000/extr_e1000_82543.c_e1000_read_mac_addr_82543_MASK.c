
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_8__ {int* perm_addr; int* addr; } ;
struct TYPE_7__ {scalar_t__ func; } ;
struct TYPE_5__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_3__ bus; TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;

s32 FUNC_3(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = VAR_1;
 u16 VAR_5, VAR_6, VAR_7;

 FUNC_0("e1000_read_mac_addr");

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += 2) {
  VAR_5 = VAR_7 >> 1;
  VAR_4 = VAR_3->nvm.ops.read(VAR_3, VAR_5, 1, &VAR_6);
  if (VAR_4) {
   FUNC_1("NVM Read Error\n");
   goto out;
  }
  VAR_3->mac.perm_addr[VAR_7] = (u8)(VAR_6 & 0xFF);
  VAR_3->mac.perm_addr[VAR_7+1] = (u8)(VAR_6 >> 8);
 }


 if (VAR_3->bus.func == VAR_0)
  VAR_3->mac.perm_addr[5] ^= 1;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_3->mac.addr[VAR_7] = VAR_3->mac.perm_addr[VAR_7];

out:
 return VAR_4;
}
