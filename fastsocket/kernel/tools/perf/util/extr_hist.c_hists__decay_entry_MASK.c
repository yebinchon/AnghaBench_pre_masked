
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int total_period; } ;
struct hists {TYPE_1__ stats; } ;
struct TYPE_4__ {scalar_t__ period; } ;
struct hist_entry {TYPE_2__ stat; int filtered; } ;


 int FUNC_0 (struct hist_entry*) ;

__attribute__((used)) static bool FUNC_1(struct hists *VAR_0, struct hist_entry *VAR_1)
{
 u64 VAR_2 = VAR_1->stat.period;

 if (VAR_2 == 0)
  return 1;

 FUNC_0(VAR_1);

 if (!VAR_1->filtered)
  VAR_0->stats.total_period -= VAR_2 - VAR_1->stat.period;

 return VAR_1->stat.period == 0;
}
