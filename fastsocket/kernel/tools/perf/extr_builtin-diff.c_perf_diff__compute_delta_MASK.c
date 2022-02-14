
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double period_ratio_delta; int computed; } ;
struct TYPE_3__ {int period; } ;
struct hist_entry {TYPE_2__ diff; TYPE_1__ stat; } ;


 double FUNC_0 (struct hist_entry*,int ) ;
 struct hist_entry* FUNC_1 (struct hist_entry*) ;

double FUNC_2(struct hist_entry *VAR_0)
{
 struct hist_entry *VAR_1 = FUNC_1(VAR_0);
 double VAR_2 = FUNC_0(VAR_0, VAR_0->stat.period);
 double VAR_3 = VAR_1 ? FUNC_0(VAR_1, VAR_1->stat.period) : 0.0;

 VAR_0->diff.period_ratio_delta = VAR_2 - VAR_3;
 VAR_0->diff.computed = 1;
 return VAR_0->diff.period_ratio_delta;
}
