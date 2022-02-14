
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_limit; } ;
struct bufferevent_rate_limit_group {TYPE_1__ rate_limit; } ;
typedef int ev_ssize_t ;


 int FUNC_0 (struct bufferevent_rate_limit_group*) ;
 int FUNC_1 (struct bufferevent_rate_limit_group*) ;

ev_ssize_t
FUNC_2(
 struct bufferevent_rate_limit_group *VAR_0)
{
 ev_ssize_t VAR_1;
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->rate_limit.write_limit;
 FUNC_1(VAR_0);
 return VAR_1;
}
