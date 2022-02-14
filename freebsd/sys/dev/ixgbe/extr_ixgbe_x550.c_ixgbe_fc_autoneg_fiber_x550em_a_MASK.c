
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requested_mode; int current_mode; int fc_was_autonegged; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;


 int VAR_0 ;

void FUNC_0(struct ixgbe_hw *VAR_1)
{
 VAR_1->fc.fc_was_autonegged = VAR_0;
 VAR_1->fc.current_mode = VAR_1->fc.requested_mode;
}
