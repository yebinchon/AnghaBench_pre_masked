
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t read_rate; size_t write_rate; } ;
struct bufferevent_rate_limit_group {size_t configured_min_share; size_t min_share; TYPE_1__ rate_limit_cfg; } ;


 size_t VAR_0 ;

int
FUNC_0(
 struct bufferevent_rate_limit_group *VAR_1,
 size_t VAR_2)
{
 if (VAR_2 > VAR_0)
  return -1;

 VAR_1->configured_min_share = VAR_2;



 if (VAR_2 > VAR_1->rate_limit_cfg.read_rate)
  VAR_2 = VAR_1->rate_limit_cfg.read_rate;
 if (VAR_2 > VAR_1->rate_limit_cfg.write_rate)
  VAR_2 = VAR_1->rate_limit_cfg.write_rate;

 VAR_1->min_share = VAR_2;
 return 0;
}
