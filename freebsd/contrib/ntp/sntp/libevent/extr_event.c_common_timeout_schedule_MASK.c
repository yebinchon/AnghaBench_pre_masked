
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct event {struct timeval ev_timeout; } ;
struct common_timeout_list {int timeout_event; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct timeval*,int) ;

__attribute__((used)) static void
FUNC_1(struct common_timeout_list *VAR_1,
    const struct timeval *VAR_2, struct event *VAR_3)
{
 struct timeval VAR_4 = VAR_3->ev_timeout;
 VAR_4.tv_usec &= VAR_0;
 FUNC_0(&VAR_1->timeout_event, &VAR_4, 1);
}
