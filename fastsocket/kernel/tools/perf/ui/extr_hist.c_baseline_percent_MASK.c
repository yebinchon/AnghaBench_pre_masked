
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef double u64 ;
struct TYPE_3__ {double total_period; } ;
struct hists {TYPE_1__ stats; } ;
struct TYPE_4__ {double period; } ;
struct hist_entry {TYPE_2__ stat; struct hists* hists; } ;


 struct hist_entry* FUNC_0 (struct hist_entry*) ;

__attribute__((used)) static double FUNC_1(struct hist_entry *VAR_0)
{
 struct hist_entry *VAR_1 = FUNC_0(VAR_0);
 struct hists *VAR_2 = VAR_1 ? VAR_1->hists : ((void*)0);
 double VAR_3 = 0.0;

 if (VAR_1) {
  u64 VAR_4 = VAR_2->stats.total_period;
  u64 VAR_5 = VAR_1->stat.period;

  VAR_3 = 100.0 * VAR_5 / VAR_4;
 }

 return VAR_3;
}
