
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct llc_station_state_ev {int dummy; } ;



__attribute__((used)) static __inline__ struct llc_station_state_ev *
     FUNC_0(struct sk_buff *VAR_0)
{
 return (struct llc_station_state_ev *)VAR_0->cb;
}
