
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct link {int max_pkt_target; int max_pkt; scalar_t__ max_pkt_probes; TYPE_2__* b_ptr; } ;
struct TYPE_3__ {int mtu; } ;
struct TYPE_4__ {TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct link *VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_2->b_ptr->publ.mtu & ~3);
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_2->max_pkt_target = VAR_3;
 if (VAR_2->max_pkt_target < VAR_1)
  VAR_2->max_pkt = VAR_2->max_pkt_target;
 else
  VAR_2->max_pkt = VAR_1;

 VAR_2->max_pkt_probes = 0;
}
