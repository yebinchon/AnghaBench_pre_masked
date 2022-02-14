
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_3__ {int checksum; int buf_lenl; scalar_t__ buf_lenh; int cmd; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct ixgbe_hic_write_shadow_ram {int data; int address; int length; TYPE_2__ hdr; } ;
typedef int s32 ;
typedef int buffer ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct ixgbe_hw*,int *,int,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5, u16 VAR_6,
        u16 VAR_7)
{
 s32 VAR_8;
 struct ixgbe_hic_write_shadow_ram VAR_9;

 FUNC_0("ixgbe_write_ee_hostif_data_X550");

 VAR_9.hdr.req.cmd = VAR_2;
 VAR_9.hdr.req.buf_lenh = 0;
 VAR_9.hdr.req.buf_lenl = VAR_3;
 VAR_9.hdr.req.checksum = VAR_1;


 VAR_9.length = FUNC_1(sizeof(u16));
 VAR_9.data = VAR_7;
 VAR_9.address = FUNC_2(VAR_6 * 2);

 VAR_8 = FUNC_3(VAR_5, (u32 *)&VAR_9,
           sizeof(VAR_9),
           VAR_4, VAR_0);

 return VAR_8;
}
