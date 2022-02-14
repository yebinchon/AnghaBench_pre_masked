
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct TYPE_4__ {double total_period; } ;
struct hists {TYPE_2__ stats; } ;
struct TYPE_3__ {double period_guest_sys; } ;
struct hist_entry {TYPE_1__ stat; struct hists* hists; } ;


 int FUNC_0 (int ,int ,char*,double) ;

__attribute__((used)) static int FUNC_1(struct perf_hpp *VAR_0,
      struct hist_entry *VAR_1)
{
 struct hists *VAR_2 = VAR_1->hists;
 double VAR_3 = 100.0 * VAR_1->stat.period_guest_sys / VAR_2->stats.total_period;

 return FUNC_0(VAR_0->buf, VAR_0->size, " %6.2f%% ", VAR_3);
}
