
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int hrtimer; int sample_period; int period_left; } ;
struct perf_event {struct hw_perf_event hw; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 s64 VAR_4;

 if (!FUNC_1(VAR_2))
  return;

 VAR_4 = FUNC_2(&VAR_3->period_left);
 if (VAR_4) {
  if (VAR_4 < 0)
   VAR_4 = 10000;

  FUNC_3(&VAR_3->period_left, 0);
 } else {
  VAR_4 = FUNC_4(VAR_1, 10000, VAR_3->sample_period);
 }
 FUNC_0(&VAR_3->hrtimer,
    FUNC_5(VAR_4), 0,
    VAR_0, 0);
}
