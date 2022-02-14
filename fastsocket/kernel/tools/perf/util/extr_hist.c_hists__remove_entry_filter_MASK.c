
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * nr_events; int total_period; } ;
struct hists {TYPE_1__ stats; scalar_t__ nr_entries; } ;
struct TYPE_5__ {scalar_t__ nr_events; scalar_t__ period; } ;
struct TYPE_6__ {scalar_t__ unfolded; } ;
struct hist_entry {int filtered; TYPE_2__ stat; scalar_t__ row_offset; scalar_t__ nr_rows; TYPE_3__ ms; } ;
typedef enum hist_filter { ____Placeholder_hist_filter } hist_filter ;


 size_t VAR_0 ;
 int FUNC_0 (struct hists*,struct hist_entry*) ;

__attribute__((used)) static void FUNC_1(struct hists *VAR_1, struct hist_entry *VAR_2,
           enum hist_filter VAR_3)
{
 VAR_2->filtered &= ~(1 << VAR_3);
 if (VAR_2->filtered)
  return;

 ++VAR_1->nr_entries;
 if (VAR_2->ms.unfolded)
  VAR_1->nr_entries += VAR_2->nr_rows;
 VAR_2->row_offset = 0;
 VAR_1->stats.total_period += VAR_2->stat.period;
 VAR_1->stats.nr_events[VAR_0] += VAR_2->stat.nr_events;

 FUNC_0(VAR_1, VAR_2);
}
