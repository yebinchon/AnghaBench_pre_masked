
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef double u64 ;
struct hist_entry {TYPE_2__* hists; } ;
struct TYPE_3__ {double total_period; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;



__attribute__((used)) static double FUNC_0(struct hist_entry *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = VAR_0->hists->stats.total_period;
 return (VAR_1 * 100.0) / VAR_2;
}
