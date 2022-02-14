
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* read_posted ) (struct e1000_hw*,int*,int,int ) ;int (* write_posted ) (struct e1000_hw*,int*,int,int ) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;
typedef enum e1000_promisc_type { ____Placeholder_e1000_promisc_type } e1000_promisc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct e1000_hw*,int*,int,int ) ;
 int FUNC_1 (struct e1000_hw*,int*,int,int ) ;

s32 FUNC_2(struct e1000_hw *VAR_5, enum e1000_promisc_type VAR_6)
{
 struct e1000_mbx_info *VAR_7 = &VAR_5->mbx;
 u32 VAR_8 = VAR_1;
 s32 VAR_9;

 switch (VAR_6) {
 case 129:
  VAR_8 |= VAR_2;
  break;
 case 130:
  VAR_8 |= VAR_2;

 case 128:
  VAR_8 |= VAR_3;

 case 131:
  break;
 default:
  return -VAR_0;
 }

  VAR_9 = VAR_7->ops.write_posted(VAR_5, &VAR_8, 1, 0);

 if (!VAR_9)
  VAR_9 = VAR_7->ops.read_posted(VAR_5, &VAR_8, 1, 0);

 if (!VAR_9 && !(VAR_8 & VAR_4))
  VAR_9 = -VAR_0;

 return VAR_9;
}
