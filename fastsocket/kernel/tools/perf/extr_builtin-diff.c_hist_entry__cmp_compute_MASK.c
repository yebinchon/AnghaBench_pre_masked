
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double period_ratio_delta; double period_ratio; scalar_t__ wdiff; } ;
struct hist_entry {TYPE_1__ diff; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;



 scalar_t__ FUNC_1 (double,double) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1,
   int VAR_2)
{
 switch (VAR_2) {
 case 130:
 {
  double VAR_3 = VAR_0->diff.period_ratio_delta;
  double VAR_4 = VAR_1->diff.period_ratio_delta;

  return FUNC_1(VAR_3, VAR_4);
 }
 case 129:
 {
  double VAR_5 = VAR_0->diff.period_ratio;
  double VAR_6 = VAR_1->diff.period_ratio;

  return FUNC_1(VAR_5, VAR_6);
 }
 case 128:
 {
  s64 VAR_7 = VAR_0->diff.wdiff;
  s64 VAR_8 = VAR_1->diff.wdiff;

  return VAR_8 - VAR_7;
 }
 default:
  FUNC_0(1);
 }

 return 0;
}
