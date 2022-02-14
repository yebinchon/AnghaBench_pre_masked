
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct ev_token_bucket_cfg {size_t read_rate; size_t write_rate; size_t read_maximum; size_t write_maximum; int msec_per_tick; int tick_timeout; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct timeval const*,int) ;
 struct ev_token_bucket_cfg* FUNC_1 (int,int) ;

struct ev_token_bucket_cfg *
FUNC_2(size_t VAR_2, size_t VAR_3,
    size_t VAR_4, size_t VAR_5,
    const struct timeval *VAR_6)
{
 struct ev_token_bucket_cfg *VAR_7;
 struct timeval VAR_8;
 if (! VAR_6) {
  VAR_8.tv_sec = 1;
  VAR_8.tv_usec = 0;
  VAR_6 = &VAR_8;
 }
 if (VAR_2 > VAR_3 || VAR_4 > VAR_5 ||
     VAR_2 < 1 || VAR_4 < 1)
  return ((void*)0);
 if (VAR_2 > VAR_1 ||
     VAR_4 > VAR_1 ||
     VAR_3 > VAR_1 ||
     VAR_5 > VAR_1)
  return ((void*)0);
 VAR_7 = FUNC_1(1, sizeof(struct ev_token_bucket_cfg));
 if (!VAR_7)
  return ((void*)0);
 VAR_7->read_rate = VAR_2;
 VAR_7->write_rate = VAR_4;
 VAR_7->read_maximum = VAR_3;
 VAR_7->write_maximum = VAR_5;
 FUNC_0(&VAR_7->tick_timeout, VAR_6, sizeof(struct timeval));
 VAR_7->msec_per_tick = (VAR_6->tv_sec * 1000) +
     (VAR_6->tv_usec & VAR_0)/1000;
 return VAR_7;
}
