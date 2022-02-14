
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int const) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int const) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; } ;
struct TYPE_5__ {int checksum; int buf_lenl; scalar_t__ buf_lenh; int cmd; } ;
struct TYPE_6__ {TYPE_1__ req; } ;
struct ixgbe_hic_read_shadow_ram {scalar_t__ pad3; scalar_t__ pad2; int length; int address; TYPE_2__ hdr; } ;
typedef scalar_t__ s32 ;
typedef int buffer ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*,int,int ) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int const) ;
 int FUNC_6 (struct ixgbe_hw*,int const) ;

s32 FUNC_7(struct ixgbe_hw *VAR_8, u16 VAR_9, u16 *VAR_10)
{
 const u32 VAR_11 = VAR_6 | VAR_5;
 struct ixgbe_hic_read_shadow_ram VAR_12;
 s32 VAR_13;

 FUNC_0("ixgbe_read_ee_hostif_X550");
 VAR_12.hdr.req.cmd = VAR_2;
 VAR_12.hdr.req.buf_lenh = 0;
 VAR_12.hdr.req.buf_lenl = VAR_3;
 VAR_12.hdr.req.checksum = VAR_0;


 VAR_12.address = FUNC_2(VAR_9 * 2);

 VAR_12.length = FUNC_1(sizeof(u16));
 VAR_12.pad2 = 0;
 VAR_12.pad3 = 0;

 VAR_13 = VAR_8->mac.ops.acquire_swfw_sync(VAR_8, VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_8, (u32 *)&VAR_12, sizeof(VAR_12),
        VAR_7);
 if (!VAR_13) {
  *VAR_10 = (u16)FUNC_3(VAR_8, VAR_4,
        VAR_1);
 }

 VAR_8->mac.ops.release_swfw_sync(VAR_8, VAR_11);
 return VAR_13;
}
