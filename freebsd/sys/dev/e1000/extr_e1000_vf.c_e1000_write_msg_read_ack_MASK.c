
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* read_posted ) (struct e1000_hw*,int *,int,int ) ;int (* write_posted ) (struct e1000_hw*,int *,int ,int ) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int *,int ,int ) ;
 int FUNC_1 (struct e1000_hw*,int *,int,int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_1,
         u32 *VAR_2, u16 VAR_3)
{
 struct e1000_mbx_info *VAR_4 = &VAR_1->mbx;
 u32 VAR_5[VAR_0];
 s32 VAR_6 = VAR_4->ops.write_posted(VAR_1, VAR_2, VAR_3, 0);

 if (!VAR_6)
  VAR_4->ops.read_posted(VAR_1, VAR_5, VAR_0, 0);
}
