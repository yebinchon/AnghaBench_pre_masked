
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* rar_set ) (struct e1000_hw*,int ,scalar_t__) ;} ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ rar_entry_count; int addr; TYPE_3__ ops; } ;
struct TYPE_5__ {int laa_is_present; } ;
struct TYPE_6__ {TYPE_1__ _82571; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_2__ dev_spec; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ,scalar_t__) ;

void FUNC_2(struct e1000_hw *VAR_1, bool VAR_2)
{
 FUNC_0("e1000_set_laa_state_82571");

 if (VAR_1->mac.type != VAR_0)
  return;

 VAR_1->dev_spec._82571.laa_is_present = VAR_2;


 if (VAR_2)






  VAR_1->mac.ops.rar_set(VAR_1, VAR_1->mac.addr,
        VAR_1->mac.rar_entry_count - 1);
 return;
}
