
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dst_mac; } ;
struct TYPE_3__ {int dst_mac; } ;
struct ib_flow_spec_eth {scalar_t__ type; int size; TYPE_2__ val; TYPE_1__ mask; } ;
struct ib_flow_attr {scalar_t__ type; int size; int num_of_specs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ib_flow_attr *VAR_2)
{
 struct ib_flow_spec_eth *VAR_3;

 if (VAR_2->type != VAR_0 ||
     VAR_2->size < sizeof(struct ib_flow_attr) +
     sizeof(struct ib_flow_spec_eth) ||
     VAR_2->num_of_specs < 1)
  return 0;

 VAR_3 = (struct ib_flow_spec_eth *)(VAR_2 + 1);
 if (VAR_3->type != VAR_1 ||
     VAR_3->size != sizeof(*VAR_3))
  return 0;

 return FUNC_0(VAR_3->mask.dst_mac) &&
        FUNC_0(VAR_3->val.dst_mac);
}
