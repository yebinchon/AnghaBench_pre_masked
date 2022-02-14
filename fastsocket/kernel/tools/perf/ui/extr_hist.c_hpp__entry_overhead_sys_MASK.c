
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct TYPE_5__ {double total_period; } ;
struct hists {TYPE_2__ stats; } ;
struct TYPE_4__ {double period_sys; } ;
struct hist_entry {TYPE_1__ stat; struct hists* hists; } ;
struct TYPE_6__ {scalar_t__ field_sep; } ;


 int FUNC_0 (int ,int ,char const*,double) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct perf_hpp *VAR_1, struct hist_entry *VAR_2)
{
 struct hists *VAR_3 = VAR_2->hists;
 double VAR_4 = 100.0 * VAR_2->stat.period_sys / VAR_3->stats.total_period;
 const char *VAR_5 = VAR_0.field_sep ? "%.2f" : "%6.2f%%";

 return FUNC_0(VAR_1->buf, VAR_1->size, VAR_5, VAR_4);
}
