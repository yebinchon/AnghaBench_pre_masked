
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int period_guest_us; int period_guest_sys; int period_us; int period_sys; } ;
struct hist_entry {TYPE_1__ stat; } ;







__attribute__((used)) static void FUNC_0(struct hist_entry *VAR_0,
        unsigned int VAR_1, u64 VAR_2)
{
 switch (VAR_1) {
 case 129:
  VAR_0->stat.period_sys += VAR_2;
  break;
 case 128:
  VAR_0->stat.period_us += VAR_2;
  break;
 case 131:
  VAR_0->stat.period_guest_sys += VAR_2;
  break;
 case 130:
  VAR_0->stat.period_guest_us += VAR_2;
  break;
 default:
  break;
 }
}
