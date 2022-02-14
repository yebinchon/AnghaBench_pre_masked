
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct event_base {struct common_timeout_list** common_timeout_queues; } ;
struct common_timeout_list {int dummy; } ;


 size_t FUNC_0 (struct timeval const*) ;

__attribute__((used)) static inline struct common_timeout_list *
FUNC_1(struct event_base *VAR_0, const struct timeval *VAR_1)
{
 return VAR_0->common_timeout_queues[FUNC_0(VAR_1)];
}
