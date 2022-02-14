
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int get_media_type; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;


 int FUNC_0 (struct ixgbe_hw*,int ,struct ixgbe_hw*,int ) ;
 int VAR_0 ;

enum ixgbe_media_type FUNC_1(struct ixgbe_hw *VAR_1)
{
 return FUNC_0(VAR_1, VAR_1->mac.ops.get_media_type, (VAR_1),
          VAR_0);
}
