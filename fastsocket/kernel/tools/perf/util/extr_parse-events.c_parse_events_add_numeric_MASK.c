
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct perf_event_attr {int config; int type; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (struct list_head**,int*,struct perf_event_attr*,int *) ;
 scalar_t__ FUNC_1 (struct perf_event_attr*,struct list_head*,int) ;
 int FUNC_2 (struct perf_event_attr*,int ,int) ;

int FUNC_3(struct list_head **VAR_1, int *VAR_2,
        u32 VAR_3, u64 VAR_4,
        struct list_head *VAR_5)
{
 struct perf_event_attr VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_3;
 VAR_6.config = VAR_4;

 if (VAR_5 &&
     FUNC_1(&VAR_6, VAR_5, 1))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, &VAR_6, ((void*)0));
}
