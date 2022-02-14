
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int * nr_events; } ;
struct hists {TYPE_1__ stats; } ;



void FUNC_0(struct hists *VAR_0, u32 VAR_1)
{
 ++VAR_0->stats.nr_events[0];
 ++VAR_0->stats.nr_events[VAR_1];
}
