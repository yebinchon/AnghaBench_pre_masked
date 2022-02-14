
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ether_type; } ;
struct TYPE_4__ {scalar_t__ ether_type; } ;
struct TYPE_6__ {TYPE_2__ val; TYPE_1__ mask; } ;
union ib_flow_spec {scalar_t__ type; int size; TYPE_3__ eth; } ;
struct ib_flow_attr {unsigned int num_of_specs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(const struct ib_flow_attr *VAR_3)
{
 union ib_flow_spec *VAR_4 = (union ib_flow_spec *)(VAR_3 + 1);
 bool VAR_5 = 0;
 bool VAR_6 = 1;
 unsigned int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_3->num_of_specs; VAR_7++) {
  if (VAR_4->type == VAR_1 &&
      VAR_4->eth.mask.ether_type) {
   if (!((VAR_4->eth.mask.ether_type == FUNC_0(0xffff)) &&
         VAR_4->eth.val.ether_type == FUNC_0(VAR_0)))
    VAR_6 = 0;
  } else if (VAR_4->type == VAR_2) {
   VAR_5 = 1;
  }
  VAR_4 = (void *)VAR_4 + VAR_4->size;
 }
 return !VAR_5 || VAR_6;
}
