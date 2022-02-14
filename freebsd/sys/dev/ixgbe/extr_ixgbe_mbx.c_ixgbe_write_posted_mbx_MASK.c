
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write ) (struct ixgbe_hw*,int *,int ,int ) ;} ;
struct ixgbe_mbx_info {TYPE_1__ ops; int timeout; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int *,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1, u32 *VAR_2, u16 VAR_3,
      u16 VAR_4)
{
 struct ixgbe_mbx_info *VAR_5 = &VAR_1->mbx;
 s32 VAR_6 = VAR_0;

 FUNC_0("ixgbe_write_posted_mbx");


 if (!VAR_5->ops.write || !VAR_5->timeout)
  goto out;


 VAR_6 = VAR_5->ops.write(VAR_1, VAR_2, VAR_3, VAR_4);


 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_1, VAR_4);
out:
 return VAR_6;
}
