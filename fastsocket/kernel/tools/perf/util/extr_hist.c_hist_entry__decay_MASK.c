
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; int nr_events; } ;
struct hist_entry {TYPE_1__ stat; } ;



__attribute__((used)) static void FUNC_0(struct hist_entry *VAR_0)
{
 VAR_0->stat.period = (VAR_0->stat.period * 7) / 8;
 VAR_0->stat.nr_events = (VAR_0->stat.nr_events * 7) / 8;
}
