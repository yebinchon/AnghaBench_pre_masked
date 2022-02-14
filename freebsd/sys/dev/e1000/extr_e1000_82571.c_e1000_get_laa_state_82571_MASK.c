
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int laa_is_present; } ;
struct TYPE_6__ {TYPE_2__ _82571; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ dev_spec; TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_1(struct e1000_hw *VAR_2)
{
 FUNC_0("e1000_get_laa_state_82571");

 if (VAR_2->mac.type != VAR_1)
  return VAR_0;

 return VAR_2->dev_spec._82571.laa_is_present;
}
