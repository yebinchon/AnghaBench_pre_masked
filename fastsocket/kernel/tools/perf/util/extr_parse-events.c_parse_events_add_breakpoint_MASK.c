
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {unsigned long bp_addr; scalar_t__ bp_type; int bp_len; int sample_period; int type; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct list_head**,int*,struct perf_event_attr*,int *) ;
 int FUNC_1 (struct perf_event_attr*,int ,int) ;
 scalar_t__ FUNC_2 (char*,struct perf_event_attr*) ;

int FUNC_3(struct list_head **VAR_4, int *VAR_5,
    void *VAR_6, char *VAR_7)
{
 struct perf_event_attr VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.bp_addr = (unsigned long) VAR_6;

 if (FUNC_2(VAR_7, &VAR_8))
  return -VAR_0;





 if (VAR_8.bp_type == VAR_2)
  VAR_8.bp_len = sizeof(long);
 else
  VAR_8.bp_len = VAR_1;

 VAR_8.type = VAR_3;
 VAR_8.sample_period = 1;

 return FUNC_0(VAR_4, VAR_5, &VAR_8, ((void*)0));
}
