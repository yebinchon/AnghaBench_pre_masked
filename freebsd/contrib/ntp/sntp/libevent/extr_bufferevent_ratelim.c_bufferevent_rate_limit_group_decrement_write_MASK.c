
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ write_limit; } ;
struct bufferevent_rate_limit_group {TYPE_1__ rate_limit; } ;
typedef scalar_t__ ev_ssize_t ;


 int FUNC_0 (struct bufferevent_rate_limit_group*) ;
 int FUNC_1 (struct bufferevent_rate_limit_group*) ;
 int FUNC_2 (struct bufferevent_rate_limit_group*) ;
 int FUNC_3 (struct bufferevent_rate_limit_group*) ;

int
FUNC_4(
 struct bufferevent_rate_limit_group *VAR_0, ev_ssize_t VAR_1)
{
 int VAR_2 = 0;
 ev_ssize_t VAR_3, VAR_4;
 FUNC_0(VAR_0);
 VAR_3 = VAR_0->rate_limit.write_limit;
 VAR_4 = (VAR_0->rate_limit.write_limit -= VAR_1);

 if (VAR_3 > 0 && VAR_4 <= 0) {
  FUNC_2(VAR_0);
 } else if (VAR_3 <= 0 && VAR_4 > 0) {
  FUNC_3(VAR_0);
 }

 FUNC_1(VAR_0);
 return VAR_2;
}
