
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int checksum; int buf_lenl; scalar_t__ buf_lenh; int cmd; } ;
union ixgbe_hic_hdr2 {TYPE_1__ req; } ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;
typedef int buffer ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int *,int,int ,int ) ;

s32 FUNC_2(struct ixgbe_hw *VAR_6)
{
 s32 VAR_7 = VAR_5;
 union ixgbe_hic_hdr2 VAR_8;

 FUNC_0("ixgbe_update_flash_X550");

 VAR_8.req.cmd = VAR_2;
 VAR_8.req.buf_lenh = 0;
 VAR_8.req.buf_lenl = VAR_3;
 VAR_8.req.checksum = VAR_1;

 VAR_7 = FUNC_1(VAR_6, (u32 *)&VAR_8,
           sizeof(VAR_8),
           VAR_4, VAR_0);

 return VAR_7;
}
