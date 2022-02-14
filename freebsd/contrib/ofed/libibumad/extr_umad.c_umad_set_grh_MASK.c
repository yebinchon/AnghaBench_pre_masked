
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int grh_present; int traffic_class; int hop_limit; int flow_label; int ib_gid; } ;
struct ib_user_mad {TYPE_1__ addr; } ;
struct ib_mad_addr {int traffic_class; int hop_limit; scalar_t__ flow_label; int ib_gid; } ;


 int FUNC_0 (int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct ib_user_mad *VAR_2 = VAR_0;
 struct ib_mad_addr *VAR_3 = VAR_1;

 if (VAR_1) {
  VAR_2->addr.grh_present = 1;
  VAR_2->addr.ib_gid = VAR_3->ib_gid;


  VAR_2->addr.flow_label = FUNC_0((uint32_t)VAR_3->flow_label);
  VAR_2->addr.hop_limit = VAR_3->hop_limit;
  VAR_2->addr.traffic_class = VAR_3->traffic_class;
 } else
  VAR_2->addr.grh_present = 0;
 return 0;
}
